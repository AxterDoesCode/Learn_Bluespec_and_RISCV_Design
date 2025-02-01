/*
 * Generated by Bluespec Compiler, version 2024.07 (build b4f31db)
 * 
 * On Tue Dec 31 19:53:04 GMT 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkTop.h"


/* Literal declarations */
static unsigned int const UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_arr[] = { 2863311530u,
															  2863311530u,
															  2863311530u,
															  2863311530u,
															  0u,
															  0u,
															  2147483648u,
															  0u,
															  122u };
static tUWide const UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa(263u,
													  UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_arr);


/* String declarations */
static std::string const __str_literal_14("\n", 1u);
static std::string const __str_literal_17(" ", 1u);
static std::string const __str_literal_15("    Mem_Req {I_%0d pc:%08h instr:%08h ", 38u);
static std::string const __str_literal_19(" addr:%08h", 10u);
static std::string const __str_literal_13(" }", 2u);
static std::string const __str_literal_4("'h%h", 4u);
static std::string const __str_literal_5(", ", 2u);
static std::string const __str_literal_18("4B", 2u);
static std::string const __str_literal_16("LOAD", 4u);
static std::string const __str_literal_7("MEM_4B", 6u);
static std::string const __str_literal_2("Mem_Req { ", 10u);
static std::string const __str_literal_22("STORE", 5u);
static std::string const __str_literal_8("addr: ", 6u);
static std::string const __str_literal_9("data: ", 6u);
static std::string const __str_literal_12("instr: ", 7u);
static std::string const __str_literal_10("inum: ", 6u);
static std::string const __str_literal_1("mem_req =  ", 11u);
static std::string const __str_literal_21("mem_req.req_type =  ", 20u);
static std::string const __str_literal_11("pc: ", 4u);
static std::string const __str_literal_3("req_type: ", 10u);
static std::string const __str_literal_6("size: ", 6u);
static std::string const __str_literal_20("}", 1u);


