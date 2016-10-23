----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 20.09.2016 16:14:06
-- Design Name: 
-- Module Name: pattern_recognizing - Behavioral
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
use IEEE.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity pattern_recognizing is
  Port (
            p_clk : in std_logic;
            p_sop: in std_logic; 
            p_eop: in std_logic; 
            p_hit_valid: in std_logic; 
            p_layer: in std_logic_vector(7 downto 0);
            p_number_layer: in std_logic_vector(7 downto 0);
            p_decision: out std_logic;
            hit_valid: out std_logic
   );
    type record_name is
     record
        decision: std_logic;
        layer : std_logic_vector(7 downto 0);
        number_layer: std_logic_vector(7 downto 0);
        x: std_logic_vector(7 downto 0);
        y: std_logic_vector(7 downto 0);
     end record;
  
   --variables, 6 talblic 1x16 z recordami
   type array1 is array (1 to 16) of record_name;  
   type array2 is array (1 to 16) of record_name;  
   type array3 is array (1 to 16) of record_name;
   type array4 is array (1 to 16) of record_name;  
   type array5 is array (1 to 16) of record_name;
   type array6 is array (1 to 16) of record_name;
   type how_many_ar is array (1 to 6) of integer;
   
signal tablica1 : array1;
signal tablica2 : array2;
signal tablica3 : array3;
signal tablica4 : array4;
signal tablica5 : array5;
signal tablica6 : array6;
signal how_many : how_many_ar;
   
end pattern_recognizing;

architecture Behavioral of pattern_recognizing is

