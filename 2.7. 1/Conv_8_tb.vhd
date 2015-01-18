--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:38:54 01/03/2015
-- Design Name:   
-- Module Name:   C:/Users/David/Desktop/2.2.2/Conv_8_tb.vhd
-- Project Name:  Multiplicador_8_bits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Conv_8
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Conv_8_tb IS
END Conv_8_tb;
 
ARCHITECTURE behavior OF Conv_8_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Conv_8
    PORT(
         din8 : IN  std_logic_vector(7 downto 0);
         dout1 : OUT  std_logic_vector(3 downto 0);
         dout2 : OUT  std_logic_vector(3 downto 0);
         dout3 : OUT  std_logic_vector(3 downto 0);
         dout : OUT  std_logic_vector(10 downto 0);
			signo : out std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal din8 : std_logic_vector(7 downto 0) := (others => '0');
	signal clock : std_logic;
 	--Outputs
   signal dout1 : std_logic_vector(3 downto 0);
   signal dout2 : std_logic_vector(3 downto 0);
   signal dout3 : std_logic_vector(3 downto 0);
   signal dout : std_logic_vector(10 downto 0);
	signal signo : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clock_period : time := 10 ns;
	constant delay : time :=10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Conv_8 PORT MAP (
          din8 => din8,
          dout1 => dout1,
          dout2 => dout2,
          dout3 => dout3,
          dout => dout,
			 signo => signo
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clock_period*10;

      -- insert stimulus here 
	--din8<="00000001";-- +1
	-- wait for 20*delay;
	din8<="11000101";-- -69
	 wait for 20*delay;
	assert signo='1'
		report "Error"
		severity failure;
		
	din8<="01111111";-- +127
      wait for 20*delay;
	 assert dout="00100100111"
		report "Error"
		severity failure;
		
	assert signo='0'
		report "Error"
		severity failure;
		
	assert false
		report "Test Passed"
		severity failure;
			
		wait;
   end process;

END;