/* Constructor */
MOD_mkTop::MOD_mkTop(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_abort(simHdl, "abort", this, 1u, (tUInt8)0u),
    INST_fired(simHdl, "fired", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_fired_1(simHdl, "fired_1", this, 1u, (tUInt8)0u),
    INST_running(simHdl, "running", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_start_reg(simHdl, "start_reg", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_start_reg_1(simHdl, "start_reg_1", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_start_reg_2(simHdl, "start_reg_2", this, 1u, (tUInt8)0u),
    INST_start_wire(simHdl, "start_wire", this, 1u, (tUInt8)0u),
    PORT_RST_N((tUInt8)1u),
    DEF__41514448764394106623788834275472493772800_CONC_ETC___d20(263u)
{
  symbol_count = 15u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkTop::init_symbols_0()
{
  init_symbol(&symbols[0u], "abort", SYM_MODULE, &INST_abort);
  init_symbol(&symbols[1u], "fired", SYM_MODULE, &INST_fired);
  init_symbol(&symbols[2u], "fired_1", SYM_MODULE, &INST_fired_1);
  init_symbol(&symbols[3u], "RL_action_l22c10", SYM_RULE);
  init_symbol(&symbols[4u], "RL_auto_finish", SYM_RULE);
  init_symbol(&symbols[5u], "RL_auto_start", SYM_RULE);
  init_symbol(&symbols[6u], "RL_fired__dreg_update", SYM_RULE);
  init_symbol(&symbols[7u], "RL_fsm_start", SYM_RULE);
  init_symbol(&symbols[8u], "RL_restart", SYM_RULE);
  init_symbol(&symbols[9u], "RL_start_reg__dreg_update", SYM_RULE);
  init_symbol(&symbols[10u], "running", SYM_MODULE, &INST_running);
  init_symbol(&symbols[11u], "start_reg", SYM_MODULE, &INST_start_reg);
  init_symbol(&symbols[12u], "start_reg_1", SYM_MODULE, &INST_start_reg_1);
  init_symbol(&symbols[13u], "start_reg_2", SYM_MODULE, &INST_start_reg_2);
  init_symbol(&symbols[14u], "start_wire", SYM_MODULE, &INST_start_wire);
}


/* Rule actions */

void MOD_mkTop::RL_start_reg__dreg_update()
{
  tUInt8 DEF_start_reg_2_whas_AND_start_reg_2_wget___d3;
  DEF_start_reg_2_whas_AND_start_reg_2_wget___d3 = INST_start_reg_2.METH_whas() && INST_start_reg_2.METH_wget();
  INST_start_reg_1.METH_write(DEF_start_reg_2_whas_AND_start_reg_2_wget___d3);
}

void MOD_mkTop::RL_fired__dreg_update()
{
  tUInt8 DEF_fired_1_whas_AND_fired_1_wget___d6;
  DEF_fired_1_whas_AND_fired_1_wget___d6 = INST_fired_1.METH_whas() && INST_fired_1.METH_wget();
  INST_fired.METH_write(DEF_fired_1_whas_AND_fired_1_wget___d6);
}

void MOD_mkTop::RL_restart()
{
  INST_start_wire.METH_wset((tUInt8)1u);
  INST_start_reg_2.METH_wset((tUInt8)1u);
}

void MOD_mkTop::RL_action_l22c10()
{
  DEF__41514448764394106623788834275472493772800_CONC_ETC___d20.set_bits_in_word(UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.get_bits_in_word8(8u,
																							 0u,
																							 7u),
										 8u,
										 0u,
										 7u).set_whole_word(UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.get_whole_word(7u),
												    7u).set_whole_word(UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.get_whole_word(6u),
														       6u).set_whole_word(UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.get_whole_word(5u),
																	  5u).set_whole_word(UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.get_whole_word(4u),
																			     4u).set_whole_word(UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.get_whole_word(3u),
																						3u).set_whole_word(UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.get_whole_word(2u),
																								   2u).set_whole_word(UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.get_whole_word(1u),
																										      1u).set_whole_word(UWide_literal_263_h7a00000000800000000000000000000000aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.get_whole_word(0u),
																													 0u);
  INST_fired_1.METH_wset((tUInt8)1u);
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    dollar_write(sim_hdl, this, "s", &__str_literal_1);
    dollar_write(sim_hdl, this, "s,s", &__str_literal_2, &__str_literal_3);
    dollar_write(sim_hdl, this, "s,5", &__str_literal_4, (tUInt8)30u);
    dollar_write(sim_hdl, this, "s,s", &__str_literal_5, &__str_literal_6);
    dollar_write(sim_hdl, this, "s", &__str_literal_7);
    dollar_write(sim_hdl, this, "s,s", &__str_literal_5, &__str_literal_8);
    dollar_write(sim_hdl, this, "s,64", &__str_literal_4, 2147483648llu);
    dollar_write(sim_hdl, this, "s,s", &__str_literal_5, &__str_literal_9);
    dollar_write(sim_hdl, this, "s,64", &__str_literal_4, 0llu);
    dollar_write(sim_hdl, this, "s,s", &__str_literal_5, &__str_literal_10);
    dollar_write(sim_hdl, this, "s,64", &__str_literal_4, 12297829382473034410llu);
    dollar_write(sim_hdl, this, "s,s", &__str_literal_5, &__str_literal_11);
    dollar_write(sim_hdl, this, "s,32", &__str_literal_4, 2863311530u);
    dollar_write(sim_hdl, this, "s,s", &__str_literal_5, &__str_literal_12);
    dollar_write(sim_hdl, this, "s,32,s", &__str_literal_4, 2863311530u, &__str_literal_13);
    dollar_write(sim_hdl, this, "s", &__str_literal_14);
    dollar_display(sim_hdl,
		   this,
		   "s,263p",
		   &__str_literal_1,
		   &DEF__41514448764394106623788834275472493772800_CONC_ETC___d20);
    dollar_write(sim_hdl, this, "s", &__str_literal_1);
    dollar_write(sim_hdl,
		 this,
		 "s,64,32,32,s",
		 &__str_literal_15,
		 12297829382473034410llu,
		 2863311530u,
		 2863311530u,
		 &__str_literal_16);
    dollar_write(sim_hdl, this, "s", &__str_literal_17);
    dollar_write(sim_hdl, this, "s", &__str_literal_18);
    dollar_write(sim_hdl, this, "s,64", &__str_literal_19, 2147483648llu);
    dollar_write(sim_hdl, this, "s", &__str_literal_20);
    dollar_write(sim_hdl, this, "s", &__str_literal_14);
    dollar_write(sim_hdl, this, "s", &__str_literal_21);
    dollar_write(sim_hdl, this, "s", &__str_literal_16);
    dollar_write(sim_hdl, this, "s", &__str_literal_14);
    dollar_write(sim_hdl, this, "s", &__str_literal_21);
    dollar_write(sim_hdl, this, "s", &__str_literal_22);
    dollar_write(sim_hdl, this, "s", &__str_literal_14);
  }
}

void MOD_mkTop::RL_fsm_start()
{
  INST_start_wire.METH_wset((tUInt8)1u);
  INST_start_reg_2.METH_wset((tUInt8)1u);
  INST_start_reg.METH_write((tUInt8)0u);
}

void MOD_mkTop::RL_auto_start()
{
  INST_start_reg.METH_write((tUInt8)1u);
  INST_running.METH_write((tUInt8)1u);
}

void MOD_mkTop::RL_auto_finish()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_finish(sim_hdl, "32", 0u);
}


/* Methods */


/* Reset routines */

void MOD_mkTop::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_start_reg_1.reset_RST(ARG_rst_in);
  INST_start_reg.reset_RST(ARG_rst_in);
  INST_running.reset_RST(ARG_rst_in);
  INST_fired.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkTop::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkTop::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_abort.dump_state(indent + 2u);
  INST_fired.dump_state(indent + 2u);
  INST_fired_1.dump_state(indent + 2u);
  INST_running.dump_state(indent + 2u);
  INST_start_reg.dump_state(indent + 2u);
  INST_start_reg_1.dump_state(indent + 2u);
  INST_start_reg_2.dump_state(indent + 2u);
  INST_start_wire.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkTop::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 10u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "_41514448764394106623788834275472493772800_CONC_ETC___d20", 263u);
  num = INST_abort.dump_VCD_defs(num);
  num = INST_fired.dump_VCD_defs(num);
  num = INST_fired_1.dump_VCD_defs(num);
  num = INST_running.dump_VCD_defs(num);
  num = INST_start_reg.dump_VCD_defs(num);
  num = INST_start_reg_1.dump_VCD_defs(num);
  num = INST_start_reg_2.dump_VCD_defs(num);
  num = INST_start_wire.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkTop::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTop &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkTop::vcd_defs(tVCDDumpType dt, MOD_mkTop &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 263u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF__41514448764394106623788834275472493772800_CONC_ETC___d20) != DEF__41514448764394106623788834275472493772800_CONC_ETC___d20)
      {
	vcd_write_val(sim_hdl, num, DEF__41514448764394106623788834275472493772800_CONC_ETC___d20, 263u);
	backing.DEF__41514448764394106623788834275472493772800_CONC_ETC___d20 = DEF__41514448764394106623788834275472493772800_CONC_ETC___d20;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF__41514448764394106623788834275472493772800_CONC_ETC___d20, 263u);
      backing.DEF__41514448764394106623788834275472493772800_CONC_ETC___d20 = DEF__41514448764394106623788834275472493772800_CONC_ETC___d20;
    }
}

void MOD_mkTop::vcd_prims(tVCDDumpType dt, MOD_mkTop &backing)
{
  INST_abort.dump_VCD(dt, backing.INST_abort);
  INST_fired.dump_VCD(dt, backing.INST_fired);
  INST_fired_1.dump_VCD(dt, backing.INST_fired_1);
  INST_running.dump_VCD(dt, backing.INST_running);
  INST_start_reg.dump_VCD(dt, backing.INST_start_reg);
  INST_start_reg_1.dump_VCD(dt, backing.INST_start_reg_1);
  INST_start_reg_2.dump_VCD(dt, backing.INST_start_reg_2);
  INST_start_wire.dump_VCD(dt, backing.INST_start_wire);
}
