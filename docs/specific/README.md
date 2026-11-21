# Cross-platform FPGA Demo With Multiple Graphic Layers

![Screencap](./docs/specific/screencap.png)

![Vivado Design](./docs/specific/vivado_block_design.png)

Inspired/forked from <https://projectf.io>

## BLOCK DESIGN Configuration Notes

### Zynq7 Processing System

- PS-PL Configuration: AXI Non Secure Enablement/GP Master AXI Interface/M AXI GP0 Interface [ ] (disable)
- Clock Configuration: PL Fabric Clocks/FCLK_CLK0 100MHz

### Clocking Wizard

- Clocking Options: Input Clock/Source - No Buffer
- Output Clocks: Reset Type/Active Low
- Output Clocks: clk_out1 rename to sys_125M_clk, Output Freq 125Mhz
- Connect resetn to PS FCLK_RESET0_N

