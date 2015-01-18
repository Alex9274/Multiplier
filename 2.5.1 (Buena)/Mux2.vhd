----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:00:05 01/09/2015 
-- Design Name: 
-- Module Name:    Mux2 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Mux2 is
    Port ( a : in  STD_LOGIC_vector(7 downto 0);
           b : in  STD_LOGIC_vector(7 downto 0);
           s : in  STD_LOGIC;
           y : out  STD_LOGIC_vector(7 downto 0)
			  );
end Mux2;

architecture dataflow of Mux2 is

begin
 y<= a when s='0' else
		b when s='1';

end dataflow;

