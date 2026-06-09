-- ==============================================================
-- File generated on Tue Jun 09 11:01:46 +0700 2026
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity topp_am_addmul_5neOg_DSP48_0 is
port (
    in0:  in  std_logic_vector(5 - 1 downto 0);
    in1:  in  std_logic_vector(2 - 1 downto 0);
    in2:  in  std_logic_vector(6 - 1 downto 0);
    dout: out std_logic_vector(11 - 1 downto 0));

end entity;

architecture behav of topp_am_addmul_5neOg_DSP48_0 is
    signal b       : signed(18-1 downto 0);
    signal a       : signed(25-1 downto 0);
    signal d       : signed(25-1 downto 0);
    signal m       : signed(43-1 downto 0);
    signal ad      : signed(25-1 downto 0);
begin
a <= signed(resize(unsigned(in0), 25));
d <= signed(resize(signed(in1), 25));
b <= signed(resize(unsigned(in2), 18));

ad <= a + d;
m  <= ad * b;

dout <= std_logic_vector(resize(unsigned(m), 11));

end architecture;
Library IEEE;
use IEEE.std_logic_1164.all;

entity topp_am_addmul_5neOg is
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER);
    port (
        din0 : IN STD_LOGIC_VECTOR(din0_WIDTH - 1 DOWNTO 0);
        din1 : IN STD_LOGIC_VECTOR(din1_WIDTH - 1 DOWNTO 0);
        din2 : IN STD_LOGIC_VECTOR(din2_WIDTH - 1 DOWNTO 0);
        dout : OUT STD_LOGIC_VECTOR(dout_WIDTH - 1 DOWNTO 0));
end entity;

architecture arch of topp_am_addmul_5neOg is
    component topp_am_addmul_5neOg_DSP48_0 is
        port (
            in0 : IN STD_LOGIC_VECTOR;
            in1 : IN STD_LOGIC_VECTOR;
            in2 : IN STD_LOGIC_VECTOR;
            dout : OUT STD_LOGIC_VECTOR);
    end component;



begin
    topp_am_addmul_5neOg_DSP48_0_U :  component topp_am_addmul_5neOg_DSP48_0
    port map (
        in0 => din0,
        in1 => din1,
        in2 => din2,
        dout => dout);

end architecture;


