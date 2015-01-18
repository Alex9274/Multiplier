----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:28:41 12/16/2014 
-- Design Name: 
-- Module Name:    Registro - Behavioral 
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

entity Registro is
generic(n: positive:=4);
    Port ( clr_n : in  STD_LOGIC;
           si : in  STD_LOGIC;
           clk : in  STD_LOGIC;
			  en: in std_logic;
           po : out  STD_LOGIC_VECTOR(n-1 downto 0)
			  );
end Registro;

architecture Behavioral of Registro is

signal bufer: std_logic_vector(po'range);

begin
process(clr_n,clk,en) 
	begin
		
		if en='1' then
		
			if clr_n='0' then
				bufer<=(others=>'0');
			
			elsif clk'event and clk='1' then
				bufer<=si&bufer(bufer'left downto 1);
				
			end if;
		
		elsif en='0' then
			
			bufer<=bufer;
		
		end if;		
		
	end process;
	po<=bufer;

end Behavioral;

