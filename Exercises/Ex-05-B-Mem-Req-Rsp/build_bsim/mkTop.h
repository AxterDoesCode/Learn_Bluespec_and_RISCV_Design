/*
 * Generated by Bluespec Compiler, version 2024.07 (build b4f31db)
 * 
 * On Fri Jan  3 21:31:10 GMT 2025
 * 
 */

/* Generation options: */
#ifndef __mkTop_h__
#define __mkTop_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkTop module */
class MOD_mkTop : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_Wire<tUInt8> INST_abort;
  MOD_Fifo<tUWide> INST_f_reqs;
  MOD_Fifo<tUWide> INST_f_rsps;
  MOD_Reg<tUInt64> INST_mems_devices_rg_MTIME;
  MOD_Reg<tUInt32> INST_mems_devices_rg_logfile;
  MOD_Reg<tUInt8> INST_mems_devices_rg_running;
  MOD_CReg<tUWide> INST_mems_devices_spec_sto_buf_f_req_to_mem_rv;
  MOD_CReg<tUWide> INST_mems_devices_spec_sto_buf_f_rsp_from_mem_rv;
  MOD_Reg<tUInt64> INST_mems_devices_spec_sto_buf_rg_addr_base_mem;
  MOD_Reg<tUInt8> INST_mems_devices_spec_sto_buf_rg_free_ix;
  MOD_Reg<tUInt8> INST_mems_devices_spec_sto_buf_rg_fsm_state;
  MOD_Reg<tUInt32> INST_mems_devices_spec_sto_buf_rg_logfile;
  MOD_Reg<tUInt64> INST_mems_devices_spec_sto_buf_rg_size_B_mem;
  MOD_Reg<tUWide> INST_mems_devices_spec_sto_buf_vrg_sb_0;
  MOD_Reg<tUWide> INST_mems_devices_spec_sto_buf_vrg_sb_1;
  MOD_Reg<tUWide> INST_mems_devices_spec_sto_buf_vrg_sb_2;
  MOD_Reg<tUWide> INST_mems_devices_spec_sto_buf_vrg_sb_3;
  MOD_Reg<tUInt8> INST_running;
  MOD_Reg<tUInt8> INST_start_reg;
  MOD_Reg<tUInt8> INST_start_reg_1;
  MOD_Wire<tUInt8> INST_start_reg_2;
  MOD_Wire<tUInt8> INST_start_wire;
  MOD_Reg<tUInt8> INST_state_can_overlap;
  MOD_Reg<tUInt8> INST_state_fired;
  MOD_Wire<tUInt8> INST_state_fired_1;
  MOD_ConfigReg<tUInt8> INST_state_mkFSMstate;
  MOD_Wire<tUInt8> INST_state_overlap_pw;
  MOD_Wire<tUInt8> INST_state_set_pw;
 
 /* Constructor */
 public:
  MOD_mkTop(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_RL_action_l115c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l114c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l113c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l112c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l111c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l110c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l109c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l108c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l107c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l106c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l105c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l104c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l103c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l102c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l101c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l100c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l99c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l98c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l97c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l96c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l95c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l94c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l93c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l92c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l91c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l90c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l89c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l88c11;
  tUInt8 DEF_WILL_FIRE_RL_action_l82c10;
  tUWide DEF_mems_devices_spec_sto_buf_f_rsp_from_mem_rv_po_ETC___d11;
  tUWide DEF_mems_devices_spec_sto_buf_f_rsp_from_mem_rv_po_ETC___d1;
  tUWide DEF_mems_devices_spec_sto_buf_f_req_to_mem_rv_port_ETC___d9;
 
 /* Local definitions */
 private:
  tUWide DEF_TASK_c_mems_devices_req_rsp___d147;
  tUWide DEF_TASK_c_mems_devices_req_rsp___d26;
  tUInt32 DEF_v__h6972;
  tUInt32 DEF_v__h4186;
  tUWide DEF_f_rsps_first____d308;
  tUWide DEF_f_reqs_first____d138;
  tUInt32 DEF_mems_devices_rg_logfile___d34;
  tUWide DEF_mems_devices_spec_sto_buf_f_req_to_mem_rv_port_ETC___d31;
  tUWide DEF_f_reqs_first__38_BITS_127_TO_0___d151;
  tUWide DEF_mems_devices_spec_sto_buf_f_req_to_mem_rv_port_ETC___d30;
  tUWide DEF_f_reqs_first__38_BITS_262_TO_192___d150;
  tUInt64 DEF_f_rsps_first__08_BITS_262_TO_199___d376;
  tUInt64 DEF_f_rsps_first__08_BITS_191_TO_128___d366;
  tUInt64 DEF_f_rsps_first__08_BITS_127_TO_64___d309;
  tUInt32 DEF_f_rsps_first__08_BITS_63_TO_32___d310;
  tUInt32 DEF_f_rsps_first__08_BITS_31_TO_0___d311;
  tUInt8 DEF_mrt__h53030;
  tUInt8 DEF_f_rsps_first__08_BITS_264_TO_263___d367;
  tUInt8 DEF_f_rsps_first__08_BITS_193_TO_192___d357;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b11111___d314;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b11110___d313;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b11101___d315;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b11100___d327;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b11001___d316;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b11000___d326;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b10100___d325;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b10000___d324;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b1100___d322;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b1000___d323;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b100___d321;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b11___d318;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b10___d317;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b1___d319;
  tUInt8 DEF_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b0___d320;
  tUInt8 DEF_f_rsps_first__08_BITS_264_TO_263_67_EQ_2___d370;
  tUInt8 DEF_f_rsps_first__08_BITS_264_TO_263_67_EQ_1___d369;
  tUInt8 DEF_f_rsps_first__08_BITS_264_TO_263_67_EQ_0___d368;
  tUInt8 DEF_f_rsps_first__08_BITS_193_TO_192_57_EQ_2___d360;
  tUInt8 DEF_f_rsps_first__08_BITS_193_TO_192_57_EQ_1___d359;
  tUInt8 DEF_f_rsps_first__08_BITS_193_TO_192_57_EQ_0___d358;
  tUInt8 DEF_NOT_f_rsps_first__08_BITS_264_TO_263_67_EQ_0_6_ETC___d375;
  tUInt8 DEF_NOT_f_rsps_first__08_BITS_193_TO_192_57_EQ_0_5_ETC___d365;
  tUInt8 DEF_NOT_f_rsps_first__08_BITS_198_TO_194_12_EQ_0b1_ETC___d356;
  tUInt8 DEF_NOT_mems_devices_rg_logfile_4_EQ_0_5___d36;
  tUWide DEF__1_CONCAT_TASK_c_mems_devices_req_rsp_6_BITS_1__ETC___d33;
  tUWide DEF_TASK_c_mems_devices_req_rsp_6_BITS_1_TO_0_7_CO_ETC___d29;
  tUWide DEF_mems_devices_spec_sto_buf_f_req_to_mem_rv_port_ETC___d32;
  tUWide DEF__0_CONCAT_DONTCARE___d6;
  tUWide DEF_TASK_c_mems_devices_req_rsp_47_BITS_1_TO_0_48__ETC___d152;
  tUWide DEF__0_CONCAT_DONTCARE___d17;
  tUWide DEF__3343033386729034780185020741965730982920767944_ETC___d416;
  tUWide DEF__3343033386729034780185020741965730982920530259_ETC___d389;
  tUWide DEF__3343033386729034780185020741965730982920292575_ETC___d300;
  tUWide DEF__3343033386729034780185020741965730982919737978_ETC___d296;
  tUWide DEF__3343033386729034780185020741965730982919658749_ETC___d423;
  tUWide DEF__3343033386729034780185020741965730982918628783_ETC___d397;
  tUWide DEF__3343033386729034780185020741965730982917440361_ETC___d292;
  tUWide DEF__3343033386729034780185020741965730982914350462_ETC___d427;
  tUWide DEF__3343033386729034780185020741965730982914271234_ETC___d393;
  tUWide DEF__3343033386729034780185020741965730982912765899_ETC___d443;
  tUWide DEF__3343033386729034780185020741965730982912528215_ETC___d447;
  tUWide DEF_wdata__h3871;
  tUWide DEF_wdata__h6788;
 
 /* Rules */
 public:
  void RL_mems_devices_spec_sto_buf_rl_mem_wr_rsp();
  void RL_mems_devices_rl_count_MTIME();
  void RL_mems_devices_rl_DMem_req_rsp();
  void RL_mems_devices_rl_Dbg_req_rsp();
  void RL_start_reg__dreg_update();
  void RL_state_handle_abort();
  void RL_state_fired__dreg_update();
  void RL_state_every();
  void RL_restart();
  void RL_action_l82c10();
  void RL_action_l88c11();
  void RL_action_l89c11();
  void RL_action_l90c11();
  void RL_action_l91c11();
  void RL_action_l92c11();
  void RL_action_l93c11();
  void RL_action_l94c11();
  void RL_action_l95c11();
  void RL_action_l96c11();
  void RL_action_l97c11();
  void RL_action_l98c11();
  void RL_action_l99c11();
  void RL_action_l100c11();
  void RL_action_l101c11();
  void RL_action_l102c11();
  void RL_action_l103c11();
  void RL_action_l104c11();
  void RL_action_l105c11();
  void RL_action_l106c11();
  void RL_action_l107c11();
  void RL_action_l108c11();
  void RL_action_l109c11();
  void RL_action_l110c11();
  void RL_action_l111c11();
  void RL_action_l112c11();
  void RL_action_l113c11();
  void RL_action_l114c11();
  void RL_action_l115c11();
  void RL_idle_l81c7();
  void RL_fsm_start();
  void RL_auto_start();
  void RL_auto_finish();
  void __me_check_9();
  void __me_check_10();
  void __me_check_11();
  void __me_check_12();
  void __me_check_13();
  void __me_check_14();
  void __me_check_15();
  void __me_check_16();
  void __me_check_17();
  void __me_check_18();
  void __me_check_19();
  void __me_check_20();
  void __me_check_21();
  void __me_check_22();
  void __me_check_23();
  void __me_check_24();
  void __me_check_25();
  void __me_check_26();
  void __me_check_27();
  void __me_check_28();
  void __me_check_29();
  void __me_check_30();
  void __me_check_31();
  void __me_check_32();
  void __me_check_33();
  void __me_check_34();
  void __me_check_35();
  void __me_check_36();
 
 /* Methods */
 public:
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTop &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkTop &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkTop &backing);
};

#endif /* ifndef __mkTop_h__ */
