# Backlog

## Done

- All
  - [x] separate VHDL which is common to all projects
- Pynq-Z2/Vivado v2023.2
  - [x] basic app structure, cleaned up scripts
  - [x] cross-check file import, (pay attention to mem files)
  - [x] create script - implement application generation via template script
  - [x] build script - generate board artifacts
  - [x] program-bitstream
  - [x] create script supports batch mode
    -  changed to use a tcl design export from a pre-configured board part
  - [x] implement separate clock generator to remove dependency on PHY/H16 clock
  - [x] configurable project folder
    - [x] name project folder after board project pynz_z2_hw
- Pynq-Z2/Vitis v2023.2
  - [x] basic app structure, cleaned up scripts
  - [x] create script - implement application generation via template script
    - [x] generates board artifacts (BOOT.bin)
  - [x] separated build from create (holdover from original scripts)
    - [x] uses a separate and shared config.tcl
  - [x] more modular scripts improves support for differing vivado projects
  - [x] configurable project folder
    - [x] name project folder after board project pynz_z2_fw
- MiSTer_FPGA
  - [x] integrate mister app project
  - [x] implement project scripts
    - [x] create
    - [x] build
    - [x] scp 
  - [x] configurable project folder
    - [x] name project folder after mister project
- Verilator
  - [x] implemented, working
  - [x] move source and scripts under app, leave build artifacts in verilator
  
## ToDo

- Z-Turn/Vitis v2023.2
  - [ ] basic app structure
  - [ ] working example
- Vivado
  - [ ] investigate and fix warnings/errors
  - [ ] Project/feature composition
- Vitis
  - [ ] Project/feature composition
- VHDL
  - [ ] Normalise naming conventions - e.g. video_enable, frame_start, line_start, etc.
