----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:06:31 01/03/2015 
-- Design Name: 
-- Module Name:    reg_8 - Behavioral 
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

entity reg_8 is
    Port ( si : in  STD_LOGIC_vector(7 downto 0);
           clk : in  STD_LOGIC;
           clr_n : in  STD_LOGIC;
           en : in  STD_LOGIC;
           po : out  STD_LOGIC_vector(7 downto 0)
			  );
end reg_8;

architecture Behavioral of reg_8 is

signal bufer: std_logic_vector(po'range);

begin

process(clr_n,clk,en) 
	begin
		
		if en='1' then
		
			if clr_n='0' then
				bufer<=(others=>'0');
			
			elsif rising_edge(clk) then
				bufer<=si;
				
			end if;
		
		elsif en='0' then
			
			bufer<=bufer;
		
		end if;		
		
	end process;
	po<=bufer;

end Behavioral;

