----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:51:26 01/05/2015 
-- Design Name: 
-- Module Name:    Datapath - Behavioral 
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

entity Datapath is
    Port ( reset_n : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           din : in  STD_LOGIC_vector(7 downto 0);
           mux_ctr : in  STD_LOGIC_vector(2 downto 0); --MUX
			  smux2: in std_logic;
			  sdmux: in std_logic;
			--  enable: in std_logic;
           segments : out  STD_LOGIC_vector(6 downto 0); --segmentos del BCD
           digits : out  STD_LOGIC_vector(3 downto 0); --casilla del BCD
			  signo: out std_logic;
			  overflow: out std_logic
			  );
end Datapath;

architecture Behavioral of Datapath is

component Mux2 is

	Port (
				a : in  STD_LOGIC_vector(7 downto 0);
				b : in  STD_LOGIC_vector(7 downto 0);
				s : in  STD_LOGIC;
				y : out  STD_LOGIC_vector(7 downto 0)
	
	);
end component Mux2;

component Dmux is
Port ( 
				a : in  STD_LOGIC_vector(7 downto 0);
           o1 : out  STD_LOGIC_vector(7 downto 0);
           o2 : out  STD_LOGIC_vector(7 downto 0);
           s : in  STD_LOGIC);
end component Dmux;
component reg_4 is

	Port ( si : in  STD_LOGIC_vector(3 downto 0);
         --  en : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           clr_n : in  STD_LOGIC;
           po : out  STD_LOGIC_vector(3 downto 0)
			  );

end component reg_4;

component reg_8 is

	Port ( si : in  STD_LOGIC_vector(7 downto 0);
           clk : in  STD_LOGIC;
           clr_n : in  STD_LOGIC;
          -- en : in  STD_LOGIC;
           po : out  STD_LOGIC_vector(7 downto 0)
			  );
end component reg_8;

component Multiplicador is
generic(n: positive:=8);
    Port ( a : in  STD_LOGIC_VECTOR(n-1 downto 0);
           b : in  STD_LOGIC_VECTOR(n-1 downto 0);
           clk : in  STD_LOGIC;
           o :out  STD_LOGIC_VECTOR(14 downto 0)
			  );
end component Multiplicador;

component Mux is
	Port ( a : in  STD_LOGIC_vector(3 downto 0);
           b : in  STD_LOGIC_vector(3 downto 0);
           c : in  STD_LOGIC_vector(3 downto 0);
			  d : in  STD_LOGIC_vector(3 downto 0);
			  e : in  STD_LOGIC_vector(3 downto 0);
           f : in  STD_LOGIC_vector(3 downto 0);
           g : in  STD_LOGIC_vector(3 downto 0);
			  h : in  STD_LOGIC_vector(3 downto 0);			  
           s : in  STD_LOGIC_VECTOR(2 downto 0);
           y : out STD_LOGIC_vector(3 downto 0);
			  dig_ctr: out std_logic_vector(3 downto 0)
			  );
end component Mux;

component BCD7 is
	Port ( code : in  STD_LOGIC_vector(3 downto 0);
           led : out  STD_LOGIC_vector(6 downto 0)
           --s : out  STD_LOGIC_vector(3 downto 0)
			  );
end component BCD7;

component Conv_8 is
		Port ( din8 : in  STD_LOGIC_VECTOR(7 downto 0);
			  
           dout1 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout2 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout3 : out  STD_LOGIC_VECTOR(3 downto 0);
			  --dout : out STD_LOGIC_VECTOR(10 downto 0);
			  signo: out std_logic
				 );
end component Conv_8;

component Conv_14 is

	Port ( din14 : in  STD_LOGIC_VECTOR(14 downto 0);
           dout1 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout2 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout3 : out  STD_LOGIC_VECTOR(3 downto 0);
           dout4 : out  STD_LOGIC_VECTOR(3 downto 0);
			  overflow : out STD_LOGIC;
           --dout : out  STD_LOGIC_VECTOR(15 downto 0);
			  signo: out std_logic
			  );
end component Conv_14;

