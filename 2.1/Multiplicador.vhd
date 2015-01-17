----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:38:16 12/16/2014 
-- Design Name: 
-- Module Name:    Multiplicador - Behavioral 
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
--use IEEE.STD_LOGIC_ARITH.ALL;
--use IEEE.STD_LOGIC_UNSIGNED.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Multiplicador is
generic(n: positive:=8);
    Port ( a : in  STD_LOGIC_VECTOR(n-1 downto 0);
           b : in  STD_LOGIC_VECTOR(n-1 downto 0);
           clk : in  STD_LOGIC;
           o :out  STD_LOGIC_VECTOR(13 downto 0)
			  );
end Multiplicador;

architecture Behavioral of Multiplicador is

signal v0,v1,v2,v3,v4,v5,v6: std_logic_vector(12 downto 0); --Tenemos 13 bits, luego hay que añadir el de signo
signal s: std_logic_vector(7 downto 0); --7 bits porque le quitamos el de signo
signal clk_i: std_logic;
signal o_i: STD_LOGIC_VECTOR(13 downto 0);
signal carry: std_logic;

begin

multiplicador:	process(clk_i)
	variable i, j: integer;
	begin
	--MULTIPLICADOR
	for i in 0 to 6 loop
		for j in 0 to 6 loop
			s(j)<=b(i) and a(j);
			
		end loop;
	
		case i is
			
			
			when 0=> v0<=('0','0','0','0','0','0',s(6),s(5),s(4),s(3),s(2),s(1),s(0)); 
			when 1=>	v1<=('0','0','0','0','0',s(6),s(5),s(4),s(3),s(2),s(1),s(0),'0'); 
			when 2=>	v2<=('0','0','0','0',s(6),s(5),s(4),s(3),s(2),s(1),s(0),'0','0'); 
			when 3=>	v3<=('0','0','0',s(6),s(5),s(4),s(3),s(2),s(1),s(0),'0','0','0'); 
			when 4=>	v4<=('0','0',s(6),s(5),s(4),s(3),s(2),s(1),s(0),'0','0','0','0'); 
			when 5=>	v5<=('0',s(6),s(5),s(4),s(3),s(2),s(1),s(0),'0','0','0','0','0'); 
			when 6=>	v6<=(s(6),s(5),s(4),s(3),s(2),s(1),s(0),'0','0','0','0','0','0'); 	
			--when others=> v0<=(others=>'0');
		end case;
	end loop;
	
	--SUMADOR
	carry<='0';
	if a(7)='1' then
		carry<='1';
	elsif b(7)='1' then
		carry<='1';
	end if;
	
	o_i<= (carry & std_logic_vector(unsigned(v0) + unsigned(v1) + unsigned(v2) + unsigned(v3) + unsigned(v4) + unsigned(v5) + unsigned(v6)));
	


end process multiplicador;

o<=o_i;		

end Behavioral;

