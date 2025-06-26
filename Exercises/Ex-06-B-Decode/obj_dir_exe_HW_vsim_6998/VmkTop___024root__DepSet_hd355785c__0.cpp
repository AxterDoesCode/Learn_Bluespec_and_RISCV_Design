// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTop.h for the primary calling header

#include "VmkTop__pch.h"
#include "VmkTop___024root.h"

void VmkTop___024root___eval_act(VmkTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___eval_act\n"); );
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VmkTop___024root___nba_sequent__TOP__0(VmkTop___024root* vlSelf);
void VmkTop___024root___nba_sequent__TOP__1(VmkTop___024root* vlSelf);
void VmkTop___024root___nba_comb__TOP__0(VmkTop___024root* vlSelf);

void VmkTop___024root___eval_nba(VmkTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___eval_nba\n"); );
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VmkTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VmkTop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VmkTop___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlWide<9>/*287:0*/ VmkTop__ConstPool__CONST_h30a359f8_0;

VL_INLINE_OPT void VmkTop___024root___nba_comb__TOP__0(VmkTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___nba_comb__TOP__0\n"); );
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__f_rsps__024D_IN[0U] = vlSelfRef.top__DOT__f_reqs__DOT__data0_reg[0U];
    vlSelfRef.top__DOT__f_rsps__024D_IN[1U] = vlSelfRef.top__DOT__f_reqs__DOT__data0_reg[1U];
    vlSelfRef.top__DOT__f_rsps__024D_IN[2U] = vlSelfRef.top__DOT__f_reqs__DOT__data0_reg[2U];
    vlSelfRef.top__DOT__f_rsps__024D_IN[3U] = vlSelfRef.top__DOT__f_reqs__DOT__data0_reg[3U];
    vlSelfRef.top__DOT__f_rsps__024D_IN[4U] = vlSelfRef.top__DOT__f_reqs__DOT__data0_reg[6U];
    vlSelfRef.top__DOT__f_rsps__024D_IN[5U] = vlSelfRef.top__DOT__f_reqs__DOT__data0_reg[7U];
    vlSelfRef.top__DOT__f_rsps__024D_IN[6U] = (((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d147[2U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d147[1U])))) 
                                                << 7U) 
                                               | (0x7fU 
                                                  & vlSelfRef.top__DOT__f_reqs__DOT__data0_reg[8U]));
    vlSelfRef.top__DOT__f_rsps__024D_IN[7U] = (((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d147[2U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d147[1U])))) 
                                                >> 0x19U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d147[2U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d147[1U]))) 
                                                           >> 0x20U)) 
                                                  << 7U));
    vlSelfRef.top__DOT__f_rsps__024D_IN[8U] = ((0x180U 
                                                & vlSelfRef.top__DOT__f_rsps__024D_IN[8U]) 
                                               | (0x1ffU 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d147[2U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d147[1U]))) 
                                                              >> 0x20U)) 
                                                     >> 0x19U)));
    vlSelfRef.top__DOT__f_rsps__024D_IN[8U] = ((0x7fU 
                                                & vlSelfRef.top__DOT__f_rsps__024D_IN[8U]) 
                                               | (0x180U 
                                                  & (vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d147[0U] 
                                                     << 7U)));
    if (vlSelfRef.top__DOT__WILL_FIRE_RL_mems_devices_rl_DMem_req_rsp) {
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[0U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[0U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[1U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[1U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[2U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[2U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[3U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[3U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[4U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[6U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[5U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[7U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[6U] 
            = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U])))) 
                << 7U) | (0x7fU & vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[8U]));
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[7U] 
            = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U])))) 
                >> 0x19U) | ((IData)(((((QData)((IData)(
                                                        vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U]))) 
                                      >> 0x20U)) << 7U));
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[8U] 
            = (0x200U | ((0x180U & (vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[0U] 
                                    << 7U)) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U]))) 
                                                        >> 0x20U)) 
                                               >> 0x19U)));
    } else if (vlSelfRef.top__DOT__CAN_FIRE_RL_mems_devices_spec_sto_buf_rl_mem_wr_rsp) {
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[0U] 
            = VmkTop__ConstPool__CONST_h30a359f8_0[0U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[1U] 
            = VmkTop__ConstPool__CONST_h30a359f8_0[1U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[2U] 
            = VmkTop__ConstPool__CONST_h30a359f8_0[2U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[3U] 
            = VmkTop__ConstPool__CONST_h30a359f8_0[3U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[4U] 
            = VmkTop__ConstPool__CONST_h30a359f8_0[4U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[5U] 
            = VmkTop__ConstPool__CONST_h30a359f8_0[5U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[6U] 
            = VmkTop__ConstPool__CONST_h30a359f8_0[6U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[7U] 
            = VmkTop__ConstPool__CONST_h30a359f8_0[7U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[8U] 
            = VmkTop__ConstPool__CONST_h30a359f8_0[8U];
    } else {
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[0U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[0U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[1U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[1U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[2U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[2U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[3U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[3U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[4U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[4U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[5U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[5U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[6U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[6U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[7U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[7U];
        vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv__024D_IN[8U] 
            = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[8U];
    }
}

void VmkTop___024root___eval_triggers__act(VmkTop___024root* vlSelf);

bool VmkTop___024root___eval_phase__act(VmkTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___eval_phase__act\n"); );
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VmkTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VmkTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VmkTop___024root___eval_phase__nba(VmkTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___eval_phase__nba\n"); );
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VmkTop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VmkTop___024root___dump_triggers__nba(VmkTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VmkTop___024root___dump_triggers__act(VmkTop___024root* vlSelf);
#endif  // VL_DEBUG

void VmkTop___024root___eval(VmkTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___eval\n"); );
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VmkTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("verilog/mkTop.v", 38, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VmkTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("verilog/mkTop.v", 38, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VmkTop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VmkTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VmkTop___024root___eval_debug_assertions(VmkTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___eval_debug_assertions\n"); );
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY(((vlSelfRef.RST_N & 0xfeU)))) {
        Verilated::overWidthError("RST_N");}
}
#endif  // VL_DEBUG
