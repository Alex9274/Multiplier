--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:07:21 12/13/2014
-- Design Name:   
-- Module Name:   D:/Program Files (x86)/Atlassian/Proyectos/Mux3/tb_Mux3.vhd
-- Project Name:  Mux3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Mux3
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
 
ENTITY tb_Mux3 IS
END tb_Mux3;
 
ARCHITECTURE behavior OF tb_Mux3 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Mux3
    PORT(
         a : IN  std_logic;
         b : IN  std_logic;
         c : IN  std_logic;
			d : IN  std_logic;
         s : IN  std_logic_vector(1 downto 0);
         y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic := '0';
   signal b : std_logic := '0';
   signal c : std_logic := '0';
	signal d : std_logic := '0';
   signal s : std_logic_vector(1 downto 0) := (others => '0');
	signal clock: std_logic:='0';

 	--Outputs
   signal y : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Mux3 PORT MAP (
          a => a,
          b => b,
          c => c,
			 d => d,
          s => s,
          y => y
        );

   -- Clock process definitions
  process
   begin
		
		wait for period/2;
		
		wait for period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for period*10;

      -- insert stimulus here 
		
		
		-- ¿COmo hacer que s vaya pasando por todos los estados?
		
		
		a<='1';
		wait until s="00";
		assert y=a
			report "Bad final"
			severity failure;
			
		s<="01";	
		a<='0';		
		b<='1';
		
		wait until s="01";
		assert y=a
			report "Bad final"
			severity failure;
			
		b<='0';
		c<='1';	
		wait until s="10";
		assert y=c
			report "Bad final"
			severity failure;
			
		c<='0';
		d<='1';
		assert y=d
			report "Bad final"
			severity failure;
			
      wait;
   end process;

END;
