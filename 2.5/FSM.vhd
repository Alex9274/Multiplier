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
	signal bufer1: std_logic_vector(1 downto 0):="00";
	signal bufer2: std_logic_vector(1 downto 0):="00";
	signal bufer3: std_logic_vector(1 downto 0):="00";

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
process(current_state, enter,clk)
	begin
		
		case current_state is
			
			when s0 => --Estado de reposo
				mux_ctr<="000";
				dig_ctr <= "0001";
				
				if rising_edge(enter) then
					next_state <= s1;
					
				end if;
				
			when s1 => --Primer número
				
				if bufer1="00" then
					mux_ctr <= "000"; --Pasamos al Mux las unidades
					dig_ctr <= "0001"; --Controla que casilla muestra el número
					bufer1<="01";
				elsif bufer1="01" then
					mux_ctr <= "001";--Pasamos al Mux las decenas
					dig_ctr <= "0010";
					bufer1<="10";
				elsif bufer1="10" then
					mux_ctr <= "010";--Pasamos al Mux las centenas
					dig_ctr <= "0100";
					bufer1<="00";
				end if;
				
				if rising_edge(enter) then
					next_state <= s2;
				end if;
				
			when s2=> --Segundo número
				
				if bufer2="00" then
					mux_ctr <= "000"; --Pasamos al Mux las unidades
					dig_ctr <= "0001"; --Controla que casilla muestra el número
					bufer2<="01";
				elsif bufer2="01" then
					mux_ctr <= "001";--Pasamos al Mux las decenas
					dig_ctr <= "0010";
					bufer2<="10";
				elsif bufer2="10" then
					mux_ctr <= "010";--Pasamos al Mux las centenas
					dig_ctr <= "0100";
					bufer2<="00";
				end if;
				
				if rising_edge(enter) then
					next_state <= s3;
				end if;
			
			when s3 => --Número multiplicado
				
				if bufer3="00" then
					mux_ctr <= "011"; --Pasamos al Mux las unidades
					dig_ctr <= "0001"; --Controla que casilla muestra el número
					bufer3<="01";
				elsif bufer3="01" then
					mux_ctr <= "100";--Pasamos al Mux las decenas
					dig_ctr <= "0010";
					bufer3<="10";
				elsif bufer3="10" then
					mux_ctr <= "101";--Pasamos al Mux las centenas
					dig_ctr <= "0100";
					bufer3<="11";
				elsif bufer3="11" then
					mux_ctr <= "110";--Pasamos al Mux los millares
					dig_ctr <= "1000";
					bufer3<="00";
				end if;
								
				if rising_edge(enter) then
					next_state <= s0;
				end if;
				
			end case;
	end process;		
end Behavioral;

