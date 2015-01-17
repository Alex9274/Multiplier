----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:29:45 12/31/2014 
-- Design Name: 
-- Module Name:    BCD7 - Behavioral 
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

entity BCD7 is
    Port ( code : in  STD_LOGIC_vector(3 downto 0);
           led : out  STD_LOGIC_vector(6 downto 0);
           s : out  STD_LOGIC_vector(3 downto 0)
			  );
end BCD7;

architecture dataflow of BCD7 is

begin
	WITH code SELECT
	led <= 	"0000001" WHEN "0000",
				"1001111" WHEN "0001",
				"0010010" WHEN "0010",
				"0000110" WHEN "0011",
				"1001100" WHEN "0100",
				"0100100" WHEN "0101",
				"0100000" WHEN "0110",
				"0001111" WHEN "0111",
				"0000000" WHEN "1000",
				"0000100" WHEN "1001",
				"1111110" WHEN others;

end dataflow;

