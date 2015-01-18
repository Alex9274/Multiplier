----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:06:21 01/09/2015 
-- Design Name: 
-- Module Name:    Dmux - Behavioral 
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

entity Dmux is
    Port ( a : in  STD_LOGIC_vector(7 downto 0);
           o1 : out  STD_LOGIC_vector(7 downto 0);
           o2 : out  STD_LOGIC_vector(7 downto 0);
           s : in  STD_LOGIC_vector(1 downto 0)
			  );
end Dmux;

architecture Behavioral of Dmux is

begin
 
 o1 <= a when s="01";
 o2 <= a when s="10";
 
end Behavioral;

