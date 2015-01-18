--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:08:20 01/03/2015
-- Design Name:   
-- Module Name:   C:/Users/Alex/Desktop/SED/2.2.2/reg_8_tb.vhd
-- Project Name:  Multiplicador_8_bits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: reg_8
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
 
ENTITY reg_8_tb IS
END reg_8_tb;
 
ARCHITECTURE behavior OF reg_8_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT reg_8
    PORT(
         si : IN  std_logic_vector(7 downto 0);
         clk : IN  std_logic;
         clr_n : IN  std_logic;
        -- en : IN  std_logic;
         po : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal si : std_logic_vector(7 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal clr_n : std_logic := '0';
  -- signal en : std_logic := '0';

 	--Outputs
   signal po : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
	constant delay : time := 5 ns;
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: reg_8 PORT MAP (
          si => si,
          clk => clk,
          clr_n => clr_n,
        --  en => en,
          po => po
        );

   -- Clock process definitions
   clk_process :process
	 begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin
		 -- hold reset state for 100 ns.
      wait for 100 ns;	

      --wait for clk_period*10;

      -- insert stimulus here 

   wait for 20 ns;
		--en<='1';
		clr_n<='0';
		---wait until clr_n='0';
		wait for delay;
		assert po="00000000"
			report "error"
			severity failure;
		clr_n<='1';
		si<="10101111";
		wait for 100 ns;
		--wait for delay;
		
		assert po="10101111"
			report "error"
			severity failure;
		
		clr_n<='0';
		wait for delay;
		--en<='0';		
		wait for delay;
		
		assert po="00000000"
			report "Error"
			severity failure;
			
		assert false
			report "Test Passed"
			severity failure;
   end process;

END;
