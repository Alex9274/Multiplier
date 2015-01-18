--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:07:39 12/16/2014
-- Design Name:   
-- Module Name:   C:/Users/Alex/Desktop/SED/Trabajo de SED/Multiplicador_8_bits/Mux_tb.vhd
-- Project Name:  Multiplicador_8_bits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Mux
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
 
ENTITY Mux_tb IS
END Mux_tb;
 
ARCHITECTURE behavior OF Mux_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Mux
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         c : IN  std_logic_vector(3 downto 0);
         d : IN  std_logic_vector(3 downto 0);
			e : IN  std_logic_vector(3 downto 0);
         f : IN  std_logic_vector(3 downto 0);
         g : IN  std_logic_vector(3 downto 0);
         h : IN  std_logic_vector(3 downto 0);
         s : IN  std_logic_vector(2 downto 0);
         y : OUT  std_logic_vector(3 downto 0);
			dig_ctr: out std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others=>'0');
   signal b : std_logic_vector(3 downto 0) := (others=>'0');
   signal c : std_logic_vector(3 downto 0) := (others=>'0');
   signal d : std_logic_vector(3 downto 0) := (others=>'0');
	signal e : std_logic_vector(3 downto 0) := (others=>'0');
	signal f : std_logic_vector(3 downto 0) := (others=>'0');
   signal g : std_logic_vector(3 downto 0) := (others=>'0');
   signal h : std_logic_vector(3 downto 0) := (others=>'0');
	signal s : std_logic_vector(2 downto 0) := (others => '0');
	signal dig_ctr: std_logic_vector(3 downto 0) := (others => '0');
	signal clk: std_logic;

 	--Outputs
   signal y : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
	
	constant clk_period : time := 100 ns;
	constant delay: time :=5 ns;
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Mux PORT MAP (
          a => a,
          b => b,
          c => c,
          d => d,
			 e => e,
			 f => f,
          g => g,
			 h => h,
          s => s,
			 dig_ctr => dig_ctr,
          y => y
        );

   -- Clock process definitions
   --<clock>_process :process
	process
   begin
		--<clock> <= '0';
		clk<='0';
		wait for clk_period/2;
		--<clock> <= '1';
		--clk<='1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 50 ns.
      wait for 50 ns;	

      --wait for <clock>_period*10;
		--wait for clk_period*10;

      -- insert stimulus here 

      a<="1001";
		wait for delay;
		s<="000";
		wait for 20 ns;
		assert y="1001"
			report "Error"
			severity failure;
			
		b<="1011";
		wait for delay;
		s<="001";
		wait for 20 ns;
		assert y="1011"
			report "Error"
			severity failure;
		
		c<="1111";
		wait for delay;
		s<="010";
		wait for 20 ns;
		assert y="1111"
			report "Error"
			severity failure;
		
		assert dig_ctr="1011"
			report "Error1"
			severity failure;
		
			
		d<="0001";
		wait for delay;
		s<="011";
		wait for 20 ns;
		assert y="0001"
			report "Error"
			severity failure;
		
		e<="0000";
		wait for delay;
		s<="100";
		wait for 20 ns;
		assert y="0000"
			report "Error"
			severity failure;
		
		f<="0100";
		wait for delay;
		s<="101";
		wait for 20 ns;
		assert y="0100"
			report "Error"
			severity failure;

		g<="0101";
		wait for delay;
		s<="110";
		wait for 20 ns;
		assert y="0101"
			report "Error"
			severity failure;
			
		assert false
			report "Test Passed"
			severity failure;
			
   end process;

END;
