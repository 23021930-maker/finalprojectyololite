--Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
--Date        : Mon Jun  8 20:14:11 2026
--Host        : LAPTOP-UD1UJ2KV running 64-bit major release  (build 9200)
--Command     : generate_target bd_0_wrapper.bd
--Design      : bd_0_wrapper
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_wrapper is
  port (
    ap_clk : in STD_LOGIC;
    ap_ctrl_done : out STD_LOGIC;
    ap_ctrl_idle : out STD_LOGIC;
    ap_ctrl_ready : out STD_LOGIC;
    ap_ctrl_start : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    image_r_address0 : out STD_LOGIC_VECTOR ( 13 downto 0 );
    image_r_ce0 : out STD_LOGIC;
    image_r_q0 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    output_r_address0 : out STD_LOGIC_VECTOR ( 9 downto 0 );
    output_r_ce0 : out STD_LOGIC;
    output_r_d0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    output_r_we0 : out STD_LOGIC
  );
end bd_0_wrapper;

architecture STRUCTURE of bd_0_wrapper is
  component bd_0 is
  port (
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    image_r_address0 : out STD_LOGIC_VECTOR ( 13 downto 0 );
    image_r_ce0 : out STD_LOGIC;
    image_r_q0 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    output_r_address0 : out STD_LOGIC_VECTOR ( 9 downto 0 );
    output_r_ce0 : out STD_LOGIC;
    output_r_d0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    output_r_we0 : out STD_LOGIC;
    ap_ctrl_start : in STD_LOGIC;
    ap_ctrl_done : out STD_LOGIC;
    ap_ctrl_idle : out STD_LOGIC;
    ap_ctrl_ready : out STD_LOGIC
  );
  end component bd_0;
begin
bd_0_i: component bd_0
     port map (
      ap_clk => ap_clk,
      ap_ctrl_done => ap_ctrl_done,
      ap_ctrl_idle => ap_ctrl_idle,
      ap_ctrl_ready => ap_ctrl_ready,
      ap_ctrl_start => ap_ctrl_start,
      ap_rst => ap_rst,
      image_r_address0(13 downto 0) => image_r_address0(13 downto 0),
      image_r_ce0 => image_r_ce0,
      image_r_q0(31 downto 0) => image_r_q0(31 downto 0),
      output_r_address0(9 downto 0) => output_r_address0(9 downto 0),
      output_r_ce0 => output_r_ce0,
      output_r_d0(31 downto 0) => output_r_d0(31 downto 0),
      output_r_we0 => output_r_we0
    );
end STRUCTURE;
