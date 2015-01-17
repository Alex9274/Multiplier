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
    Port ( a : in  STD_LOGIC_VECTOR(n-1 downto 0);--:= "10000001";
           b : in  STD_LOGIC_VECTOR(n-1 downto 0);--:= "00000001";
           clk : in  STD_LOGIC;
           o :out  STD_LOGIC_VECTOR(13 downto 0)
			  );
end Multiplicador;

architecture Behavioral of Multiplicador is

signal v0,v1,v2,v3,v4,v5,v6: std_logic_vector(12 downto 0);--:=(others=>'0'); --Tenemos 13 bits, luego hay que añadir el de signo
signal s: std_logic_vector(13 downto 0); --7 bits porque le quitamos el de signo
signal clk_i: std_logic;
signal o_i: STD_LOGIC_VECTOR(13 downto 0);
signal signo: std_logic;

begin

multiplicador:	process(a,b)
	--variable i, j: integer;
	begin
	
	o_i<=(OTHERS=>'0');
	clk_i<='1';
	
	
	--SIGNO
	signo<='0';
	if a(7)/=b(7) then 
	signo <='1';
	else signo<='0';
	end if;
	
	--MULTIPLICADOR
	
		if b(0)='1' then v0<=('0','0','0','0','0','0',a(6),a(5),a(4),a(3),a(2),a(1),a(0));
		elsif b(0)='0' then  v0<=('0','0','0','0','0','0','0','0','0','0','0','0','0');
		end if;
		if b(1)='1' then v1<=('0','0','0','0','0',a(6),a(5),a(4),a(3),a(2),a(1),a(0),'0');
		elsif b(1)='0' then v1<=('0','0','0','0','0','0','0','0','0','0','0','0','0');
		end if;
		if b(2)='1' then v2<=('0','0','0','0',a(6),a(5),a(4),a(3),a(2),a(1),a(0),'0','0');
		elsif b(2)='0' then v2<=('0','0','0','0','0','0','0','0','0','0','0','0','0');
		end if;
		if b(3)='1' then v3<=('0','0','0',a(6),a(5),a(4),a(3),a(2),a(1),a(0),'0','0','0');
		elsif b(3)='0' then v3<=('0','0','0','0','0','0','0','0','0','0','0','0','0');
		end if;
		if b(4)='1' then v4<=('0','0',a(6),a(5),a(4),a(3),a(2),a(1),a(0),'0','0','0','0'); 
		elsif b(4)='0' then v4<=('0','0','0','0','0','0','0','0','0','0','0','0','0');
		end if;
		if b(5)='1' then v5<=('0',a(6),a(5),a(4),a(3),a(2),a(1),a(0),'0','0','0','0','0');
		elsif b(5)='0' then v5<=('0','0','0','0','0','0','0','0','0','0','0','0','0');
		end if;
		if b(6)='1' then v6<=(a(6),a(5),a(4),a(3),a(2),a(1),a(0),'0','0','0','0','0','0');
		elsif b(6)='0' then v6<=('0','0','0','0','0','0','0','0','0','0','0','0','0');
		end if;
		
		
--SUMA
	
	if clk_i='1' then
	
	 --s<=std_logic_vector(unsigned (v0) + unsigned (v1)+ unsigned (v2)+ unsigned (v3)+ unsigned (v4)+ unsigned (v5)+ unsigned (v6));
	--o_i<=std_logic_vector(carry & s);
	s<=(signo & std_logic_vector(unsigned (v0) + unsigned (v1)+ unsigned (v2)+ unsigned (v3)+ unsigned (v4)+ unsigned (v5)+ unsigned (v6)));
	end if;


end process multiplicador;
o<=s;
--o<=o_i;		

end Behavioral;

