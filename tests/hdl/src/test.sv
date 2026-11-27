`timescale 1ns / 1ps

module test #(
    COORDSPC = 16,
    COLSPC = 10
) (
    input logic clk,
    input logic reset,
    output logic signals_valid,
    output logic video_enable,
    output logic beam_at_zero,
    output logic h_sync,
    output logic v_sync,
    output logic h_blank,
    output logic v_blank,
    output logic frame_start,
    output logic line_start,
    output logic signed [COORDSPC-1:0] beam_x,
    output logic signed [COORDSPC-1:0] beam_y,
    output logic [COLSPC-1:0] red,
    output logic [COLSPC-1:0] green,
    output logic [COLSPC-1:0] blue
);

  video_timing_signals vts (.*);
  video_source vs (.*);
endmodule