signal current_data: std_logic_vector(3 downto 0);
signal reg_81_i: std_logic_vector(7 downto 0);
signal reg_82_i: std_logic_vector(7 downto 0);
signal reg_41_i: std_logic_vector(3 downto 0);
signal reg_42_i: std_logic_vector(3 downto 0);
signal reg_43_i: std_logic_vector(3 downto 0);
signal reg_44_i: std_logic_vector(3 downto 0);
signal reg_45_i: std_logic_vector(3 downto 0);
signal reg_46_i: std_logic_vector(3 downto 0);
signal reg_47_i: std_logic_vector(3 downto 0);
signal reg_48_i: std_logic_vector(3 downto 0):="0000";
signal multiplicacion_i: std_logic_vector(14 downto 0);
signal signo_i1: std_logic;
signal signo_i2: std_logic;
--signal overflow_i: std_logic;
signal unidades_i1: std_logic_vector(3 downto 0);
signal decenas_i1: std_logic_vector(3 downto 0);
signal centenas_i1: std_logic_vector(3 downto 0);
signal unidades_i2: std_logic_vector(3 downto 0);
signal decenas_i2: std_logic_vector(3 downto 0);
signal centenas_i2: std_logic_vector(3 downto 0);
signal millares_i2: std_logic_vector(3 downto 0);
signal convertidor: std_logic_vector(7 downto 0);

signal dm1: std_logic_vector(7 downto 0);
signal dm2: std_logic_vector(7 downto 0);
signal segment_i: std_logic_vector(6 downto 0);


begin

dmux_2: Dmux port map(

		 a => din,
       o1 => dm1,
       o2 => dm2,
       s => sdmux

);
mux_2: Mux2 port map(

		 a => dm1,
       b => dm2,
       s => smux2,
       y => convertidor


);

reg_81: reg_8 port map(
		
		si => dm1,
		--en => enable,
		clk => clk,
		clr_n => reset_n,
		po => reg_81_i
	
	);
	
reg_82: reg_8 port map(
		
		si => dm2,
		--en => enable,
		clk => clk,
		clr_n => reset_n,
		po => reg_82_i
	
	);
	
multipli: Multiplicador port map(

		a => reg_81_i,
		b => reg_82_i,
		clk => clk,
		o => multiplicacion_i
); 

convertidor_8: Conv_8 port map(

		din8 => convertidor,		  
		dout1 => unidades_i1,
		dout2 => decenas_i1,
		dout3 => centenas_i1,
		signo => signo_i1
);

convertidor_14: Conv_14 port map(

		din14 => multiplicacion_i,
		dout1 => unidades_i2,
		dout2 => decenas_i2,
		dout3 => centenas_i2,
		dout4 => millares_i2,
		overflow => overflow,
		signo => signo_i2
 
);

reg_41: reg_4 port map(

		si => unidades_i1,
		--en => enable,
		clk => clk,
		clr_n => reset_n,
		po => reg_41_i
);

reg_42: reg_4 port map(

		si => decenas_i1,
		--en => enable,
		clk => clk,
		clr_n => reset_n,
		po => reg_42_i
);

reg_43: reg_4 port map(

		si => centenas_i1,
		--en => enable,
		clk => clk,
		clr_n => reset_n,
		po => reg_43_i
);

reg_44: reg_4 port map(

		si => unidades_i2,
		--en => enable,
		clk => clk,
		clr_n => reset_n,
		po => reg_44_i
);

reg_45: reg_4 port map(

		si => decenas_i2,
		--en => enable,
		clk => clk,
		clr_n => reset_n,
		po => reg_45_i
);

reg_46: reg_4 port map(

		si => centenas_i2,
		--en => enable,
		clk => clk,
		clr_n => reset_n,
		po => reg_46_i
);

reg_47: reg_4 port map(

		si => millares_i2,
		--en => enable,
		clk => clk,
		clr_n => reset_n,
		po => reg_47_i
);

multiplexor: Mux port map(

		a => reg_41_i,
		b => reg_42_i,
		c => reg_43_i,
		d => reg_44_i,
		e => reg_45_i,
		f => reg_46_i,
		g => reg_47_i,
		h => reg_48_i,
		s => mux_ctr,
		dig_ctr => digits,
		y => current_data

);

decodificador: BCD7 port map(

		code => current_data,
      led => segments

);
end Behavioral;

