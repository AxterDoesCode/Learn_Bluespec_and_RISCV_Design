/*
 * Generated by Bluespec Compiler, version 2024.07 (build b4f31db)
 * 
 * On Tue Dec 31 19:53:04 GMT 2024
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkTop.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkTop::MODEL_mkTop()
{
  mkTop_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkTop()
{
  MODEL_mkTop *model = new MODEL_mkTop();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkTop &INST_top = *((MOD_mkTop *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_NOT_start_reg_1_1_OR_fired_2_AND_NOT_start_reg_ETC___d26;
	 tUInt8 DEF_INST_top_DEF_NOT_start_reg_1_1_OR_fired___d22;
	 tUInt8 DEF_INST_top_DEF_start_reg__h934;
	 tUInt8 DEF_INST_top_DEF_running__h1019;
	 tUInt8 DEF_INST_top_DEF_fired__h594;
	 tUInt8 DEF_INST_top_DEF_start_reg_1__h592;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_fired__dreg_update;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_fired__dreg_update;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_restart;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_restart;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c10;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_action_l22c10;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_fsm_start;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_auto_start;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_auto_start;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_auto_finish;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_auto_finish;
	 DEF_INST_top_DEF_start_reg_1__h592 = INST_top.INST_start_reg_1.METH_read();
	 DEF_INST_top_DEF_fired__h594 = INST_top.INST_fired.METH_read();
	 DEF_INST_top_DEF_running__h1019 = INST_top.INST_running.METH_read();
	 DEF_INST_top_DEF_start_reg__h934 = INST_top.INST_start_reg.METH_read();
	 DEF_INST_top_DEF_NOT_start_reg_1_1_OR_fired___d22 = !DEF_INST_top_DEF_start_reg_1__h592 || DEF_INST_top_DEF_fired__h594;
	 DEF_INST_top_DEF_NOT_start_reg_1_1_OR_fired_2_AND_NOT_start_reg_ETC___d26 = DEF_INST_top_DEF_NOT_start_reg_1_1_OR_fired___d22 && !DEF_INST_top_DEF_start_reg__h934;
	 DEF_INST_top_DEF_CAN_FIRE_RL_auto_finish = DEF_INST_top_DEF_running__h1019 && DEF_INST_top_DEF_NOT_start_reg_1_1_OR_fired_2_AND_NOT_start_reg_ETC___d26;
	 DEF_INST_top_DEF_WILL_FIRE_RL_auto_finish = DEF_INST_top_DEF_CAN_FIRE_RL_auto_finish;
	 DEF_INST_top_DEF_CAN_FIRE_RL_auto_start = DEF_INST_top_DEF_NOT_start_reg_1_1_OR_fired_2_AND_NOT_start_reg_ETC___d26 && !DEF_INST_top_DEF_running__h1019;
	 DEF_INST_top_DEF_WILL_FIRE_RL_auto_start = DEF_INST_top_DEF_CAN_FIRE_RL_auto_start;
	 DEF_INST_top_DEF_CAN_FIRE_RL_fired__dreg_update = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_fired__dreg_update = DEF_INST_top_DEF_CAN_FIRE_RL_fired__dreg_update;
	 DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start = DEF_INST_top_DEF_NOT_start_reg_1_1_OR_fired___d22 && DEF_INST_top_DEF_start_reg__h934;
	 DEF_INST_top_DEF_WILL_FIRE_RL_fsm_start = DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start;
	 DEF_INST_top_DEF_CAN_FIRE_RL_start_reg__dreg_update = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_start_reg__dreg_update = DEF_INST_top_DEF_CAN_FIRE_RL_start_reg__dreg_update;
	 DEF_INST_top_DEF_CAN_FIRE_RL_restart = (DEF_INST_top_DEF_start_reg_1__h592 && !DEF_INST_top_DEF_fired__h594) && (!INST_top.INST_abort.METH_whas() || !INST_top.INST_abort.METH_wget());
	 DEF_INST_top_DEF_WILL_FIRE_RL_restart = DEF_INST_top_DEF_CAN_FIRE_RL_restart;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_auto_start)
	   INST_top.RL_auto_start();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_fsm_start)
	   INST_top.RL_fsm_start();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_restart)
	   INST_top.RL_restart();
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c10 = INST_top.INST_start_wire.METH_whas() && INST_top.INST_start_wire.METH_wget();
	 DEF_INST_top_DEF_WILL_FIRE_RL_action_l22c10 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c10;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_action_l22c10)
	   INST_top.RL_action_l22c10();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_auto_finish)
	   INST_top.RL_auto_finish();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_fired__dreg_update)
	   INST_top.RL_fired__dreg_update();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_start_reg__dreg_update)
	   INST_top.RL_start_reg__dreg_update();
	 INST_top.INST_fired_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_abort.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_start_reg_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_start_wire.clk((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_start_reg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_start_reg_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_fired.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_running.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkTop::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkTop_instance = new MOD_mkTop(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mkTop_instance->INST_start_wire.set_clk_0)("CLK");
  (mkTop_instance->INST_start_reg_2.set_clk_0)("CLK");
  (mkTop_instance->INST_abort.set_clk_0)("CLK");
  (mkTop_instance->INST_fired_1.set_clk_0)("CLK");
  (mkTop_instance->set_clk_0)("CLK");
}
void MODEL_mkTop::destroy_model()
{
  delete mkTop_instance;
  mkTop_instance = NULL;
}
void MODEL_mkTop::reset_model(bool asserted)
{
  (mkTop_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkTop::get_instance()
{
  return mkTop_instance;
}

/* Fill in version numbers */
void MODEL_mkTop::get_version(char const **name, char const **build)
{
  *name = "2024.07";
  *build = "b4f31db";
}

/* Get the model creation time */
time_t MODEL_mkTop::get_creation_time()
{
  
  /* Tue Dec 31 19:53:04 UTC 2024 */
  return 1735674784llu;
}

/* State dumping function */
void MODEL_mkTop::dump_state()
{
  (mkTop_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkTop & mkTop_backing(tSimStateHdl simHdl)
{
  static MOD_mkTop *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkTop(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkTop::dump_VCD_defs()
{
  (mkTop_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkTop::dump_VCD(tVCDDumpType dt)
{
  (mkTop_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkTop_backing(sim_hdl));
}
