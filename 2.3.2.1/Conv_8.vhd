----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:16:06 01/03/2015 
-- Design Name: 
-- Module Name:    Conv_8 - Behavioral 
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

entity Conv_8 is
    Port ( din8 : in  STD_LOGIC_VECTOR(7 downto 0);
			  
           dout1 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout2 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout3 : out  STD_LOGIC_VECTOR(3 downto 0);
			  dout : out STD_LOGIC_VECTOR(10 downto 0);
			  signo: out std_logic
				 );
			
			  
end Conv_8;

architecture Behavioral of Conv_8 is

begin
	process(din8)
	variable s: STD_LOGIC_VECTOR(19 downto 0);
	variable din7 : STD_LOGIC_VECTOR (6 downto 0);
		begin
		--inicializamos todo a cero
			s:=(OTHERS=>'0');
		--quitamos el signo del numero
			din7:=din8(6 downto 0);
		--se va usar el metodo desplazar a la izquierda y sumar tres
		-- desplazamos 3 
		s(9 downto 3):=din7;
		
	for i in 0 to 3 loop
			
		--Unidades
		
		if s(10 downto 7)>4 then 
			s(10 downto 7):=s(10 downto 7)+3;
		end if;
		
		--Decenas
		if s(14 downto 11)>4 then 
			s(14 downto 11):=s(14 downto 11)+3;
		end if;
		
		--Centenas
		if s(17 downto 15)>4 then 
			s(17 downto 15):=s(17 downto 15)+3;
		end if;
		
		--Desplazamiento a la izquierda
		
		s(17 downto 1):=s(16 downto 0);
		
	end loop;
	
--pasamos los datos a la variable de salida
dout <= s(17 downto 7);
dout3 <= s(18 downto 15);
dout2 <= s(14 downto 11);
dout1 <=s(10 downto 7);	

end process;
signo <= din8(7);	

end Behavioral;

