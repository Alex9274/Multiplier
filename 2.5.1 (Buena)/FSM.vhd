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
			  mux_ctr: out std_logic_vector(2 downto 0); --Controla el mux
			  smux2: out std_logic;
			  sdmux: out std_logic
			  --dig_ctr: out std_logic_vector(3 downto 0) --Controla en que casilla se visualiza el número
			 
				
			  );
end FSM;

architecture Behavioral of FSM is

	type state_t is (s0,s1,s2,s3);
	--type bufer is (b1,b2,b3,b4);
	signal current_state: state_t;--:=s0;
	signal next_state: state_t;
	--signal bufer1: bufer;
	--signal bufer2: bufer;
--	signal bufer3: bufer;
	signal bufer1: std_logic_vector(1 downto 0):="00";
	signal bufer2: std_logic_vector(1 downto 0):="00";
	signal bufer3: std_logic_vector(1 downto 0):="00";

begin

reseteo: process(reset,clk) 
	begin
	
		if reset='1' then
			current_state<=s0;
			
		elsif rising_edge(clk) then
			current_state <= next_state;
		end if;
	end process;

--transicion: process(next_state, enter)
--begin
	--if rising_edge(enter) then
		--case current_state is
		--		when s0 => 
			--		if enter='1' then
				--		next_state <= s1;
				--	else
				--		next_state <= current_state;
				--	end if;
					
			--	when s1 => 
			--		if enter='1' then
				--		next_state <= s2;
				--	else
				--		next_state <= current_state;
				--	end if;
					
			--	when s2 => 
				--	if enter='1' then
				--		next_state <= s3;
				---	else
				--		next_state <= current_state;
				--	end if;
					
			--	when s3 => 
				--	if enter='1' then
				--		next_state <= s0;
				--	else
				--		next_state <= current_state;
				--	end if;					
				
		--end case;
			
	--end process;	
--MUX
process(current_state,enter1,enter2,enter3,clk,reset)
	begin
		
	if rising_edge(clk) then
	
		case current_state is
			
		when s0 => --Estado de reposo
				smux2<='0';
				sdmux<='0';
				if enter1='1' then
					next_state <= s1;
				else
					next_state <= current_state;
				end if;
				
		when s1 =>
				
				--smux2<='0';
				--sdmux<='0';
				
				if bufer1="00" then
					mux_ctr <= "000"; --Pasamos al Mux las unidades
					bufer1<="01";
				elsif bufer1="01" then
					mux_ctr <= "001";--Pasamos al Mux las decenas
					bufer1<="10";
				elsif bufer1="10" then
					mux_ctr <= "010";--Pasamos al Mux las centenas
					bufer1<="00";
				end if;
				
				if enter1='1' then
					next_state <= s2;
				else
					next_state <= current_state;
				end if;
				
				smux2<='1';
				sdmux<='1';
				
			when s2 =>
				--smux2<='1';
				--sdmux<='1';
				
				if bufer2="00" then
					mux_ctr <= "000"; --Pasamos al Mux las unidades
					bufer2<="01";
				elsif bufer2="01" then
					mux_ctr <= "001";--Pasamos al Mux las decenas
					bufer2<="10";
				elsif bufer2="10" then
					mux_ctr <= "010";--Pasamos al Mux las centenas
					bufer2<="00";
				end if;
			
			if enter2='1' then
					next_state <= s3;
				else
					next_state <= current_state;
				end if;
				
				
			when s3 =>
				if bufer3="00" then
					mux_ctr <= "011"; --Pasamos al Mux las unidades
					bufer3<="01";
				elsif bufer3="01" then
					mux_ctr <= "100";--Pasamos al Mux las decenas
					bufer3<="10";
				elsif bufer3="10" then
					mux_ctr <= "101";--Pasamos al Mux las centenas
					bufer3<="11";
				elsif bufer3="11" then
					mux_ctr <= "110";--Pasamos al Mux los millares
					bufer3<="00";
				end if;
				
				if reset='1' then
					next_state <= s0;
				else
					next_state <= current_state;
				end if;
				
				
		end case;
	end if;
