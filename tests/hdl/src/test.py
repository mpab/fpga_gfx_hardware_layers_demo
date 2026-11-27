#!/usr/bin/env python3
"""Build and validate the tests/hdl harness.

The C++ test executable only drives the Verilog wrapper and prints raw model
output. This Python driver owns the test configuration: it loads the expected
CSV files, groups samples by reset state, invokes test.exe for the required
ticks, and compares the returned values.

Generated build output stays under out/tests/hdl.
"""

import csv
import subprocess
import sys
from pathlib import Path

MAKE_DIR = Path(__file__).resolve().parent.parent
PROJECT_ROOT = MAKE_DIR.parent.parent
EXE = PROJECT_ROOT / "out" / "tests" / "hdl" / "test.exe"
REPORT = EXE.parent / "results.md"
DATA_DIR = Path(sys.argv[1]) if len(sys.argv) > 1 else MAKE_DIR / "test_data"
SAMPLES_CSV = DATA_DIR / "expected_samples.csv"
RESET_CSV = DATA_DIR / "expected_reset.csv"

SAMPLE_CONFIG_FIELDS = ["reset"]
SAMPLE_OUTPUT_FIELDS = [
    "signals_valid",
    "video_enable",
    "beam_at_zero",
    "h_sync",
    "v_sync",
    "h_blank",
    "v_blank",
    "frame_start",
    "line_start",
    "beam_x",
    "beam_y",
    "red",
    "green",
    "blue",
]

RESET_OUTPUT_FIELDS = [
    "signals_valid",
    "video_enable",
    "beam_at_zero",
    "h_sync",
    "v_sync",
    "h_blank",
    "v_blank",
    "frame_start",
    "line_start",
    "beam_x",
    "beam_y",
]


def read_csv_rows(path: Path) -> list[dict[str, int]]:
    with path.open(newline="", encoding="utf-8") as f:
        reader = csv.DictReader(f)
        rows = []
        for row in reader:
            values = {}
            for key, value in row.items():
                if value is not None and value != "":
                    values[key] = int(value)
            rows.append(values)
        return rows


def build_if_needed() -> None:
    if not EXE.exists():
        subprocess.check_call(["make", "-C", str(MAKE_DIR), "test.exe"])


def run_model(args: list[str]) -> list[dict[str, int]]:
    output = subprocess.check_output(
        [str(EXE)] + args, text=True, cwd=PROJECT_ROOT / "hdl"
    )
    rows = []
    for line in output.splitlines():
        line = line.strip()
        if not line:
            continue
        try:
            values = [int(v) for v in line.split(",")]
        except ValueError:
            continue
        if len(values) != 15:
            continue
        rows.append(
            {
                "tick": values[0],
                "signals_valid": values[1],
                "video_enable": values[2],
                "beam_at_zero": values[3],
                "h_sync": values[4],
                "v_sync": values[5],
                "h_blank": values[6],
                "v_blank": values[7],
                "frame_start": values[8],
                "line_start": values[9],
                "beam_x": values[10],
                "beam_y": values[11],
                "red": values[12],
                "green": values[13],
                "blue": values[14],
            }
        )
    return rows


def table_separator(columns: int) -> str:
    return "| " + " | ".join(["---"] * columns) + " |"


