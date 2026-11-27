`timescale 1ns / 1ps

module test #(
    COORDSPC = 16,
    COLSPC = 10
) (
    input logic clk,
    input logic reset,
    input logic scandouble,
    output reg ce_pix,
    output logic beam_at_zero,
    output reg HBlank,
    output reg HSync,
    output reg VBlank,
    output reg VSync,
    output logic [COLSPC-1:0] red,
    output logic [COLSPC-1:0] green,
    output logic [COLSPC-1:0] blue
);

  mycore u_mycore (.*);
endmodule
