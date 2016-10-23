----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 18.09.2016 12:14:28
-- Design Name: 
-- Module Name: systemtestbench - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;
use std.textio.all;
use ieee.std_logic_textio.all;
use IEEE.NUMERIC_STD.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity systemtestbench is
--  Port ( );
end systemtestbench;

architecture Behavioral of systemtestbench is

component tdc_reading is
 generic ( file_name : string := "C:\Users\Emilia\Desktop\majne\inz\test.txt" );
   Port(
           u_clk: in std_logic;
         --  new_track: in std_logic;
           sop: out std_logic;
           eop: out std_logic;
           hit_valid: out std_logic;
           nr_channel: out std_logic_vector(7 downto 0);
           end_of_file:  out std_logic;
            dlugosclinii: out std_logic_vector(7 downto 0)

   );

end component;

component pattern_recognizing is
  Port (
            p_clk : in std_logic;
            p_sop: in std_logic; 
            p_eop: in std_logic; 
            p_hit_valid: in std_logic; 
            p_data: in std_logic_vector(7 downto 0);
            p_decision: out std_logic 
   );
   
end component;

signal clk, reset, sys_new_track: std_logic := '0';
signal sys_sop, sys_eop, sys_hit_valid, sys_eof, sys_decision: std_logic := '0';
signal sys_nr_channel, sys_dlugosclinii: std_logic_vector(7 downto 0) := x"00";

begin

    process
    begin
     --   sys_new_track <= '0';
        reset <= '1';
        
        wait for 100 ns;
        
        reset <= '0';
        wait for 100 ns;

    --    for i in 0 to 10 loop
    --        wait until rising_edge(sys_eop);
       --     sys_new_track <= '1';
       --     wait for 20 ns;
       --     sys_new_track <= '0';
            
   
            
         --   wait for 1 us;
            
     --   end loop;
        
        wait;
        
    end process;
    
    
    read_test : tdc_reading
    generic map( file_name => "C:\Users\Emilia\Desktop\majne\inz\test.txt" )
        Port map (
                
                u_clk => clk,
           --     new_track => sys_new_track,
                sop => sys_sop,
                eop=> sys_eop,
                hit_valid=> sys_hit_valid,
                nr_channel => sys_nr_channel,
                end_of_file => sys_eof,
                dlugosclinii => sys_dlugosclinii
        );
        
    pr_test : pattern_recognizing
      Port map(
                p_clk => clk,
                p_sop => sys_sop, 
                p_eop => sys_eop, 
                p_hit_valid => sys_hit_valid, 
                p_data => sys_nr_channel,
                p_decision => sys_decision 
       );
       

    
         process
       begin
           clk <= '1'; wait for 4 ns;
           clk <= '0'; wait for 4 ns;
       end process;
end Behavioral;

