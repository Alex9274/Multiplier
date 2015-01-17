--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:34:13 12/31/2014
-- Design Name:   
-- Module Name:   C:/Users/Alex/Desktop/SED/2.1.2/BCD7_tb.vhd
-- Project Name:  Multiplicador_8_bits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: BCD7
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
 
ENTITY BCD7_tb IS
END BCD7_tb;
 
ARCHITECTURE behavior OF BCD7_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BCD7
    PORT(
         code : IN  std_logic_vector(3 downto 0);
         led : OUT  std_logic_vector(6 downto 0);
         s : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal code : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal led : std_logic_vector(6 downto 0);
   signal s : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
 
	TYPE vtest is record
		code : std_logic_vector(3 DOWNTO 0);
		led : std_logic_vector(6 DOWNTO 0);
	END RECORD;
	
	TYPE vtest_vector IS ARRAY (natural RANGE <>) OF vtest;
	
	CONSTANT test: vtest_vector := (
				(code => "0000", led => "0000001"),
				(code => "0001", led => "1001111"),
				(code => "0010", led => "0010010"),
				(code => "0011", led => "0000110"),
				(code => "0100", led => "1001100"),
				(code => "0101", led => "0100100"),
				(code => "0110", led => "0100000"),
				(code => "0111", led => "0001111"),
				(code => "1000", led => "0000000"),
				(code => "1001", led => "0000100"),
				(code => "1010", led => "1111110"),
				(code => "1011", led => "1111110"),
				(code => "1100", led => "1111110"),
				(code => "1101", led => "1111110"),
				(code => "1110", led => "1111110"),
				(code => "1111", led => "1111110")
	);
	
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BCD7 PORT MAP (
          code => code,
          led => led,
          s => s
        );

   -- Clock process definitions
   process
   begin
		FOR i IN 0 TO test'HIGH LOOP
			code <= test(i).code;
			
		WAIT FOR 20 ns;
		
		ASSERT led = test(i).led
			REPORT "Salida incorrecta."
			SEVERITY FAILURE;
			
		END LOOP;
	
	ASSERT false
		REPORT "Simulación finalizada. Test superado."
		SEVERITY FAILURE;
   end process;

END;
