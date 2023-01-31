-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity dense_latency_ap_fixed_ap_fixed_config2_0_0 is
port (
    ap_ready : OUT STD_LOGIC;
    data_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (14 downto 0) );
end;


architecture behav of dense_latency_ap_fixed_ap_fixed_config2_0_0 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_logic_0 : STD_LOGIC := '0';



begin



    ap_ready <= ap_const_logic_1;
    ap_return <= data_V_read(15 downto 1);
end behav;