end process;		
end Behavioral;		
		--	when s1 => --Primer número
				
			--	case bufer1 is
			--		when b1 =>	
			--			mux_ctr <= "000"; --Pasamos al Mux las unidades
				--		dig_ctr <= "1110"; --Controla que casilla muestra el número
				--		bufer1<=b2;
				--	when b2 =>	
				--		mux_ctr <= "001";--Pasamos al Mux las decenas
				--		dig_ctr <= "1101";
				--		bufer1<=b3;
				--	when b3 =>	
				--		mux_ctr <= "010";--Pasamos al Mux las centenas
					--	dig_ctr <= "1011";
				--		bufer1<=b1;
				--	when others => bufer1<=b1;
					
			--	end case;
				--if bufer1="00" then
				--	mux_ctr <= "000"; --Pasamos al Mux las unidades
				--	dig_ctr <= "1110"; --Controla que casilla muestra el número
				--	bufer1<="01";
				--elsif bufer1="01" then
				--	mux_ctr <= "001";--Pasamos al Mux las decenas
				---	dig_ctr <= "1101";
				--	bufer1<="10";
				--elsif bufer1="10" then
				--	mux_ctr <= "010";--Pasamos al Mux las centenas
				--	dig_ctr <= "1011";
				--	bufer1<="00";
			--	end if;
			
				
		--	when s2=> --Segundo número
				
			--	case bufer2 is
			--		when b1 =>	
				--		mux_ctr <= "000"; --Pasamos al Mux las unidades
				--		dig_ctr <= "1110"; --Controla que casilla muestra el número
				--		bufer2<=b2;
				--	when b2 =>	
					--	mux_ctr <= "001";--Pasamos al Mux las decenas
					--	dig_ctr <= "1101";
					--	bufer2<=b3;
					--when b3 =>	
					--	mux_ctr <= "010";--Pasamos al Mux las centenas
					--	dig_ctr <= "1011";
					--	bufer2<=b1;
				--	when others => bufer2<=b1;
			--	end case;	
			--	if bufer2="00" then
					--mux_ctr <= "000"; --Pasamos al Mux las unidades
				--	dig_ctr <= "1110"; --Controla que casilla muestra el número
					--bufer2<="01";
				--elsif bufer2="01" then
				--	mux_ctr <= "001";--Pasamos al Mux las decenas
				--	dig_ctr <= "1101";
				--	bufer2<="10";
				--elsif bufer2="10" then
				--	mux_ctr <= "010";--Pasamos al Mux las centenas
				--	dig_ctr <= "1011";
				--	bufer2<="00";
			--	end if;
			
			--	if rising_edge(enter) then
			--		next_state <= s3;
			--	end if;
			
			--when s3 => --Número multiplicado
				
			--	case bufer3 is
				--	when b1 =>	
				--		mux_ctr <= "011"; --Pasamos al Mux las unidades
				--		dig_ctr <= "1110"; --Controla que casilla muestra el número
				--		bufer3<=b2;
				--	when b2 =>	
				--		mux_ctr <= "100";--Pasamos al Mux las decenas
				--		dig_ctr <= "1101";
				--		bufer3<=b3;
				--	when b3 =>	
				--		mux_ctr <= "101";--Pasamos al Mux las centenas
				--		dig_ctr <= "1011";
				--		bufer3<=b1;
				--	when b4 => 
				--		mux_ctr <= "110";--Pasamos al Mux los millares
				--		dig_ctr <= "0111";
				--		bufer1<=b1;	
				--	end case;	
			--	if bufer3="00" then
					--mux_ctr <= "011"; --Pasamos al Mux las unidades
					--dig_ctr <= "1110"; --Controla que casilla muestra el número
				--	bufer3<="01";
				--elsif bufer3="01" then
				--	mux_ctr <= "100";--Pasamos al Mux las decenas
				--	dig_ctr <= "1101";
				--	bufer3<="10";
				--elsif bufer3="10" then
				--	mux_ctr <= "101";--Pasamos al Mux las centenas
				--	dig_ctr <= "1011";
				--	bufer3<="11";
				--elsif bufer3="11" then
				--	mux_ctr <= "110";--Pasamos al Mux los millares
					--dig_ctr <= "0111";
					--bufer3<="00";
				--end if;
								
			--	if rising_edge(enter) then
			--		next_state <= s0;
			--	end if;
				
			--end case;
		--end if;
	

