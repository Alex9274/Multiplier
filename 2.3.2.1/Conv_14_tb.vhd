--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:41:18 01/04/2015
-- Design Name:   
-- Module Name:   C:/Users/David/Desktop/2.3.1/Conv_14_tb.vhd
-- Project Name:  Multiplicador_8_bits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Conv_14
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
 
ENTITY Conv_14_tb IS
END Conv_14_tb;
 
ARCHITECTURE behavior OF Conv_14_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Conv_14
    PORT(
         din14 : IN  std_logic_vector(14 downto 0);
         dout1 : OUT  std_logic_vector(3 downto 0);
         dout2 : OUT  std_logic_vector(3 downto 0);
         dout3 : OUT  std_logic_vector(3 downto 0);
         dout4 : OUT  std_logic_vector(3 downto 0);
			dout5: OUT	std_logic;
         dout : OUT  std_logic_vector(15 downto 0);
         signo : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal din14 : std_logic_vector(14 downto 0) := (others => '0');
	signal clock : std_logic;
 	--Outputs
   signal dout1 : std_logic_vector(3 downto 0);
   signal dout2 : std_logic_vector(3 downto 0);
   signal dout3 : std_logic_vector(3 downto 0);
   signal dout4 : std_logic_vector(3 downto 0);
	signal dout5 : std_logic;
   signal dout : std_logic_vector(15 downto 0);
   signal signo : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clock_period : time := 10 ns;
	constant delay : time :=10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Conv_14 PORT MAP (
          din14 => din14,
          dout1 => dout1,
          dout2 => dout2,
          dout3 => dout3,
          dout4 => dout4,
			 dout5 => dout5,
          dout => dout,
          signo => signo
        );

   -- Clock process definitions
   clockprocess :process
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

     
		
		din14<="001011011000110" ;-- +5830
	 wait for 20*delay;
	
	assert signo='0'
		report "Error1"
		severity failure;
		
	assert dout="0101100000110000"
		report "Error2"
		severity failure;
		
	
		
	assert false
		report "Test Passed"
		severity failure;
	wait;
   end process;

END;
