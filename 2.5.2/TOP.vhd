----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:16:23 01/08/2015 
-- Design Name: 
-- Module Name:    TOP - Behavioral 
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

entity TOP is
    Port ( reset : in  STD_LOGIC;
           clk : in  STD_LOGIC;
			  din: in std_logic_vector(7 downto 0);
			  enter: in std_logic;
           segments : out  STD_LOGIC_vector(6 downto 0);
           digits : out  STD_LOGIC_vector(3 downto 0);
			  --mux_ctr: out  STD_LOGIC_vector(2 downto 0);
           signo : out  STD_LOGIC;
           overflow : out  STD_LOGIC
			  );
end TOP;

architecture Behavioral of TOP is

COMPONENT Datapath
	PORT(
		reset_n : IN std_logic;
		clk : IN std_logic;
		din : IN std_logic_vector(7 downto 0);
		mux_ctr : IN std_logic_vector(2 downto 0);          
		segments : OUT std_logic_vector(6 downto 0);
		digits : OUT std_logic_vector(3 downto 0);
		signo : OUT std_logic;
		overflow : OUT std_logic
		);
	END COMPONENT;
	
	
	COMPONENT FSM
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		enter : IN std_logic;
		mux_ctr : OUT std_logic_vector(2 downto 0)
		--dig_ctr : OUT std_logic_vector(3 downto 0)
		
		);
	END COMPONENT;
	
signal mux_ctr_i: std_logic_vector(2 downto 0);	--Mux
--signal dig: std_logic_vector(3 downto 0); --Dig_ctr
begin
Inst_FSM: FSM PORT MAP(
		clk => clk,
		reset => reset,
		enter => enter,
		mux_ctr => mux_ctr_i
		--dig_ctr => dig_ctr
		 
	);
	
Inst_Datapath: Datapath PORT MAP(
		reset_n => not reset,
		clk => clk,
		din => din,
		mux_ctr => mux_ctr_i,
		segments => segments,
		digits => digits,
		signo => signo,
		overflow => overflow
	);
	
end Behavioral;

