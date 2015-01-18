
-- VHDL Instantiation Created from source file FSM.vhd -- 10:20:06 01/08/2015
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT FSM
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		enter : IN std_logic;          
		mux_ctr : OUT std_logic_vector(2 downto 0);
		dig_ctr : OUT std_logic_vector(3 downto 0);
		estado : OUT std_logic
		);
	END COMPONENT;

	Inst_FSM: FSM PORT MAP(
		clk => ,
		reset => ,
		enter => ,
		mux_ctr => ,
		dig_ctr => ,
		estado => 
	);


