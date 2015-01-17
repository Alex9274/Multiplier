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
    Port ( din14 : in  STD_LOGIC_VECTOR(14 downto 0);
           dout1 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout2 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout3 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout4 : out  STD_LOGIC_VECTOR(3 downto 0);
			  dout5 : out STD_LOGIC;
           dout : out  STD_LOGIC_VECTOR(15 downto 0);
			  signo: out std_logic);
end Conv_14;

architecture Behavioral of Conv_14 is

begin
	process (din14)
	variable din13:  STD_LOGIC_VECTOR(13 downto 0);
	variable s:  STD_LOGIC_VECTOR(29 downto 0);
		begin
		--inicializamos todo a cero
			s:=(OTHERS=>'0');
		--quitamos el signo del numero
			din13:=din14(13 downto 0);
		--se va usar el metodo desplazar a la izquierda y sumar tres
		-- desplazamos 3 
		s(16 downto 3):=din13;
		
	for i in 0 to 10 loop
			
		--Unidades
		
		if s(17 downto 14)>4 then 
			s(17 downto 14):=s(17 downto 14)+3;
		end if;
		
		--Decenas
		if s(21 downto 18)>4 then 
			s(21 downto 18):=s(21 downto 18)+3;
		end if;
		
		--Centenas
		if s(25 downto 22)>4 then 
			s(25 downto 22):=s(25 downto 22)+3;
		end if;
		
		--Millares
		if s(28 downto 26)>4 then 
			s(28 downto 26):=s(28 downto 26)+3;
		end if;
		
		--Desplazamiento a la izquierda
		
		s(28 downto 1):=s(27 downto 0);
		
	end loop;
	
--pasamos los datos a la variable de salida
dout <= s(29 downto 14);
dout5 <=s(29);
dout4 <= s(29 downto 26);
dout3 <= s(25 downto 22);
dout2 <= s(21 downto 18);
dout1 <=s(17 downto 14);	

end process;

signo <= din14(13);

end Behavioral;

