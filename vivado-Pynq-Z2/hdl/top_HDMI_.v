`timescale 1ns / 1ps

module top_hdmi_ #(
) (
    (* X_INTERFACE_PARAMETER = "FREQ_HZ 125000000" *)
    input wire sys_125M_clk,  // 125MHz
    output wire [2:0] hdmi_tx_d_p,
    output wire [2:0] hdmi_tx_d_n,
    //
    (* X_INTERFACE_PARAMETER = "FREQ_HZ 100000000" *)
    output wire hdmi_tx_clk_p,
    //
    (* X_INTERFACE_PARAMETER = "FREQ_HZ 100000000" *)
    output wire hdmi_tx_clk_n
);
  top_hdmi hdmi (
      .sysclk(sys_125M_clk),
      .hdmi_tx_d_p(hdmi_tx_d_p),
      .hdmi_tx_d_n(hdmi_tx_d_n),
      .hdmi_tx_clk_p(hdmi_tx_clk_p),
      .hdmi_tx_clk_n(hdmi_tx_clk_n)
  );
endmodule  // top_hdmi_
