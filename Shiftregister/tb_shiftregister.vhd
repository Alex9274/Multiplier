--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:28:43 12/14/2014
-- Design Name:   
-- Module Name:   D:/Program Files (x86)/Atlassian/Proyectos/Shiftregister/tb_shiftregister.vhd
-- Project Name:  Shiftregister
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: SR
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
 
ENTITY tb_shiftregister IS
END tb_shiftregister;
 
ARCHITECTURE behavior OF tb_shiftregister IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SR
    Generic(lenght : Positive:=7);
	 PORT(
         clr_n : IN  std_logic;
         clk : IN  std_logic;
         sin : IN  std_logic_vector(lenght-1 downto 0);
         sout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clr_n : std_logic := '0';
   signal clk : std_logic;
   signal sin : std_logic_vector (lenght-1 downto 0);

 	--Outputs
   signal sout : std_logic;

   -- Clock period definitions
   constant period : time := 100 ns;
	constant delay : time := 5 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SR PORT MAP (
          clr_n => clr_n,
          clk => clk,
          sin => sin,
          sout => sout
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk<= not clk after 0.5*period;
		clr_n<='1' after 0.25*period, '0' after 0.75*period;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		wait until clr_n='1';
		wait for delay;
		assert sout='0'
			report "clr not functional";
			
		sin<="00000001";
		wait for delay;
		assert sout='0'
			report "Bad shift"
			severity failure;
			
		wait until clk='1';
		--falta el loop
		wait for delay;
		Assert sout='1'
			report "Bad final"
			severity failure;
			
		Assert false
			report "Test passed"
			severity failure;
		End process;
	
   
 

END;
