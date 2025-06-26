// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VmkTop.h for the primary calling header

#ifndef VERILATED_VMKTOP___024ROOT_H_
#define VERILATED_VMKTOP___024ROOT_H_  // guard

#include "verilated.h"
class VmkTop___024unit;


class VmkTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VmkTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VmkTop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        CData/*0:0*/ top__DOT__WILL_FIRE_RL_action_l96c16;
        CData/*0:0*/ top__DOT__WILL_FIRE_RL_action_l97c15;
        CData/*0:0*/ top__DOT__WILL_FIRE_RL_action_l98c16;
        CData/*0:0*/ top__DOT__WILL_FIRE_RL_action_l99c15;
        CData/*0:0*/ top__DOT__WILL_FIRE_RL_idle_l89c7;
        VL_IN8(RST_N,0,0);
        CData/*0:0*/ top__DOT__mems_devices_rg_logfile__024EN;
        CData/*0:0*/ top__DOT__mems_devices_rg_running;
        CData/*2:0*/ top__DOT__mems_devices_spec_sto_buf_rg_free_ix;
        CData/*0:0*/ top__DOT__mems_devices_spec_sto_buf_rg_fsm_state;
        CData/*0:0*/ top__DOT__rg_F_to_D__024EN;
        CData/*0:0*/ top__DOT__running;
        CData/*0:0*/ top__DOT__running__024EN;
        CData/*0:0*/ top__DOT__start_reg;
        CData/*0:0*/ top__DOT__start_reg_1;
        CData/*0:0*/ top__DOT__start_reg_1__024D_IN;
        CData/*0:0*/ top__DOT__state_can_overlap;
        CData/*0:0*/ top__DOT__state_can_overlap__024D_IN;
        CData/*0:0*/ top__DOT__state_fired;
        CData/*0:0*/ top__DOT__state_fired__024D_IN;
        CData/*2:0*/ top__DOT__state_mkFSMstate;
        CData/*2:0*/ top__DOT__state_mkFSMstate__024D_IN;
        CData/*0:0*/ top__DOT__state_mkFSMstate__024EN;
        CData/*0:0*/ top__DOT__f_reqs__024DEQ;
        CData/*0:0*/ top__DOT__f_rsps__024DEQ;
        CData/*0:0*/ top__DOT__CAN_FIRE_RL_fsm_start;
        CData/*0:0*/ top__DOT__CAN_FIRE_RL_mems_devices_spec_sto_buf_rl_mem_wr_rsp;
        CData/*0:0*/ top__DOT__WILL_FIRE_RL_mems_devices_rl_DMem_req_rsp;
        CData/*3:0*/ top__DOT__x1_avValue_cause___05Fh20385;
        CData/*0:0*/ top__DOT__IF_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_ETC___05F_d701;
        CData/*0:0*/ top__DOT__IF_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_ETC___05F_d710;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d509;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d531;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d556;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d583;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d591;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d658;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d680;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d773;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_264_TO_263_57_EQ_1_5_ETC___05F_d781;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_264_TO_263_57_EQ_1_5_ETC___05F_d792;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_264_TO_263_57_EQ_1_5_ETC___05F_d798;
        CData/*0:0*/ top__DOT__NOT_f_rsps_first___05F98_BITS_264_TO_263_57_EQ_1_5_ETC___05F_d806;
        CData/*0:0*/ top__DOT__abort_whas___05F53_AND_abort_wget___05F54_55_OR_state___05FETC___05F_d854;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b10011_ETC___05F_d427;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d479;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d601;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d606;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d671;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d689;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d785;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11001_ETC___05F_d449;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11011_ETC___05F_d619;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11100_ETC___05F_d472;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_08_ETC___05F_d476;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_08_ETC___05F_d598;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_08_ETC___05F_d623;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_08_ETC___05F_d630;
        CData/*0:0*/ top__DOT__f_rsps_first___05F98_BITS_264_TO_263_57_EQ_1_59_OR_ETC___05F_d649;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_0_3;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_7;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_13;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_31;
    };
    struct {
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_33;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_34;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_37;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_38;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_44;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_47;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_48;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_49;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_50;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_51;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_64;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_69;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_76;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_77;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_78;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_81;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_83;
        CData/*0:0*/ top__DOT____VdfgRegularize_hc2bb3892_2_84;
        CData/*0:0*/ top__DOT__f_reqs__DOT__full_reg;
        CData/*0:0*/ top__DOT__f_reqs__DOT__empty_reg;
        CData/*0:0*/ top__DOT__f_reqs__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ top__DOT__f_reqs__DOT__error_checks__DOT__enqerror;
        CData/*0:0*/ top__DOT__f_rsps__DOT__full_reg;
        CData/*0:0*/ top__DOT__f_rsps__DOT__empty_reg;
        CData/*0:0*/ top__DOT__f_rsps__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ top__DOT__f_rsps__DOT__error_checks__DOT__enqerror;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__mems_devices_rg_logfile;
        VlWide<9>/*263:0*/ top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv;
        VlWide<9>/*263:0*/ top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv__024D_IN;
        VlWide<9>/*265:0*/ top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv;
        VlWide<9>/*265:0*/ top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN;
        IData/*31:0*/ top__DOT__mems_devices_spec_sto_buf_rg_logfile;
        VlWide<9>/*262:0*/ top__DOT__mems_devices_spec_sto_buf_vrg_sb_0;
        VlWide<9>/*262:0*/ top__DOT__mems_devices_spec_sto_buf_vrg_sb_1;
        VlWide<9>/*262:0*/ top__DOT__mems_devices_spec_sto_buf_vrg_sb_2;
        VlWide<9>/*262:0*/ top__DOT__mems_devices_spec_sto_buf_vrg_sb_3;
        VlWide<5>/*130:0*/ top__DOT__rg_F_to_D;
        VlWide<9>/*264:0*/ top__DOT__f_rsps__024D_IN;
        IData/*31:0*/ top__DOT__v___05Fh18954;
        IData/*31:0*/ top__DOT__v___05Fh22751;
        VlWide<3>/*95:0*/ top__DOT__TASK_c_mems_devices_req_rsp___05F_d147;
        IData/*31:0*/ top__DOT__v___05Fh6999;
        VlWide<3>/*95:0*/ top__DOT__TASK_c_mems_devices_req_rsp___05F_d26;
        IData/*31:0*/ top__DOT__v___05Fh4213;
        IData/*31:0*/ top__DOT__v___05Fh4207;
        IData/*31:0*/ top__DOT__v___05Fh6993;
        IData/*31:0*/ top__DOT__v___05Fh18948;
        IData/*31:0*/ top__DOT__v___05Fh22745;
        IData/*31:0*/ top__DOT__x1_avValue_imm___05Fh20394;
        IData/*31:0*/ top__DOT__x1_avValue_tval___05Fh20386;
        IData/*31:0*/ top__DOT__SEXT_f_rsps_first___05F98_BITS_230_TO_219_51___05F_d735;
        VlWide<9>/*262:0*/ top__DOT__f_reqs__DOT__data0_reg;
        VlWide<9>/*262:0*/ top__DOT__f_reqs__DOT__data1_reg;
        VlWide<9>/*264:0*/ top__DOT__f_rsps__DOT__data0_reg;
        VlWide<9>/*264:0*/ top__DOT__f_rsps__DOT__data1_reg;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top__DOT__mems_devices_rg_MTIME;
        QData/*63:0*/ top__DOT__mems_devices_rg_MTIME__024D_IN;
        QData/*63:0*/ top__DOT__mems_devices_spec_sto_buf_rg_addr_base_mem;
        QData/*63:0*/ top__DOT__mems_devices_spec_sto_buf_rg_size_B_mem;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VmkTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VmkTop___024root(VmkTop__Syms* symsp, const char* v__name);
    ~VmkTop___024root();
    VL_UNCOPYABLE(VmkTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
