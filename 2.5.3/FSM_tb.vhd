--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:51:45 01/05/2015
-- Design Name:   
-- Module Name:   C:/Users/Alex/Desktop/SED/2.4/FSM_tb.vhd
-- Project Name:  Multiplicador_8_bits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FSM
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
 
ENTITY FSM_tb IS
END FSM_tb;
 
ARCHITECTURE behavior OF FSM_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FSM
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         enter : IN  std_logic;
         mux_ctr : OUT  std_logic_vector(2 downto 0)
        -- dig_ctr : OUT  std_logic_vector(3 downto 0)
			
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal enter : std_logic := '0';

 	--Outputs
   signal mux_ctr : std_logic_vector(2 downto 0);
   --signal dig_ctr : std_logic_vector(3 downto 0);
	

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FSM PORT MAP (
          clk => clk,
          reset => reset,
          enter => enter,
          mux_ctr => mux_ctr
          --dig_ctr => dig_ctr
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
       --hold reset state for 100 ns
      wait for 20 ns;	

      --wait for clk_period*10;

      -- insert stimulus here 

		enter<='1';
		wait for 5 ns;
		enter<='0';
		--wait until clk='1';
		
		--assert mux_ctr="000"
		--	report "Fallo1"
		--	severity failure;
		--wait for 20 ns;
		
		wait for 35 ns;
		enter<='1';
		wait for 5 ns;
		enter<='0';
		
		wait for 35 ns;
		enter<='1';
		wait for 5 ns;
		enter<='0';
		
	--	wait for 55 ns;
		--enter<='1';
	--	wait for 5 ns;
		--enter<='0';
		
		--enter<='1';
		--wait until clk='1';
		--wait for 5 ns;
		--assert mux_ctr="001"
		--	report "Fallo2"
		--	severity failure;
		--enter<='0';
		--wait for 10 ns;
		
	--	enter<='1';
		--wait until clk='1';
		--wait for 5 ns;
		--assert mux_ctr="011"
		--	report "Fallo3"
		--	severity failure;
		--enter<='0';
		--wait for 10 ns;
		
	--	enter<='1';
	--	wait until clk='1';
	--	wait for 5 ns;
		--assert mux_ctr="000"
		--	report "Fallo4"
		--	severity failure;
		--enter<='0';
		
		wait for 50 ns;
		
		assert false
			report "Test passed"
			severity failure;
			
   end process;

END;
