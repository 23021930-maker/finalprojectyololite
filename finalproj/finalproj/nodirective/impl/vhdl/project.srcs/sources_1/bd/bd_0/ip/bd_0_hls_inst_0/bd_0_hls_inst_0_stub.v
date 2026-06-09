// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
// Date        : Mon Jun  8 20:17:13 2026
// Host        : LAPTOP-UD1UJ2KV running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               z:/thietkephancunglab/finalproj/finalproj/nodirective/impl/vhdl/project.srcs/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_stub.v
// Design      : bd_0_hls_inst_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "topp,Vivado 2018.3" *)
module bd_0_hls_inst_0(image_r_ce0, output_r_ce0, output_r_we0, 
  ap_clk, ap_rst, ap_start, ap_done, ap_idle, ap_ready, image_r_address0, image_r_q0, 
  output_r_address0, output_r_d0)
/* synthesis syn_black_box black_box_pad_pin="image_r_ce0,output_r_ce0,output_r_we0,ap_clk,ap_rst,ap_start,ap_done,ap_idle,ap_ready,image_r_address0[13:0],image_r_q0[31:0],output_r_address0[9:0],output_r_d0[31:0]" */;
  output image_r_ce0;
  output output_r_ce0;
  output output_r_we0;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [13:0]image_r_address0;
  input [31:0]image_r_q0;
  output [9:0]output_r_address0;
  output [31:0]output_r_d0;
endmodule
