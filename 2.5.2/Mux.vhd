----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:05:13 12/16/2014 
-- Design Name: 
-- Module Name:    Mux - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Mux is
    Port ( a : in  STD_LOGIC_vector(3 downto 0);
           b : in  STD_LOGIC_vector(3 downto 0);
           c : in  STD_LOGIC_vector(3 downto 0);
			  d : in  STD_LOGIC_vector(3 downto 0);
			  e : in  STD_LOGIC_vector(3 downto 0);
           f : in  STD_LOGIC_vector(3 downto 0);
           g : in  STD_LOGIC_vector(3 downto 0);
			  h : in  STD_LOGIC_vector(3 downto 0);			  
           s : in  STD_LOGIC_VECTOR(2 downto 0);
           y : out STD_LOGIC_vector(3 downto 0);
			  dig_ctr: out std_logic_vector(3 downto 0)
			  );
end Mux;

architecture behavioral of Mux is

begin

	process(a,b,c,d,e,f,g,h,s)
	begin
	
	if s="000" then
		y<=a;
		dig_ctr <= "1110";
	
	elsif s="001" then
		y<=b;
		dig_ctr <= "1101";

	elsif s="010" then
		y<=c;
		dig_ctr <= "1011";
		
	elsif s="011" then
		y<=d;
		dig_ctr <= "1110";
	
	elsif s="100" then
		y<=e;
		dig_ctr <= "1101";
		
	elsif s="101" then
		y<=f;
		dig_ctr <= "1011";
		
	elsif s="110" then
		y<=g;
		dig_ctr <= "0111";
		
	elsif s="111" then
		y<=h;
		dig_ctr <= "1110";
		
	end if;
	
	end process;
	
end behavioral;


