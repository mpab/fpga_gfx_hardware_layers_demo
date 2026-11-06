# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL, defaults to 'perl' if not set)")
set(PYTHON3 "python3" CACHE FILEPATH "Python3 executable (from $PYTHON3, defaults to 'python3' if not set)")
set(VERILATOR_ROOT "W:/Dev/libraries/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")
set(VERILATOR_SOLVER "" CACHE STRING "Default SMT solver for constrained randomization (from $VERILATOR_SOLVER)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(Vsim_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vsim_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vsim_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(Vsim_COVERAGE 0)
# Timing mode?  0/1
set(Vsim_TIMING 0)
# Threaded output mode?  1/N threads (from --threads)
set(Vsim_THREADS 1)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(Vsim_TRACE_FST 0)

# SAIF Tracing output mode? 0/1 (from --trace-saif)
set(Vsim_TRACE_SAIF 0)

# VCD Tracing output mode?  0/1 (from --trace-vcd)
set(Vsim_TRACE_VCD 0)
### Sources...
# Global classes, need linked once per executable
set(Vsim_GLOBAL W:/Dev/libraries/verilator/include/verilated.cpp W:/Dev/libraries/verilator/include/verilated_threads.cpp)
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vsim_CLASSES_SLOW W:/publish-git/ref/fpga_gfx_hardware_layers_demo/verilator/build/CMakeFiles/dut.dir/Vsim.dir/Vsim___024root__Slow.cpp W:/publish-git/ref/fpga_gfx_hardware_layers_demo/verilator/build/CMakeFiles/dut.dir/Vsim.dir/Vsim___024root__0__Slow.cpp)
# Generated module classes, fast-path, compile with highest optimization
set(Vsim_CLASSES_FAST W:/publish-git/ref/fpga_gfx_hardware_layers_demo/verilator/build/CMakeFiles/dut.dir/Vsim.dir/Vsim.cpp W:/publish-git/ref/fpga_gfx_hardware_layers_demo/verilator/build/CMakeFiles/dut.dir/Vsim.dir/Vsim___024root__0.cpp)
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vsim_SUPPORT_SLOW W:/publish-git/ref/fpga_gfx_hardware_layers_demo/verilator/build/CMakeFiles/dut.dir/Vsim.dir/Vsim__Syms__Slow.cpp)
# Generated support classes, fast-path, compile with highest optimization
set(Vsim_SUPPORT_FAST )
# All dependencies
set(Vsim_DEPS W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/VIDEO_source.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/VIDEO_timing_signals.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/bitmap_addr.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/bram_sdp.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/clut_simple.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/demo_rasterbars.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/demo_sinescroll.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/demo_stars.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/demo_text.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/draw_char.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/galois_lfsr.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/get_glyph_line.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/linebuffer_simple.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/rasterbar.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/render_rasterbars.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/render_sinescroll.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/rom_async.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/rom_sync.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/sine_table.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/sprite.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/starfield.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/hdl/src/xd.sv W:/publish-git/ref/fpga_gfx_hardware_layers_demo/app/verilator/src/sim.sv W:/Dev/libraries/verilator/bin/verilator_bin.exe W:/Dev/libraries/verilator/include/verilated_std.sv W:/Dev/libraries/verilator/include/verilated_std_waiver.vlt)
# User .cpp files (from .cpp's on Verilator command line)
set(Vsim_USER_CLASSES )
