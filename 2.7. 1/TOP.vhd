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
			  
			  enter1: in std_logic;
			  enter2: in std_logic;
			  enter3: in std_logic;
			  
           segments : out  STD_LOGIC_vector(6 downto 0);
           digits : out  STD_LOGIC_vector(3 downto 0);
			  signo : out  STD_LOGIC;
           overflow : out  STD_LOGIC
			  );
end TOP;

architecture Behavioral of TOP is

COMPONENT Datapath
	PORT(
		     reset_n : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           din : in  STD_LOGIC_vector(7 downto 0);
           BCD_ctr : in  STD_LOGIC_vector(1 downto 0);
			  smux2_ctr: in std_logic_vector(1 downto 0);
			  sdmux_ctr: in std_logic_vector(1 downto 0);
			--  enable: in std_logic;
           segments : out  STD_LOGIC_vector(6 downto 0); --segmentos del BCD
           digits : out  STD_LOGIC_vector(3 downto 0); --casilla del BCD
			  signo: out std_logic;
			  overflow: out std_logic
		);
	END COMPONENT;
	
	
	COMPONENT FSM
	PORT(
		     clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;--:='1'; --Otro botón
			  enter1: in std_logic;--:='1'; --Botón para introducir dato
			  enter2: in std_logic;
			  enter3: in std_logic;
			  
			  BCD_ctr: out std_logic_vector(1 downto 0); 
			  smux2_ctr: out std_logic_vector(1 downto 0);
			  sdmux_ctr: out std_logic_vector(1 downto 0)
		
		);
	END COMPONENT;
	
signal BCD_i: std_logic_vector(1 downto 0);	
signal smux2_i: std_logic_vector(1 downto 0);
signal sdmux_i: std_logic_vector(1 downto 0);

begin
Inst_FSM: FSM PORT MAP(
		
		   clk => clk,
			reset => reset,
			enter1 => enter1,
			enter2 => enter2,
			enter3 => enter3,
			  
			BCD_ctr => BCD_i,
			smux2_ctr => smux2_i,
			sdmux_ctr => sdmux_i
				 
	);
	
Inst_Datapath: Datapath PORT MAP(
		
		reset_n => not reset,
		clk => clk,
		din => din,		
      BCD_ctr => BCD_i,
		smux2_ctr => smux2_i,
		sdmux_ctr => sdmux_i,
			
      segments => segments,
		digits => digits,
		signo => signo,
		overflow => overflow		
		
	);
	
end Behavioral;

