--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:09:36 12/17/2014
-- Design Name:   
-- Module Name:   C:/Users/Alex/Desktop/SED/Trabajo de SED/Multiplicador_8_bits/Multiplicador_tb.vhd
-- Project Name:  Multiplicador_8_bits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Multiplicador
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
--use IEEE.STD_LOGIC_ARITH.ALL;
--use IEEE.STD_LOGIC_UNSIGNED.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
 
ENTITY Multiplicador_tb IS
END Multiplicador_tb;
 
ARCHITECTURE behavior OF Multiplicador_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Multiplicador
    PORT(
         a : IN  std_logic_vector(7 downto 0);
         b : IN  std_logic_vector(7 downto 0);
         clk : IN  std_logic;
         o : OUT  std_logic_vector(14 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(7 downto 0):= "11111111";
   signal b : std_logic_vector(7 downto 0):= "11111111";
   signal clk : std_logic;

 	--Outputs
   signal o : std_logic_vector(14 downto 0);--:= (others => '0');

   -- Clock period definitions
   constant clk_period : time := 100 ns;
	constant delay : time := 5 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Multiplicador PORT MAP (
          a => a,
          b => b,
          clk => clk,
          o => o
        );

   -- Clock process definitions
	
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		--clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      --hold reset state for 50 ns.
      wait for 30 ns;	

     --wait for clk_period*10;

      -- insert stimulus here 

     a<="10000001";
	  
	  b<="00000001";
	  wait for 20*delay;
	  
	  a<="11111111";
	  
	 b<="11111111";
	  
	  wait until clk='1';
	  wait for delay;
	  wait for 20ns;
	  
	  assert o="100000000000001"
		report "Error"
		severity failure;
		
	assert false
		report "Test Passed"
		severity failure;
		
   end process;

END;
