-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.2
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity GetLocation_dm_detMap_x_rom is 
    generic(
             dwidth     : integer := 8; 
             awidth     : integer := 7; 
             mem_size    : integer := 96
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of GetLocation_dm_detMap_x_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "00000000", 2 => "00000101", 3 => "00001010", 4 => "00001111", 
    5 => "00010100", 6 => "00011001", 7 => "00011110", 8 => "00100011", 
    9 => "00101000", 10 => "00101101", 11 => "00110010", 12 => "00110111", 
    13 => "00111100", 14 => "01000001", 15 => "01000110", 16 => "01001011", 
    17 => "01010000", 18 => "01010101", 19 => "01011010", 20 => "01011111", 
    21 => "01100100", 22 => "01101001", 23 => "01101110", 24 => "01110011", 
    25 => "01111000", 26 => "01111101", 27 => "10000010", 28 => "10000111", 
    29 => "10001100", 30 => "10010001", 31 => "10010110", 32 => "10011011", 
    33 => "00000000", 34 => "00000101", 35 => "00001010", 36 => "00001111", 
    37 => "00010100", 38 => "00011001", 39 => "00011110", 40 => "00100011", 
    41 => "00101000", 42 => "00101101", 43 => "00110010", 44 => "00110111", 
    45 => "00111100", 46 => "01000001", 47 => "01000110", 48 => "01001011", 
    49 => "01010000", 50 => "01010101", 51 => "01011010", 52 => "01011111", 
    53 => "01100100", 54 => "01101001", 55 => "01101110", 56 => "01110011", 
    57 => "01111000", 58 => "01111101", 59 => "10000010", 60 => "10000111", 
    61 => "10001100", 62 => "10010001", 63 => "10010110", 64 => "10011011", 
    65 => "00000000", 66 => "00000101", 67 => "00001010", 68 => "00001111", 
    69 => "00010100", 70 => "00011001", 71 => "00011110", 72 => "00100011", 
    73 => "00101000", 74 => "00101101", 75 => "00110010", 76 => "00110111", 
    77 => "00111100", 78 => "01000001", 79 => "01000110", 80 => "01001011", 
    81 => "01010000", 82 => "01010101", 83 => "01011010", 84 => "01011111", 
    85 => "01100100", 86 => "01101001", 87 => "01101110", 88 => "01110011", 
    89 => "01111000", 90 => "01111101", 91 => "10000010", 92 => "10000111", 
    93 => "10001100", 94 => "10010001", 95 => "10010110" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

attribute EQUIVALENT_REGISTER_REMOVAL : string;
begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity GetLocation_dm_detMap_x is
    generic (
        DataWidth : INTEGER := 8;
        AddressRange : INTEGER := 96;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of GetLocation_dm_detMap_x is
    component GetLocation_dm_detMap_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    GetLocation_dm_detMap_x_rom_U :  component GetLocation_dm_detMap_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


