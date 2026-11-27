#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <verilated.h>
#include "Vtest.h"

double sc_time_stamp() { return 0.0; }

static void print_row(long long tick, const Vtest& hw) {
    std::cout << tick << ',' << (unsigned)hw.signals_valid << ','
              << (unsigned)hw.video_enable << ',' << (unsigned)hw.beam_at_zero << ','
              << (unsigned)hw.h_sync << ',' << (unsigned)hw.v_sync << ','
              << (unsigned)hw.h_blank << ',' << (unsigned)hw.v_blank << ','
              << (unsigned)hw.frame_start << ',' << (unsigned)hw.line_start << ','
              << (unsigned)hw.beam_x << ',' << (unsigned)hw.beam_y << ','
              << (unsigned)hw.red << ',' << (unsigned)hw.green << ','
              << (unsigned)hw.blue << '\n';
}

static std::vector<long long> parse_ticks(const std::string& list) {
    std::vector<long long> ticks;
    std::size_t pos = 0;
    while (pos < list.size()) {
        std::size_t comma = list.find(',', pos);
        std::string item = list.substr(
            pos, comma == std::string::npos ? std::string::npos : comma - pos
        );
        if (!item.empty()) ticks.push_back(std::strtoll(item.c_str(), nullptr, 10));
        if (comma == std::string::npos) break;
        pos = comma + 1;
    }
    return ticks;
}

int main(int argc, char** argv) {
    bool reset = false;
    std::vector<long long> ticks;

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--ticks") {
            if (i + 1 < argc) ticks = parse_ticks(argv[++i]);
        } else if (arg == "--reset") {
            reset = true;
        } else if (arg == "--help") {
            std::cout << "usage: test.exe --ticks t1,t2,... [--reset]\n";
            return 0;
        } else {
            std::cerr << "unknown option: " << arg << '\n';
            return 2;
        }
    }

    if (ticks.empty() && !reset) {
        std::cerr << "usage: test.exe --ticks t1,t2,... [--reset]\n";
        return 2;
    }

    std::sort(ticks.begin(), ticks.end());
    ticks.erase(std::unique(ticks.begin(), ticks.end()), ticks.end());

    Verilated::commandArgs(0, static_cast<const char**>(nullptr));
    VerilatedContext contextp;
    Vtest hw(&contextp, "TOP");

    hw.clk = 0;
    hw.reset = 0;
    hw.eval();

    if (reset) {
        hw.reset = 1;
        hw.eval();
        print_row(-1, hw);
        hw.reset = 0;
        hw.eval();
    }

    if (ticks.empty()) return 0;

    long long max_tick = ticks.back();
    std::size_t next = 0;

    for (long long n = 0; n <= max_tick; ++n) {
        hw.clk = 0;
        hw.eval();
        hw.clk = 1;
        hw.eval();

        while (next < ticks.size() && ticks[next] == n) {
            print_row(n, hw);
            ++next;
        }

        if (next == ticks.size()) break;
    }

    return 0;
}