begin

    create_array: process
    
    --zwykle variables
    variable in_layer: std_logic_vector(7 downto 0);
    variable in_number_layer: integer;
    
    
    begin
    
    wait until rising_edge(p_sop);
    wait until rising_edge(p_hit_valid);
    
    in_layer := p_layer;
    in_number_layer := to_integer(signed(p_number_layer));
    
    case in_layer is
        when "00000001" => tablica1(in_number_layer).decision <= '1';
                           
            
        when "00000010" => tablica2(in_number_layer).decision <= '1';
                           
                           
        when "00000011" => tablica3(in_number_layer).decision <= '1';
                           
                           
        when "00000100" => tablica4(in_number_layer).decision <= '1';
                          
                           
        when "00000101" => tablica5(in_number_layer).decision <= '1';
                           
                           
        when "00000110" => tablica6(in_number_layer).decision <= '1';
                         
                           
    end case;
    
    end process;






     making_decision: process
     
         variable sum_ar1: integer := 0;
         variable sum_ar2: integer := 0;
         variable sum_ar3: integer := 0;
         variable sum_ar4: integer := 0;
         variable sum_ar5: integer := 0;
         variable sum_ar6: integer := 0;
         variable decision_p1: std_logic := '0';
         variable decision_p2: std_logic := '0';
         variable decision_p3: std_logic := '0';
         variable count1: integer:= 0;
         variable count2: integer:= 0;
         variable count3: integer:= 0;
         variable count4: integer:= 0;
         variable count5: integer:= 0;
         variable count6: integer:= 0;         
         variable additional1: integer:= 0;
         variable additional2: integer:= 0;
         variable additional3: integer:= 0;
         variable additional4: integer:= 0;
         variable additional5: integer:= 0;
         variable additional6: integer:= 0;
         variable av_bot: integer:= 0;
         variable av_mid: integer:= 0;
         variable av_top: integer:= 0;
     
     begin
     
     wait until rising_edge(p_eop);
     
     
     
     --BOTTOM
     L1: for bottom in 1 to 16 loop
         if(tablica1(bottom).decision = '1') then
            
            count1 := count1 + 1;
            if(count1 > 1) then --sprawdzenie czy w danym rzedzie tylko jedna slomka wypalila
            additional1 := sum_ar1;
            end if;
            sum_ar1:=bottom;
            how_many(1) <= count1;
         end if;
         if (tablica2(bottom).decision = '1') then
            count2 := count2 + 1;
            if(count2 > 1) then --sprawdzenie czy w danym rzedzie tylko jedna slomka wypalila
            additional2 := sum_ar2; -- przechowanie kolejnego numeru slomki z danego rzedu
            end if;
            sum_ar2:=bottom;
            how_many(2) <= count2;
        end if;                 
     
     end loop L1;
     
     
     --MIDDLE
     L2: for middle in 1 to 16 loop
         if(tablica3(middle).decision = '1') then
            
            count3 := count3 + 1;
            if(count3 > 1) then --sprawdzenie czy w danym rzedzie tylko jedna slomka wypalila
            additional3 := sum_ar3;
            end if;
            sum_ar3:=middle;
            how_many(3) <= count3;
         end if;
         if (tablica4(middle).decision = '1') then
            count4 := count4 + 1;
            if(count4 > 1) then --sprawdzenie czy w danym rzedzie tylko jedna slomka wypalila
            additional4 := sum_ar4; -- przechowanie kolejnego numeru slomki z danego rzedu
            end if;
            sum_ar4:=middle;
            how_many(4) <= count4;
        end if;                 
     
     end loop L2;     
    
     --TOP
     L3: for top in 1 to 16 loop
         if(tablica5(top).decision = '1') then
            
            count5 := count5 + 1;
            if(count5 > 1) then --sprawdzenie czy w danym rzedzie tylko jedna slomka wypalila
            additional5 := sum_ar5;
            end if;
            sum_ar5:=top;
            how_many(5) <= count5;
         end if;
         if (tablica6(top).decision = '1') then
            count6 := count6 + 1;
            if(count6 > 1) then --sprawdzenie czy w danym rzedzie tylko jedna slomka wypalila
            additional6 := sum_ar6; -- przechowanie kolejnego numeru slomki z danego rzedu
            end if;
            sum_ar6:=top;
            how_many(6) <= count6;
        end if;                 
     
     end loop L3;     
     
     --Przypadek w ktorym z kazdego rzedu wypala przynajmniej po jednej dobrej slomce
     --przypadek 1 wypalily 2 slomki po jednej z kazdego rzedu
     --BOTTOM
     if (count1 > 0 and count2 > 0) then
        if (abs(sum_ar1 - sum_ar2) < 2) then
            av_bot := (sum_ar1 + sum_ar2) / 2;
        end if;
        if (abs(sum_ar1 - additional2) < 2) then
            av_bot := (sum_ar1 + additional2) / 2;
        end if;
        if (abs(additional1 - sum_ar2) < 2) then
            av_bot := (additional1 + sum_ar2) / 2;
        end if;
        if (abs(additional1 - additional2) < 2) then
            av_bot := (additional1 + additional2) / 2;
        end if; 
     -- wypala tylko jedna slomka z calego modulu                  
     elsif(count1 = 1 and count2 = 0) then
        av_bot := sum_ar1;
     elsif(count1= 0 and count2 = 1) then
        av_bot := sum_ar2;     
     end if;     
     --do napisania clearing wartosci rozniacych sie od av_bot o wiecej niz 2
     --
     --MIDDLE
    if (count3 > 0 and count4 > 0) then
        if (abs(sum_ar3 - sum_ar4) < 2) then
            av_mid := (sum_ar3 + sum_ar4) / 2;
        end if;
        if (abs(sum_ar3 - additional4) < 2) then
            av_mid := (sum_ar3 + additional4) / 2;
        end if;
        if (abs(additional3 - sum_ar4) < 2) then
            av_mid := (additional3 + sum_ar4) / 2;
        end if;
        if (abs(additional3 - additional4) < 2) then
            av_mid := (additional3 + additional4) / 2;
        end if;                
     
     -- wypala tylko jedna slomka z calego modulu                  
     elsif(count3 = 1 and count4 = 0) then
        av_mid := sum_ar3;
     elsif(count3= 0 and count4 = 1) then
        av_mid := sum_ar4;     
     end if;          
     --clearing middle do napisania
     --
     --TOP
     if (count5 > 0 and count6 > 0) then
        if (abs(sum_ar5 - sum_ar6) < 2) then
            av_top := (sum_ar5 + sum_ar6) / 2;
        end if;
        if (abs(sum_ar5 - additional6) < 2) then
            av_top := (sum_ar5 + additional6) / 2;
        end if;
        if (abs(additional5 - sum_ar6) < 2) then
            av_top := (additional5 + sum_ar6) / 2;
        end if;
        if (abs(additional5 - additional6) < 2) then
            av_top := (additional5 + additional6) / 2;
        end if;                
     -- wypala tylko jedna slomka z calego modulu                  
        elsif(count5 = 1 and count6 = 0) then
           av_top := sum_ar5;
        elsif(count5= 0 and count6 = 1) then
           av_top := sum_ar6;     
        end if;      
     --clearing top do napisania
     p_decision <= '0';
     if( abs(av_top - av_mid - av_mid + av_bot) < 2 ) then
     wait until rising_edge(p_clk);
     p_decision <= '1';
     end if;
     wait for 20 ns;
     p_decision <= '0';
     -- trzeba teraz wszystko wyzerowac, zmienne, signal tablice itp.
     
     
     end process;

end Behavioral;
