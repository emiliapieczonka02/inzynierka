----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 18.09.2016 12:40:42
-- Design Name: 
-- Module Name: tdc_reading - Behavioral
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

entity tdc_reading is

    generic ( file_name : string := "C:\Users\Emilia\Desktop\majne\inz\test.txt" );
    Port(
            u_clk: in std_logic;
           -- new_track: in std_logic;
            sop: out std_logic;
            eop: out std_logic;
            hit_valid: out std_logic;
            nr_channel: out std_logic_vector(7 downto 0);
            end_of_file:  out std_logic;
            dlugosclinii: out std_logic_vector(7 downto 0)
    );

end tdc_reading;



architecture Behavioral of tdc_reading is


begin

    process
        file sim: TEXT open read_mode is in file_name;
        variable l: line;
        variable in_data: std_logic_vector(7 downto 0);    
        variable len: integer;
    begin
                sop <='0';
                eop <='0';
                hit_valid <='0';
                nr_channel <= x"00";
                end_of_file <='0';
        
        while not endfile(sim) loop
            
            wait until rising_edge(u_clk);    
            wait until rising_edge(u_clk);  
           
        --    wait until rising_edge(new_track);
            wait until rising_edge(u_clk);  
            
            readline(sim, l); 
            sop <= '1';
            len := l'length;
            dlugosclinii <= std_logic_vector(to_unsigned(len, dlugosclinii'length));
            
            while (l'length > 0) loop
                
                wait until rising_edge(u_clk);
                read(l, in_data);
                len := l'length;
                dlugosclinii <= std_logic_vector(to_unsigned(len, dlugosclinii'length));
                    if(in_data = "00000000") then
                        hit_valid<='0';
                      else
                         hit_valid<='1';
                     end if; 
                nr_channel<=in_data;
       
                end loop;
            
            --if(l'length = 0) then
               sop <='0';
               eop <= '1';
               nr_channel <= "00000000";
               wait until rising_edge(u_clk);
               eop<='0';
           -- else
             --   hit_valid<='0';
               -- wait until rising_edge(u_clk);
            --end if;
        end loop;
     end_of_file <= '1';
     
     wait until rising_edge(u_clk);
     end_of_file <= '0';
     file_close(sim);
    
    wait;
    end process;
    
end Behavioral;
