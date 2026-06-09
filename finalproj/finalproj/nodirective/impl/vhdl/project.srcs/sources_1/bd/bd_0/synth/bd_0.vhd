--Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
--Date        : Mon Jun  8 20:14:11 2026
--Host        : LAPTOP-UD1UJ2KV running 64-bit major release  (build 9200)
--Command     : generate_target bd_0.bd
--Design      : bd_0
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0 is
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
  attribute CORE_GENERATION_INFO : string;
  attribute CORE_GENERATION_INFO of bd_0 : entity is "bd_0,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=bd_0,x_ipVersion=1.00.a,x_ipLanguage=VHDL,numBlks=1,numReposBlks=1,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=1,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,synth_mode=OOC_per_IP}";
  attribute HW_HANDOFF : string;
  attribute HW_HANDOFF of bd_0 : entity is "bd_0.hwdef";
end bd_0;

architecture STRUCTURE of bd_0 is
  component bd_0_hls_inst_0 is
  port (
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
  end component bd_0_hls_inst_0;
  signal ap_clk_0_1 : STD_LOGIC;
  signal ap_ctrl_0_1_done : STD_LOGIC;
  signal ap_ctrl_0_1_idle : STD_LOGIC;
  signal ap_ctrl_0_1_ready : STD_LOGIC;
  signal ap_ctrl_0_1_start : STD_LOGIC;
  signal ap_rst_0_1 : STD_LOGIC;
  signal hls_inst_image_r_address0 : STD_LOGIC_VECTOR ( 13 downto 0 );
  signal hls_inst_image_r_ce0 : STD_LOGIC;
  signal hls_inst_output_r_address0 : STD_LOGIC_VECTOR ( 9 downto 0 );
  signal hls_inst_output_r_ce0 : STD_LOGIC;
  signal hls_inst_output_r_d0 : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal hls_inst_output_r_we0 : STD_LOGIC;
  signal image_r_q0_0_1 : STD_LOGIC_VECTOR ( 31 downto 0 );
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of ap_clk : signal is "xilinx.com:signal:clock:1.0 CLK.AP_CLK CLK";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of ap_clk : signal is "XIL_INTERFACENAME CLK.AP_CLK, ASSOCIATED_RESET ap_rst, CLK_DOMAIN bd_0_ap_clk_0, FREQ_HZ 100000000.0, INSERT_VIP 0, PHASE 0.000";
  attribute X_INTERFACE_INFO of ap_ctrl_done : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ";
  attribute X_INTERFACE_INFO of ap_ctrl_idle : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ";
  attribute X_INTERFACE_INFO of ap_ctrl_ready : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ";
  attribute X_INTERFACE_INFO of ap_ctrl_start : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ";
  attribute X_INTERFACE_INFO of ap_rst : signal is "xilinx.com:signal:reset:1.0 RST.AP_RST RST";
  attribute X_INTERFACE_PARAMETER of ap_rst : signal is "XIL_INTERFACENAME RST.AP_RST, INSERT_VIP 0, POLARITY ACTIVE_HIGH";
  attribute X_INTERFACE_INFO of image_r_address0 : signal is "xilinx.com:signal:data:1.0 DATA.IMAGE_R_ADDRESS0 DATA";
  attribute X_INTERFACE_PARAMETER of image_r_address0 : signal is "XIL_INTERFACENAME DATA.IMAGE_R_ADDRESS0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 14} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}";
  attribute X_INTERFACE_INFO of image_r_q0 : signal is "xilinx.com:signal:data:1.0 DATA.IMAGE_R_Q0 DATA";
  attribute X_INTERFACE_PARAMETER of image_r_q0 : signal is "XIL_INTERFACENAME DATA.IMAGE_R_Q0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 32} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} real {float {sigwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 24}}}}}}";
  attribute X_INTERFACE_INFO of output_r_address0 : signal is "xilinx.com:signal:data:1.0 DATA.OUTPUT_R_ADDRESS0 DATA";
  attribute X_INTERFACE_PARAMETER of output_r_address0 : signal is "XIL_INTERFACENAME DATA.OUTPUT_R_ADDRESS0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 10} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}";
  attribute X_INTERFACE_INFO of output_r_d0 : signal is "xilinx.com:signal:data:1.0 DATA.OUTPUT_R_D0 DATA";
  attribute X_INTERFACE_PARAMETER of output_r_d0 : signal is "XIL_INTERFACENAME DATA.OUTPUT_R_D0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 32} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} real {float {sigwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 24}}}}}}";
begin
  ap_clk_0_1 <= ap_clk;
  ap_ctrl_0_1_start <= ap_ctrl_start;
  ap_ctrl_done <= ap_ctrl_0_1_done;
  ap_ctrl_idle <= ap_ctrl_0_1_idle;
  ap_ctrl_ready <= ap_ctrl_0_1_ready;
  ap_rst_0_1 <= ap_rst;
  image_r_address0(13 downto 0) <= hls_inst_image_r_address0(13 downto 0);
  image_r_ce0 <= hls_inst_image_r_ce0;
  image_r_q0_0_1(31 downto 0) <= image_r_q0(31 downto 0);
  output_r_address0(9 downto 0) <= hls_inst_output_r_address0(9 downto 0);
  output_r_ce0 <= hls_inst_output_r_ce0;
  output_r_d0(31 downto 0) <= hls_inst_output_r_d0(31 downto 0);
  output_r_we0 <= hls_inst_output_r_we0;
hls_inst: component bd_0_hls_inst_0
     port map (
      ap_clk => ap_clk_0_1,
      ap_done => ap_ctrl_0_1_done,
      ap_idle => ap_ctrl_0_1_idle,
      ap_ready => ap_ctrl_0_1_ready,
      ap_rst => ap_rst_0_1,
      ap_start => ap_ctrl_0_1_start,
      image_r_address0(13 downto 0) => hls_inst_image_r_address0(13 downto 0),
      image_r_ce0 => hls_inst_image_r_ce0,
      image_r_q0(31 downto 0) => image_r_q0_0_1(31 downto 0),
      output_r_address0(9 downto 0) => hls_inst_output_r_address0(9 downto 0),
      output_r_ce0 => hls_inst_output_r_ce0,
      output_r_d0(31 downto 0) => hls_inst_output_r_d0(31 downto 0),
      output_r_we0 => hls_inst_output_r_we0
    );
end STRUCTURE;
