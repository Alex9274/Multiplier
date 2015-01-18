----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:27:02 12/31/2014 
-- Design Name: 
-- Module Name:    FSM - Behavioral 
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

entity FSM is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;--:='1'; --Otro botón
			  enter1: in std_logic;--:='1'; --Botón para introducir dato
			  enter2: in std_logic;
			  enter3: in std_logic;
			  
			  BCD_ctr: out std_logic_vector(1 downto 0); --Controla el mux
			  smux2_ctr: out std_logic_vector(1 downto 0);
			  sdmux_ctr: out std_logic_vector(1 downto 0)
			  
			 
				
			  );
end FSM;

architecture Behavioral of FSM is

	type state_t is (s0,s1,s2);
	
	signal current_state: state_t;
	signal next_state: state_t;
	
	signal bufer1: std_logic_vector(1 downto 0):="00";
	signal bufer2: std_logic_vector(1 downto 0):="00";
	signal bufer3: std_logic_vector(1 downto 0):="00";

begin

reseteo: process(reset,clk) ---------------------------------PROBAR A QUITAR CLK DE LISTA DE SENSIBILIDAD O DEL IF
	begin
	
		if reset='1' then
			current_state<=s0;
			
		elsif rising_edge(clk) then
			current_state <= next_state;
		end if;
	end process;


process(current_state)
begin

	case current_state is
			
		when s0 => --Mostramos primer numero y lo introducimos con enter1
				
				smux2_ctr <= "01";
				sdmux_ctr <= "01";
				BCD_ctr <= "01";-------------------------------------------¿SEGURO?
				
							
		when s1 => --Mostramos segundo número y lo introducimos con enter2
				
				smux2_ctr <= "10";
				sdmux_ctr <= "10";
				BCD_ctr <= "01";
								
		when s2 =>		--Mostramos la multiplicación 
				
				smux2_ctr <= "10";
				sdmux_ctr <= "10";
				BCD_ctr <= "10";
				
		end case;
end process;		
process(current_state, enter1, enter2, reset)
	begin
		next_state <= current_state;		
		case current_state is
			
		when s0 => 
				
				if enter1='1' then
					next_state <= s1;
				else
					next_state <= current_state;
				end if;
				
		when s1 => 
				
				if enter2='1' then
					next_state <= s2;
				else
					next_state <= current_state;
				end if;
				
		when s2 =>	
				
				if reset='1' then -----------------------------¿PONEMOS ENTER3 O RESET O NADA?
					next_state <= s0;
				else
					next_state <= current_state;
				end if;
		end case;
	
end process;		
end Behavioral;		
		