def main() -> int:
    if not SAMPLES_CSV.exists():
        print(f"missing sample config: {SAMPLES_CSV}", file=sys.stderr)
        return 2
    if not RESET_CSV.exists():
        print(f"missing reset config: {RESET_CSV}", file=sys.stderr)
        return 2

    build_if_needed()

    samples = read_csv_rows(SAMPLES_CSV)
    resets = read_csv_rows(RESET_CSV)

    groups: dict[int, list[dict[str, int]]] = {}
    for sample in samples:
        reset = sample["reset"]
        groups.setdefault(reset, []).append(sample)

    checks = 0
    failures = 0
    sample_report_rows = []
    reset_report_rows = []
    failure_rows = []

    for reset, expected_rows in sorted(groups.items()):
        expected_rows.sort(key=lambda row: row["tick"])
        ticks = [str(row["tick"]) for row in expected_rows]

        args = ["--ticks", ",".join(ticks)]
        if reset:
            args.append("--reset")

        actual_rows = run_model(args)
        actual_by_tick = {row["tick"]: row for row in actual_rows}

        group_checks = 0
        group_failures = 0

        for expected in expected_rows:
            tick = expected["tick"]
            actual = actual_by_tick.get(tick)
            group_checks += 1
            checks += 1
            if actual is None:
                print(f"FAIL missing model output: reset={reset} tick={tick}")
                failures += 1
                group_failures += 1
                failure_rows.append((reset, tick, "missing output", "none", "none"))
                continue

            row_ok = True
            for field in SAMPLE_OUTPUT_FIELDS:
                if expected[field] != actual[field]:
                    print(
                        f"FAIL reset={reset} tick={tick} {field}: "
                        f"expected={expected[field]} actual={actual[field]}"
                    )
                    failure_rows.append(
                        (reset, tick, field, expected[field], actual[field])
                    )
                    row_ok = False
            if not row_ok:
                failures += 1
                group_failures += 1

        sample_report_rows.append((reset, group_checks, group_failures))

    for expected in resets:
        actual_rows = run_model(["--reset"])
        reset_checks = 1
        reset_failures = 0
        checks += 1

        actual = next((row for row in actual_rows if row["tick"] == -1), None)
        if actual is None:
            print("FAIL missing reset output")
            failures += 1
            reset_failures += 1
            failure_rows.append((-1, -1, "missing reset output", "none", "none"))
            reset_report_rows.append((reset_checks, reset_failures))
            continue

        row_ok = True
        for field in RESET_OUTPUT_FIELDS:
            if expected[field] != actual[field]:
                print(
                    f"FAIL reset {field}: expected={expected[field]} "
                    f"actual={actual[field]}"
                )
                failure_rows.append(
                    (-1, -1, field, expected[field], actual[field])
                )
                row_ok = False
        if not row_ok:
            failures += 1
            reset_failures += 1

        reset_report_rows.append((reset_checks, reset_failures))

    status = "PASS" if failures == 0 else "FAIL"
    print(f"{status} checks={checks} failures={failures}")

    REPORT.parent.mkdir(parents=True, exist_ok=True)
    lines = [
        "# tests/hdl results",
        "",
        f"Status: **{status}**",
        f"Checks: {checks}",
        f"Failures: {failures}",
        "",
        "## Sample groups",
        "",
        "| reset | checks | failures | status |",
        table_separator(4),
    ]
    for reset, group_checks, group_failures in sample_report_rows:
        group_status = "PASS" if group_failures == 0 else "FAIL"
        lines.append(
            f"| {reset} | {group_checks} | {group_failures} | {group_status} |"
        )

    lines.extend([
        "",
        "## Reset checks",
        "",
        "| checks | failures | status |",
        table_separator(3),
    ])
    for reset_checks, reset_failures in reset_report_rows:
        reset_status = "PASS" if reset_failures == 0 else "FAIL"
        lines.append(f"| {reset_checks} | {reset_failures} | {reset_status} |")

    lines.extend([
        "",
        "## Failure details",
        "",
    ])
    if failure_rows:
        lines.extend([
            "| reset | tick | field | expected | actual |",
            table_separator(5),
        ])
        for reset, tick, field, expected_value, actual_value in failure_rows:
            lines.append(
                f"| {reset} | {tick} | {field} | {expected_value} | {actual_value} |"
            )
    else:
        lines.append("None.")
    lines.append("")

    REPORT.write_text("\n".join(lines), encoding="utf-8")
    print(f"report: {REPORT}")
    return 0 if failures == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
