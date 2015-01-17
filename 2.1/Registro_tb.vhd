--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:30:43 12/16/2014
-- Design Name:   
-- Module Name:   C:/Users/Alex/Desktop/SED/Trabajo de SED/Multiplicador_8_bits/Registro_tb.vhd
-- Project Name:  Multiplicador_8_bits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Registro
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
 
ENTITY Registro_tb IS
END Registro_tb;
 
ARCHITECTURE behavior OF Registro_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Registro
	 generic(n: positive:=4);
    PORT(
         clr_n : IN  std_logic;
         si : IN  std_logic;
         clk : IN  std_logic;
         po : OUT  std_logic_vector(n-1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clr_n : std_logic;
   signal si : std_logic;
   signal clk : std_logic;

 	--Outputs
   signal po : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 100 ns;
	constant delay : time := 5 ns;
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Registro PORT MAP (
          clr_n => clr_n,
          si => si,
          clk => clk,
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
		clr_n<='0';
		---wait until clr_n='0';
		wait for delay;
		assert po="0000"
			report "error"
			severity failure;
		clr_n<='1';
		si<='1';
		wait for 100 ns;
		wait for delay;
		
		si<='0';
		wait for 100 ns;
		wait for delay;
		
		si<='1';
		wait for 100 ns;
		wait for delay;
		
		si<='0';
		wait for 50 ns;
		wait for delay;
		
		assert po="0101"
			report "error"
			severity failure;
			
		assert false
			report "Test Passed"
			severity failure;
   end process;

END;
