----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:18:02 01/04/2015 
-- Design Name: 
-- Module Name:    Conv_14 - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Conv_14 is
    Port ( din14 : in  STD_LOGIC_VECTOR(13 downto 0);
           dout1 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout2 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout3 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout4 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout : out  STD_LOGIC_VECTOR(14 downto 0);
			  signo: out std_logic);
end Conv_14;

architecture Behavioral of Conv_14 is

begin
	process (din14)
	variable din13:  STD_LOGIC_VECTOR(12 downto 0);
	variable s:  STD_LOGIC_VECTOR(28 downto 0);
		begin
		--inicializamos todo a cero
			s:=(OTHERS=>'0');
		--quitamos el signo del numero
			din13:=din14(12 downto 0);
		--se va usar el metodo desplazar a la izquierda y sumar tres
		-- desplazamos 3 
		s(15 downto 3):=din13;
		
	for i in 0 to 9 loop
			
		--Unidades
		
		if s(16 downto 13)>4 then 
			s(16 downto 13):=s(16 downto 13)+3;
		end if;
		
		--Decenas
		if s(20 downto 17)>4 then 
			s(20 downto 17):=s(20 downto 17)+3;
		end if;
		
		--Centenas
		if s(24 downto 21)>4 then 
			s(24 downto 21):=s(24 downto 21)+3;
		end if;
		
		--Millares
		if s(27 downto 25)>4 then 
			s(27 downto 25):=s(26 downto 25)+3;
		end if;
		
		--Desplazamiento a la izquierda
		
		s(27 downto 1):=s(26 downto 0);
		
	end loop;
	
--pasamos los datos a la variable de salida
dout <= s(27 downto 13);
dout4 <= s(28 downto 25);
dout3 <= s(24 downto 21);
dout2 <= s(20 downto 17);
dout1 <=s(16 downto 13);	

end process;

signo <= din14(13);

end Behavioral;

