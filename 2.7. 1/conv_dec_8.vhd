----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:28:10 12/31/2014 
-- Design Name: 
-- Module Name:    conv_dec_8 - Behavioral 
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
--use ieee.std_logic_arith.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity conv_dec_8 is
    Port ( a : in  STD_LOGIC_vector(7 downto 0):="01100011";
           signo : out  STD_LOGIC;
           y : out  STD_LOGIC_vector(3 downto 0)
			  );
end conv_dec_8;

architecture Behavioral of conv_dec_8 is

--subtype entero is integer range 1 to 9; --_vector(1 downto 0):="00";

type vector is array(1 downto 0) of integer;
signal decimal2: vector(1 downto 0);
begin

process(a)
variable decimal: integer:=0;
	begin
	
	if a(6)='1' then
		decimal:=decimal+64;

	elsif a(5)='1' then
		decimal:=decimal+32;

	end if;
	
	--((2**6)*(a(6))); --+(2**5)*conv_integer(a(5)));--+(2**4)*conv_integer(a(4))+(2**3)*conv_integer(a(3))+(2**2)*conv_integer(a(2))+2*conv_integer(a(1))+conv_integer(a(0)));
end process;

end Behavioral;

