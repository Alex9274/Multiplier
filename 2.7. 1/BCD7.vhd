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
    Port ( code1 : in  STD_LOGIC_vector(3 downto 0);
			  code2 : in  STD_LOGIC_vector(3 downto 0);
			  digito1 : in  STD_LOGIC_vector(3 downto 0);
			  digito2 : in  STD_LOGIC_vector(3 downto 0);
			  control : in std_logic_vector(1 downto 0);
           led : out  STD_LOGIC_vector(6 downto 0);
           digit : out  STD_LOGIC_vector(3 downto 0)
			  );
end BCD7;

architecture dataflow of BCD7 is

begin

--with control select

--digit <= digito1 when "01",
	--		digito2 when others;
	
		--	WITH code1 SELECT
		--		led <= 	"0000001" WHEN "0000",
				--			"1001111" WHEN "0001",
				--			"0010010" WHEN "0010",
				--			"0000110" WHEN "0011",
					--		"1001100" WHEN "0100",
					--		"0100100" WHEN "0101",
					--		"0100000" WHEN "0110",
					---		"0001111" WHEN "0111",
						--	"0000000" WHEN "1000",
						--	"0000100" WHEN "1001",
						--	"1111110" WHEN others;

process(control)-----------------------------------------CUIDA	begin
		begin
		if control="01" then
			digit <= digito1;
			
			if code1 = "0000" then
				led <= "0000001";
				
			elsif code1 = "0001" then
				led <= "1001111";
				
			elsif code1 = "0010" then
				led <= "0010010";
				
			elsif code1 = "0011" then
				led <= "0000110";
				
			elsif code1 = "0100" then
				led <= "1001100";
				
			elsif code1 = "0101" then
				led <= "0100100";
				
			elsif code1 = "0110" then
			led <= "0100000";
				
			elsif code1 = "0111" then
				led <= "0001111";
				
			elsif code1 = "1000" then
				led <= "0000000";
				
			elsif code1 = "1001" then
				led <= "0000100";
				
			else
				led <= "1111110";
				
			end if;	
										
		elsif control="10" then
			digit <= digito2;
			
			if code2 = "0000" then
				led <= "0000001";
				
			elsif code2 = "0001" then
				led <= "1001111";
				
			elsif code2 = "0010" then
				led <= "0010010";
				
			elsif code2 = "0011" then
				led <= "0000110";
				
			elsif code2 = "0100" then
				led <= "1001100";
				
			elsif code2 = "0101" then
				led <= "0100100";
				
			elsif code2 = "0110" then
				led <= "0100000";
				
			elsif code2 = "0111" then
				led <= "0001111";
				
			elsif code2 = "1000" then
				led <= "0000000";
				
		elsif code2 = "1001" then
				led <= "0000100";
				
			else
				led <= "1111110";
				
			end if;
		else 
			digit <= "1110"; 	--Primer digito
			led <= "1000001";	--Ponemos un cero
			
		end if;
	end process;

end dataflow;

--WITH code1 SELECT
				--led <= 	"0000001" WHEN "0000",
					--		"1001111" WHEN "0001",
					--		"0010010" WHEN "0010",
					--		"0000110" WHEN "0011",
					--		"1001100" WHEN "0100",
					--		"0100100" WHEN "0101",
					--		"0100000" WHEN "0110",
					--		"0001111" WHEN "0111",
					--		"0000000" WHEN "1000",
						--	"0000100" WHEN "1001",
						--	"1111110" WHEN others;