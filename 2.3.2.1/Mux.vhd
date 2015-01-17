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
           y : out STD_LOGIC_vector(3 downto 0)
			  );
end Mux;

architecture dataflow of Mux is

begin

with s select
	
		y<=a when "000",
			b when "001",
			c when "010",
			d when "011",
			e when "100",
			f when "101",
			g when "110";
			--e when others;
			
			
			
		

end dataflow;

