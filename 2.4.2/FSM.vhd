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
			  enter: in std_logic;--:='1'; --Botón para introducir dato
			  mux_ctr: out std_logic_vector(2 downto 0); --Controla el mux
			  dig_ctr: out std_logic_vector(3 downto 0); --Controla en que casilla se visualiza el número
			  estado: out std_logic
				
			  );
end FSM;

architecture Behavioral of FSM is

	type state_t is (s0,s1,s2,s3);
	signal current_state: state_t;--:=s0;
	signal next_state: state_t;
	

begin

reseteo: process(reset,clk) 
	begin
	
		if reset='1' then
			current_state<=s0;
			--estado<='0';
		elsif rising_edge(clk) then
			current_state <= next_state;
		end if;
	end process;

	
--MUX
process(current_state, enter)
	begin
		
		case current_state is
			
			when s0 => --Estado de reposo
				mux_ctr<="000";
				dig_ctr <= "0001";
				
				if rising_edge(enter) then
					next_state <= s1;
					
				end if;
				
			when s1 => --Primer número
				mux_ctr <= "000"; --Pasamos al Mux las unidades
				dig_ctr <= "0001"; --Controla que casilla muestra el número
				
				--if rising_edge(clk) then
				--mux_ctr <= "001";--Pasamos al Mux las decenas
			--	dig_ctr <= "0010";
			--	elsif rising_edge(clk) then
			--	mux_ctr <= "010";--Pasamos al Mux las centenas
			--	dig_ctr <= "0100";
			--	end if;
				--if rising_edge(enter) then
				if rising_edge(enter) then
					next_state <= s2;
					
				end if;
			
			when s2=> --Segundo número
				mux_ctr <= "001"; --Pasamos al Mux las unidades
				dig_ctr <= "0010"; 
				
			--	mux_ctr <= "001";--Pasamos al Mux las decenas
				--dig_ctr <= "0010";
			
				--mux_ctr <= "010";--Pasamos al Mux las centenas
				--dig_ctr <= "0100";
				
				if rising_edge(enter) then
					next_state <= s3;
				end if;
			
			when s3 => --Número multiplicado
				mux_ctr <= "011"; --Pasamos al Mux las unidades
				dig_ctr <= "0100"; 
				
			--	mux_ctr <= "100";--Pasamos al Mux las decenas
			--	dig_ctr <= "0010";
				
			---	mux_ctr <= "101";--Pasamos al Mux las centenas
			--	dig_ctr <= "0100";
				
			--	mux_ctr <= "110";--Pasamos al Mux los millares
			--	dig_ctr <= "1000";				
				
				if rising_edge(enter) then
					next_state <= s0;
				end if;
				
			end case;
	end process;		
end Behavioral;

