
-- VHDL Instantiation Created from source file Datapath.vhd -- 10:17:47 01/08/2015
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Datapath
	PORT(
		reset_n : IN std_logic;
		clk : IN std_logic;
		din : IN std_logic_vector(7 downto 0);
		dig_ctr : IN std_logic_vector(2 downto 0);          
		segments : OUT std_logic_vector(6 downto 0);
		digits : OUT std_logic_vector(3 downto 0);
		signo : OUT std_logic;
		overflow : OUT std_logic
		);
	END COMPONENT;

	Inst_Datapath: Datapath PORT MAP(
		reset_n => ,
		clk => ,
		din => ,
		dig_ctr => ,
		segments => ,
		digits => ,
		signo => ,
		overflow => 
	);


