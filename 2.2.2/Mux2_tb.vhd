--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:37:38 12/31/2014
-- Design Name:   
-- Module Name:   C:/Users/Alex/Desktop/SED/2.1.2/Mux2_tb.vhd
-- Project Name:  Multiplicador_8_bits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Mux2
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
 
ENTITY Mux2_tb IS
END Mux2_tb;
 
ARCHITECTURE behavior OF Mux2_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Mux2
    PORT(
         a : IN  std_logic;
         b : IN  std_logic;
         s : IN  std_logic;
         y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic:= '0';
   signal b : std_logic := '0';
   signal s : std_logic := '0';
	signal clock: std_logic:='0';

 	--Outputs
   signal y : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Mux2 PORT MAP (
          a => a,
          b => b,
          s => s,
          y => y
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
      wait for 20 ns;	

      --wait for clock_period*10;

      -- insert stimulus here 
		
		a<='1';
		wait for 5 ns;
		assert y='1'
			report "error"
			severity failure;
		
		s<='1';
		wait for 5 ns;
		assert y='0'
			report "error"
			severity failure;
		
		b<='1';
		a<='0';
		s<='0';
		wait for 5 ns;
		assert y='0'
			report "error"
			severity failure;
			
		assert false
			report "Test passed"
			severity failure;	
		
     
   end process;

END;
