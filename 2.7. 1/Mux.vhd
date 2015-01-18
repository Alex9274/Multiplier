----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:05:13 12/16/2014 
-- Design Name: 
-- Module Name:    Mux - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity Mux is
    Port ( d1 : in  STD_LOGIC_vector(3 downto 0);
           d2 : in  STD_LOGIC_vector(3 downto 0);
           d3 : in  STD_LOGIC_vector(3 downto 0);
			  d4 : in  STD_LOGIC_vector(3 downto 0);
			  clk : in std_logic;
			  reset : in std_logic;
			  
           salida : out STD_LOGIC_vector(3 downto 0);
			  digito: out std_logic_vector(3 downto 0)
			  );
end Mux;

architecture dataflow of Mux is
type estados is (rst, e1);
signal estado : estados;
	signal ciclo: integer;
	signal var: integer;
begin

	process(reset,clk)
	
	begin
	
	--if reset='1' then
	--	estado <= rst;
		
		
	
				
		if rising_edge(clk) then
			ciclo <= ciclo+1;
		end if;
				
				if ciclo=0 then
					digito <= "1110";
					salida <= d1;
				
				end if;
				
						
				if ciclo=250000 then
					
						digito <= "1101";
						salida <= d2;
				end if;
				
				if ciclo=500000 then
					
						digito <= "1011";
						salida <= d3;
				end if;
			
				
				
				if ciclo=750000 then
						
						digito <= "0111";
						salida <= d4;
						ciclo<=0;
				end if;
				
				if ciclo=1000000 then
						
						ciclo<=0;
				end if;
				
	
end process;
	
end dataflow;


