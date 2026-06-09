-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
-- Date        : Mon Jun  8 20:17:13 2026
-- Host        : LAPTOP-UD1UJ2KV running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               z:/thietkephancunglab/finalproj/finalproj/nodirective/impl/vhdl/project.srcs/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_stub.vhdl
-- Design      : bd_0_hls_inst_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity bd_0_hls_inst_0 is
  Port ( 
    image_r_ce0 : out STD_LOGIC;
    output_r_ce0 : out STD_LOGIC;
    output_r_we0 : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    image_r_address0 : out STD_LOGIC_VECTOR ( 13 downto 0 );
    image_r_q0 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    output_r_address0 : out STD_LOGIC_VECTOR ( 9 downto 0 );
    output_r_d0 : out STD_LOGIC_VECTOR ( 31 downto 0 )
  );

end bd_0_hls_inst_0;

architecture stub of bd_0_hls_inst_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "image_r_ce0,output_r_ce0,output_r_we0,ap_clk,ap_rst,ap_start,ap_done,ap_idle,ap_ready,image_r_address0[13:0],image_r_q0[31:0],output_r_address0[9:0],output_r_d0[31:0]";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "topp,Vivado 2018.3";
begin
end;
