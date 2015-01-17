----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:10:17 12/14/2014 
-- Design Name: 
-- Module Name:    SR - Behavioral 
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

entity SR is

	Generic (nbits : positive := 7);
    Port ( clr_n : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           sin : in  STD_LOGIC_vector(nbits-1 downto 0);
           sout : out  STD_LOGIC);
end SR;

architecture Structural of SR is

Component ffd is

Port( clr_n: std_logic;
		clk : std_logic;
		d : in std_logic_vector(nbits-1 downto 0);
		q : out std_logic);
		
End Component;

begin
ffd: for i in 0 to nbits-1 Generate

	Begin
	ffd0: if i=0 Generate
			Begin
			
				first : ffd Port Map(clr_n<=clr_n, clk<=clk, d<=sin, q<=d(1));
	End Generate;
	
ffd: if i=nbits-1 Generate

	Begin 
	last: ffd Port Map (clr_n<=clr_n,clk<=clk, d<=q(nbits-2), q<=sout);
	End Generate;
	
ffd: if i/=0 and i/=nbits-1 Generate
	Begin
	middle: ffd Port Map(clr_n<=clr_n,clk<=clk, d<=q(i-1), q<=d(i+1));
	End Generate;
End Generate;
End Structutal;




