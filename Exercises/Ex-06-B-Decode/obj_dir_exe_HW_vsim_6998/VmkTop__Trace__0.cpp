// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmkTop__Syms.h"


void VmkTop___024root__trace_chg_0_sub_0(VmkTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VmkTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root__trace_chg_0\n"); );
    // Init
    VmkTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmkTop___024root*>(voidSelf);
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VmkTop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<9>/*287:0*/ VmkTop__ConstPool__CONST_h30a359f8_0;
extern const VlWide<9>/*287:0*/ VmkTop__ConstPool__CONST_h41129dee_0;
extern const VlWide<9>/*287:0*/ VmkTop__ConstPool__CONST_h2865a7b6_0;
extern const VlWide<9>/*287:0*/ VmkTop__ConstPool__CONST_h6bc10390_0;

void VmkTop___024root__trace_chg_0_sub_0(VmkTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root__trace_chg_0_sub_0\n"); );
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<9>/*287:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<9>/*287:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<9>/*287:0*/ __Vtemp_16;
    VlWide<9>/*287:0*/ __Vtemp_26;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgWData(oldp+0,(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_vrg_sb_0),263);
        bufp->chgWData(oldp+9,(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_vrg_sb_1),263);
        bufp->chgWData(oldp+18,(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_vrg_sb_2),263);
        bufp->chgWData(oldp+27,(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_vrg_sb_3),263);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        if (vlSelfRef.top__DOT__CAN_FIRE_RL_mems_devices_spec_sto_buf_rl_mem_wr_rsp) {
            __Vtemp_1[0U] = VmkTop__ConstPool__CONST_h30a359f8_0[0U];
            __Vtemp_1[1U] = VmkTop__ConstPool__CONST_h30a359f8_0[1U];
            __Vtemp_1[2U] = VmkTop__ConstPool__CONST_h30a359f8_0[2U];
            __Vtemp_1[3U] = VmkTop__ConstPool__CONST_h30a359f8_0[3U];
            __Vtemp_1[4U] = VmkTop__ConstPool__CONST_h30a359f8_0[4U];
            __Vtemp_1[5U] = VmkTop__ConstPool__CONST_h30a359f8_0[5U];
            __Vtemp_1[6U] = VmkTop__ConstPool__CONST_h30a359f8_0[6U];
            __Vtemp_1[7U] = VmkTop__ConstPool__CONST_h30a359f8_0[7U];
            __Vtemp_1[8U] = VmkTop__ConstPool__CONST_h30a359f8_0[8U];
        } else {
            __Vtemp_1[0U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[0U];
            __Vtemp_1[1U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[1U];
            __Vtemp_1[2U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[2U];
            __Vtemp_1[3U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[3U];
            __Vtemp_1[4U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[4U];
            __Vtemp_1[5U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[5U];
            __Vtemp_1[6U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[6U];
            __Vtemp_1[7U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[7U];
            __Vtemp_1[8U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[8U];
        }
        bufp->chgWData(oldp+36,(__Vtemp_1),266);
        if (vlSelfRef.top__DOT__WILL_FIRE_RL_mems_devices_rl_DMem_req_rsp) {
            __Vtemp_2[0U] = VmkTop__ConstPool__CONST_h41129dee_0[0U];
            __Vtemp_2[1U] = VmkTop__ConstPool__CONST_h41129dee_0[1U];
            __Vtemp_2[2U] = VmkTop__ConstPool__CONST_h41129dee_0[2U];
            __Vtemp_2[3U] = VmkTop__ConstPool__CONST_h41129dee_0[3U];
            __Vtemp_2[4U] = VmkTop__ConstPool__CONST_h41129dee_0[4U];
            __Vtemp_2[5U] = VmkTop__ConstPool__CONST_h41129dee_0[5U];
            __Vtemp_2[6U] = VmkTop__ConstPool__CONST_h41129dee_0[6U];
            __Vtemp_2[7U] = VmkTop__ConstPool__CONST_h41129dee_0[7U];
            __Vtemp_2[8U] = VmkTop__ConstPool__CONST_h41129dee_0[8U];
        } else {
            __Vtemp_2[0U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[0U];
            __Vtemp_2[1U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[1U];
            __Vtemp_2[2U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[2U];
            __Vtemp_2[3U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[3U];
            __Vtemp_2[4U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[4U];
            __Vtemp_2[5U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[5U];
            __Vtemp_2[6U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[6U];
            __Vtemp_2[7U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[7U];
            __Vtemp_2[8U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[8U];
        }
        bufp->chgWData(oldp+45,(__Vtemp_2),264);
        bufp->chgBit(oldp+54,(vlSelfRef.top__DOT__start_reg_1__024D_IN));
        bufp->chgBit(oldp+55,(vlSelfRef.top__DOT__state_fired__024D_IN));
        bufp->chgQData(oldp+56,(vlSelfRef.top__DOT__mems_devices_rg_MTIME),64);
        bufp->chgQData(oldp+58,((1ULL + vlSelfRef.top__DOT__mems_devices_rg_MTIME)),64);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__mems_devices_rg_logfile),32);
        bufp->chgBit(oldp+61,(vlSelfRef.top__DOT__mems_devices_rg_logfile__024EN));
        bufp->chgBit(oldp+62,(vlSelfRef.top__DOT__mems_devices_rg_running));
        bufp->chgWData(oldp+63,(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv),264);
        bufp->chgWData(oldp+72,(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv),266);
        bufp->chgQData(oldp+81,(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_rg_addr_base_mem),64);
        bufp->chgCData(oldp+83,(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_rg_free_ix),3);
        bufp->chgBit(oldp+84,(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_rg_fsm_state));
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_rg_logfile),32);
        bufp->chgQData(oldp+86,(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_rg_size_B_mem),64);
        bufp->chgWData(oldp+88,(vlSelfRef.top__DOT__rg_F_to_D),131);
        __Vtemp_5[0U] = 2U;
        __Vtemp_5[1U] = 0U;
        __Vtemp_5[2U] = 0U;
        __Vtemp_5[3U] = ((IData)(vlSelfRef.top__DOT__WILL_FIRE_RL_action_l96c16)
                          ? 0U : 0x20U);
        __Vtemp_5[4U] = 4U;
        bufp->chgWData(oldp+93,(__Vtemp_5),131);
        bufp->chgBit(oldp+98,(vlSelfRef.top__DOT__rg_F_to_D__024EN));
        bufp->chgBit(oldp+99,(vlSelfRef.top__DOT__running));
        bufp->chgBit(oldp+100,(vlSelfRef.top__DOT__running__024EN));
        bufp->chgBit(oldp+101,(vlSelfRef.top__DOT__start_reg));
        bufp->chgBit(oldp+102,((1U & (~ (IData)(vlSelfRef.top__DOT__CAN_FIRE_RL_fsm_start)))));
        bufp->chgBit(oldp+103,(((IData)(vlSelfRef.top__DOT__CAN_FIRE_RL_fsm_start) 
                                | (IData)(vlSelfRef.top__DOT__running__024EN))));
        bufp->chgBit(oldp+104,(vlSelfRef.top__DOT__start_reg_1));
        bufp->chgBit(oldp+105,(vlSelfRef.top__DOT__state_can_overlap));
        bufp->chgBit(oldp+106,(((IData)(vlSelfRef.top__DOT__state_fired__024D_IN) 
                                | (IData)(vlSelfRef.top__DOT__state_can_overlap))));
        bufp->chgBit(oldp+107,(vlSelfRef.top__DOT__state_fired));
        bufp->chgCData(oldp+108,(vlSelfRef.top__DOT__state_mkFSMstate),3);
        bufp->chgCData(oldp+109,(vlSelfRef.top__DOT__state_mkFSMstate__024D_IN),3);
        bufp->chgBit(oldp+110,(vlSelfRef.top__DOT__state_mkFSMstate__024EN));
        if (vlSelfRef.top__DOT__WILL_FIRE_RL_action_l96c16) {
            __Vtemp_6[0U] = VmkTop__ConstPool__CONST_h2865a7b6_0[0U];
            __Vtemp_6[1U] = VmkTop__ConstPool__CONST_h2865a7b6_0[1U];
            __Vtemp_6[2U] = VmkTop__ConstPool__CONST_h2865a7b6_0[2U];
            __Vtemp_6[3U] = VmkTop__ConstPool__CONST_h2865a7b6_0[3U];
            __Vtemp_6[4U] = VmkTop__ConstPool__CONST_h2865a7b6_0[4U];
            __Vtemp_6[5U] = VmkTop__ConstPool__CONST_h2865a7b6_0[5U];
            __Vtemp_6[6U] = VmkTop__ConstPool__CONST_h2865a7b6_0[6U];
            __Vtemp_6[7U] = VmkTop__ConstPool__CONST_h2865a7b6_0[7U];
            __Vtemp_6[8U] = VmkTop__ConstPool__CONST_h2865a7b6_0[8U];
        } else {
            __Vtemp_6[0U] = VmkTop__ConstPool__CONST_h6bc10390_0[0U];
            __Vtemp_6[1U] = VmkTop__ConstPool__CONST_h6bc10390_0[1U];
            __Vtemp_6[2U] = VmkTop__ConstPool__CONST_h6bc10390_0[2U];
            __Vtemp_6[3U] = VmkTop__ConstPool__CONST_h6bc10390_0[3U];
            __Vtemp_6[4U] = VmkTop__ConstPool__CONST_h6bc10390_0[4U];
            __Vtemp_6[5U] = VmkTop__ConstPool__CONST_h6bc10390_0[5U];
            __Vtemp_6[6U] = VmkTop__ConstPool__CONST_h6bc10390_0[6U];
            __Vtemp_6[7U] = VmkTop__ConstPool__CONST_h6bc10390_0[7U];
            __Vtemp_6[8U] = VmkTop__ConstPool__CONST_h6bc10390_0[8U];
        }
        bufp->chgWData(oldp+111,(__Vtemp_6),263);
        bufp->chgWData(oldp+120,(vlSelfRef.top__DOT__f_reqs__DOT__data0_reg),263);
        bufp->chgBit(oldp+129,(vlSelfRef.top__DOT__f_reqs__024DEQ));
        bufp->chgBit(oldp+130,(vlSelfRef.top__DOT__f_reqs__DOT__empty_reg));
        bufp->chgBit(oldp+131,(vlSelfRef.top__DOT__f_reqs__DOT__full_reg));
        bufp->chgWData(oldp+132,(vlSelfRef.top__DOT__f_rsps__DOT__data0_reg),265);
        bufp->chgBit(oldp+141,(vlSelfRef.top__DOT__f_rsps__024DEQ));
        bufp->chgBit(oldp+142,(vlSelfRef.top__DOT__f_rsps__DOT__empty_reg));
        bufp->chgBit(oldp+143,(vlSelfRef.top__DOT__f_rsps__DOT__full_reg));
        bufp->chgBit(oldp+144,(vlSelfRef.top__DOT__WILL_FIRE_RL_action_l96c16));
        bufp->chgBit(oldp+145,(vlSelfRef.top__DOT__WILL_FIRE_RL_action_l97c15));
        bufp->chgBit(oldp+146,(vlSelfRef.top__DOT__WILL_FIRE_RL_action_l98c16));
        bufp->chgBit(oldp+147,(vlSelfRef.top__DOT__WILL_FIRE_RL_action_l99c15));
        bufp->chgBit(oldp+148,(((IData)(vlSelfRef.top__DOT__running) 
                                & (IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_0_3))));
        bufp->chgBit(oldp+149,(vlSelfRef.top__DOT__CAN_FIRE_RL_fsm_start));
        bufp->chgBit(oldp+150,(vlSelfRef.top__DOT__WILL_FIRE_RL_idle_l89c7));
        bufp->chgBit(oldp+151,(vlSelfRef.top__DOT__WILL_FIRE_RL_mems_devices_rl_DMem_req_rsp));
        bufp->chgBit(oldp+152,(vlSelfRef.top__DOT__CAN_FIRE_RL_mems_devices_spec_sto_buf_rl_mem_wr_rsp));
        bufp->chgBit(oldp+153,(((~ (IData)(vlSelfRef.top__DOT__state_fired)) 
                                & (IData)(vlSelfRef.top__DOT__start_reg_1))));
        bufp->chgIData(oldp+154,((((0x17U == (0x7fU 
                                              & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                 >> 7U))) 
                                   || (0x37U == (0x7fU 
                                                 & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                    >> 7U))))
                                   ? (0xfffff000U & 
                                      ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                        << 0x19U) | 
                                       (0x1fff000U 
                                        & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                           >> 7U))))
                                   : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_84)
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                          >> 6U)))) 
                                           << 0xdU) 
                                          | (((0x1000U 
                                               & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                  << 6U)) 
                                              | (0x800U 
                                                 & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                    >> 3U))) 
                                             | ((0x7e0U 
                                                 & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                    << 5U)) 
                                                | (0x1eU 
                                                   & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                      >> 0xeU)))))
                                       : ((0x6fU == 
                                           (0x7fU & 
                                            (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                             >> 7U)))
                                           ? ((((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                               >> 6U)))) 
                                                << 0x15U) 
                                               | (0x100000U 
                                                  & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                     << 0xeU))) 
                                              | (((0xff000U 
                                                   & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                      >> 7U)) 
                                                  | (0x800U 
                                                     & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                        >> 0x10U))) 
                                                 | (0x7feU 
                                                    & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                        << 5U) 
                                                       | (0x1eU 
                                                          & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                             >> 0x1bU))))))
                                           : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_13)
                                               ? vlSelfRef.top__DOT__SEXT_f_rsps_first___05F98_BITS_230_TO_219_51___05F_d735
                                               : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_7)
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                                   >> 6U)))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                          << 5U)) 
                                                      | (0x1fU 
                                                         & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                            >> 0xeU))))
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b10011_ETC___05F_d427)
                                                    ? vlSelfRef.top__DOT__SEXT_f_rsps_first___05F98_BITS_230_TO_219_51___05F_d735
                                                    : 0U))))))),32);
        bufp->chgIData(oldp+155,(vlSelfRef.top__DOT__x1_avValue_imm___05Fh20394),32);
        bufp->chgIData(oldp+156,(vlSelfRef.top__DOT__x1_avValue_tval___05Fh20386),32);
        bufp->chgCData(oldp+157,(vlSelfRef.top__DOT__x1_avValue_cause___05Fh20385),4);
        bufp->chgBit(oldp+158,(vlSelfRef.top__DOT__IF_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_ETC___05F_d701));
        bufp->chgBit(oldp+159,(vlSelfRef.top__DOT__IF_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_ETC___05F_d710));
        __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[4U]))));
        __Vtemp_7[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[4U]))) 
                                 >> 0x20U));
        __Vtemp_7[2U] = 0U;
        __Vtemp_7[3U] = 0U;
        bufp->chgWData(oldp+160,(__Vtemp_7),128);
        __Vtemp_8[0U] = (IData)((((QData)((IData)(vlSelfRef.top__DOT__f_reqs__DOT__data0_reg[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__f_reqs__DOT__data0_reg[4U]))));
        __Vtemp_8[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.top__DOT__f_reqs__DOT__data0_reg[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__f_reqs__DOT__data0_reg[4U]))) 
                                 >> 0x20U));
        __Vtemp_8[2U] = 0U;
        __Vtemp_8[3U] = 0U;
        bufp->chgWData(oldp+164,(__Vtemp_8),128);
        bufp->chgIData(oldp+168,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_7)
                                   ? (((- (IData)((1U 
                                                   & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                      >> 6U)))) 
                                       << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                       << 5U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                         >> 0xeU))))
                                   : ((IData)(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b10011_ETC___05F_d427)
                                       ? vlSelfRef.top__DOT__SEXT_f_rsps_first___05F98_BITS_230_TO_219_51___05F_d735
                                       : 0U))),32);
        bufp->chgIData(oldp+169,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_13)
                                   ? vlSelfRef.top__DOT__SEXT_f_rsps_first___05F98_BITS_230_TO_219_51___05F_d735
                                   : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_7)
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                          >> 6U)))) 
                                           << 0xcU) 
                                          | ((0xfe0U 
                                              & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                 << 5U)) 
                                             | (0x1fU 
                                                & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                   >> 0xeU))))
                                       : ((IData)(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b10011_ETC___05F_d427)
                                           ? vlSelfRef.top__DOT__SEXT_f_rsps_first___05F98_BITS_230_TO_219_51___05F_d735
                                           : 0U)))),32);
        bufp->chgIData(oldp+170,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_84)
                                   ? (((- (IData)((1U 
                                                   & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                      >> 6U)))) 
                                       << 0xdU) | (
                                                   ((0x1000U 
                                                     & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                        << 6U)) 
                                                    | (0x800U 
                                                       & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                          >> 3U))) 
                                                   | ((0x7e0U 
                                                       & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                          << 5U)) 
                                                      | (0x1eU 
                                                         & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                            >> 0xeU)))))
                                   : ((0x6fU == (0x7fU 
                                                 & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                    >> 7U)))
                                       ? ((((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                           >> 6U)))) 
                                            << 0x15U) 
                                           | (0x100000U 
                                              & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                 << 0xeU))) 
                                          | (((0xff000U 
                                               & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                  >> 7U)) 
                                              | (0x800U 
                                                 & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                    >> 0x10U))) 
                                             | (0x7feU 
                                                & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                    << 5U) 
                                                   | (0x1eU 
                                                      & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                         >> 0x1bU))))))
                                       : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_13)
                                           ? vlSelfRef.top__DOT__SEXT_f_rsps_first___05F98_BITS_230_TO_219_51___05F_d735
                                           : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_7)
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                                  >> 6U)))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                         << 5U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                           >> 0xeU))))
                                               : ((IData)(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b10011_ETC___05F_d427)
                                                   ? vlSelfRef.top__DOT__SEXT_f_rsps_first___05F98_BITS_230_TO_219_51___05F_d735
                                                   : 0U)))))),32);
        bufp->chgIData(oldp+171,(vlSelfRef.top__DOT__SEXT_f_rsps_first___05F98_BITS_230_TO_219_51___05F_d735),32);
        bufp->chgIData(oldp+172,(((IData)(4U) + ((vlSelfRef.top__DOT__rg_F_to_D[4U] 
                                                  << 0x1dU) 
                                                 | (vlSelfRef.top__DOT__rg_F_to_D[3U] 
                                                    >> 3U)))),32);
        bufp->chgIData(oldp+173,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_64)
                                   ? 0U : ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                            << 0x19U) 
                                           | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                              >> 7U)))),32);
        bufp->chgIData(oldp+174,((((0x100000U & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                 << 0xeU)) 
                                   | ((0xff000U & (
                                                   vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                   >> 7U)) 
                                      | (0x800U & (
                                                   vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                   >> 0x10U)))) 
                                  | (0x7feU & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                << 5U) 
                                               | (0x1eU 
                                                  & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                     >> 0x1bU)))))),21);
        bufp->chgSData(oldp+175,((((0x1000U & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                               << 6U)) 
                                   | (0x800U & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                >> 3U))) 
                                  | ((0x7e0U & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                << 5U)) 
                                     | (0x1eU & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                 >> 0xeU))))),13);
        bufp->chgSData(oldp+176,((0xfffU & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                             << 5U) 
                                            | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                               >> 0x1bU)))),12);
        bufp->chgSData(oldp+177,(((0xfe0U & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                             << 5U)) 
                                  | (0x1fU & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                              >> 0xeU)))),12);
        bufp->chgBit(oldp+178,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d509));
        bufp->chgBit(oldp+179,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d531));
        bufp->chgBit(oldp+180,((1U & ((0x3980U != (0x7c03f80U 
                                                   & vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U])) 
                                      | ((0U != (0xfffU 
                                                 & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                     << 5U) 
                                                    | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                       >> 0x1bU)))) 
                                         & ((1U != 
                                             (0xfffU 
                                              & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                  << 5U) 
                                                 | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                    >> 0x1bU)))) 
                                            & (0x302U 
                                               != (0xfffU 
                                                   & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                       << 5U) 
                                                      | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                         >> 0x1bU))))))))));
        bufp->chgBit(oldp+181,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_34) 
                                & ((IData)(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d531) 
                                   & ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_83) 
                                      & ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_38) 
                                         & (IData)(
                                                   ((0x780U 
                                                     != 
                                                     (0x3f80U 
                                                      & vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U])) 
                                                    | (IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_31)))))))));
        bufp->chgBit(oldp+182,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d556));
        bufp->chgBit(oldp+183,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d583));
        bufp->chgBit(oldp+184,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_44) 
                                & (IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_49))));
        bufp->chgBit(oldp+185,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d591));
        bufp->chgBit(oldp+186,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_50) 
                                & (IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_51))));
        bufp->chgBit(oldp+187,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_81) 
                                & ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_50) 
                                   & (IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_51)))));
        bufp->chgBit(oldp+188,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_44) 
                                & ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_37) 
                                   | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                      >> 0x15U)))));
        bufp->chgBit(oldp+189,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d658));
        bufp->chgBit(oldp+190,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d680));
        bufp->chgBit(oldp+191,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_33) 
                                & ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_51)
                                    ? (0U != (0x1fU 
                                              & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                 >> 0xeU)))
                                    : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_48) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                    >> 0xeU))))))));
        bufp->chgBit(oldp+192,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_44) 
                                & ((IData)((((0x3980U 
                                              != (0x3f80U 
                                                  & vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U])) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)) 
                                            | (0U != 
                                               (0xfffU 
                                                & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                    << 5U) 
                                                   | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                      >> 0x1bU)))))) 
                                   & ((IData)((((0x3980U 
                                                 != 
                                                 (0x3f80U 
                                                  & vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U])) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)) 
                                               | (1U 
                                                  != 
                                                  (0xfffU 
                                                   & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                       << 5U) 
                                                      | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                         >> 0x1bU)))))) 
                                      & ((IData)(((
                                                   (0x3980U 
                                                    != 
                                                    (0x3f80U 
                                                     & vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U])) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)) 
                                                  | (0x302U 
                                                     != 
                                                     (0xfffU 
                                                      & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                          << 5U) 
                                                         | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                            >> 0x1bU)))))) 
                                         & ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_38) 
                                            & ((0xfU 
                                                != 
                                                (0x7fU 
                                                 & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                    >> 7U))) 
                                               | ((0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                       >> 0x13U))) 
                                                  & (1U 
                                                     != 
                                                     (7U 
                                                      & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                         >> 0x13U))))))))))));
        bufp->chgBit(oldp+193,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b1_ETC___05F_d773));
        bufp->chgBit(oldp+194,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_264_TO_263_57_EQ_1_5_ETC___05F_d781));
        bufp->chgBit(oldp+195,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_264_TO_263_57_EQ_1_5_ETC___05F_d792));
        bufp->chgBit(oldp+196,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_264_TO_263_57_EQ_1_5_ETC___05F_d798));
        bufp->chgBit(oldp+197,(vlSelfRef.top__DOT__NOT_f_rsps_first___05F98_BITS_264_TO_263_57_EQ_1_5_ETC___05F_d806));
        bufp->chgBit(oldp+198,(vlSelfRef.top__DOT__abort_whas___05F53_AND_abort_wget___05F54_55_OR_state___05FETC___05F_d854));
        bufp->chgBit(oldp+199,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_77) 
                                | (IData)(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11100_ETC___05F_d472))));
        bufp->chgBit(oldp+200,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_77) 
                                | ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_83) 
                                   & (IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_38)))));
        bufp->chgBit(oldp+201,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_77) 
                                | ((~ (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                       >> 0x15U)) & (IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_47)))));
        bufp->chgBit(oldp+202,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_7) 
                                | ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_51)
                                    ? (0U == (0x1fU 
                                              & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                 >> 0xeU)))
                                    : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_38) 
                                       | (0U == (0x1fU 
                                                 & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                    >> 0xeU))))))));
        bufp->chgBit(oldp+203,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b10011_ETC___05F_d427));
        bufp->chgBit(oldp+204,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d479));
        bufp->chgBit(oldp+205,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d601));
        bufp->chgBit(oldp+206,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d606));
        bufp->chgBit(oldp+207,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_76) 
                                | (IData)(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_08_ETC___05F_d623))));
        bufp->chgBit(oldp+208,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d671));
        bufp->chgBit(oldp+209,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d689));
        bufp->chgBit(oldp+210,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d785));
        bufp->chgBit(oldp+211,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11001_ETC___05F_d449));
        bufp->chgBit(oldp+212,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11011_ETC___05F_d619));
        bufp->chgBit(oldp+213,((IData)(((0x3980U == 
                                         (0x7c03f80U 
                                          & vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U])) 
                                        & ((0U == (0xfffU 
                                                   & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                       << 5U) 
                                                      | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                         >> 0x1bU)))) 
                                           | ((1U == 
                                               (0xfffU 
                                                & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                    << 5U) 
                                                   | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                      >> 0x1bU)))) 
                                              | (0x302U 
                                                 == 
                                                 (0xfffU 
                                                  & ((vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[7U] 
                                                      << 5U) 
                                                     | (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[6U] 
                                                        >> 0x1bU))))))))));
        bufp->chgBit(oldp+214,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11100_ETC___05F_d472));
        bufp->chgBit(oldp+215,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_08_ETC___05F_d476));
        bufp->chgBit(oldp+216,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_08_ETC___05F_d598));
        bufp->chgBit(oldp+217,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_08_ETC___05F_d623));
        bufp->chgBit(oldp+218,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11_08_ETC___05F_d630));
        bufp->chgBit(oldp+219,(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_264_TO_263_57_EQ_1_59_OR_ETC___05F_d649));
        bufp->chgBit(oldp+220,((((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_78) 
                                 | (IData)(vlSelfRef.top__DOT__f_rsps_first___05F98_BITS_205_TO_199_92_EQ_0b11000_ETC___05F_d601)) 
                                & ((3U == (3U & (vlSelfRef.top__DOT__f_rsps__DOT__data0_reg[8U] 
                                                 >> 7U))) 
                                   | ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_81) 
                                      & ((IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_69) 
                                         & (IData)(vlSelfRef.top__DOT____VdfgRegularize_hc2bb3892_2_50)))))));
        bufp->chgWData(oldp+221,(vlSelfRef.top__DOT__f_reqs__DOT__data1_reg),263);
        bufp->chgBit(oldp+230,((((~ (IData)(vlSelfRef.top__DOT__f_reqs__DOT__empty_reg)) 
                                 & (IData)(vlSelfRef.top__DOT__rg_F_to_D__024EN)) 
                                | ((IData)(vlSelfRef.top__DOT__rg_F_to_D__024EN) 
                                   & ((IData)(vlSelfRef.top__DOT__f_reqs__024DEQ) 
                                      & (IData)(vlSelfRef.top__DOT__f_reqs__DOT__full_reg))))));
        bufp->chgBit(oldp+231,(((~ (IData)(vlSelfRef.top__DOT__f_reqs__DOT__full_reg)) 
                                & (IData)(vlSelfRef.top__DOT__f_reqs__024DEQ))));
        bufp->chgBit(oldp+232,((1U & (((~ (IData)(vlSelfRef.top__DOT__f_reqs__024DEQ)) 
                                       & (~ (IData)(vlSelfRef.top__DOT__rg_F_to_D__024EN))) 
                                      | (((~ (IData)(vlSelfRef.top__DOT__f_reqs__024DEQ)) 
                                          & (IData)(vlSelfRef.top__DOT__f_reqs__DOT__empty_reg)) 
                                         | ((~ (IData)(vlSelfRef.top__DOT__rg_F_to_D__024EN)) 
                                            & (IData)(vlSelfRef.top__DOT__f_reqs__DOT__full_reg)))))));
        bufp->chgBit(oldp+233,(((IData)(vlSelfRef.top__DOT__rg_F_to_D__024EN) 
                                & (IData)(vlSelfRef.top__DOT__f_reqs__DOT__empty_reg))));
        bufp->chgBit(oldp+234,(vlSelfRef.top__DOT__f_reqs__DOT__error_checks__DOT__deqerror));
        bufp->chgBit(oldp+235,(vlSelfRef.top__DOT__f_reqs__DOT__error_checks__DOT__enqerror));
        bufp->chgWData(oldp+236,(vlSelfRef.top__DOT__f_rsps__DOT__data1_reg),265);
        bufp->chgBit(oldp+245,((((~ (IData)(vlSelfRef.top__DOT__f_rsps__DOT__empty_reg)) 
                                 & (IData)(vlSelfRef.top__DOT__f_reqs__024DEQ)) 
                                | ((IData)(vlSelfRef.top__DOT__f_reqs__024DEQ) 
                                   & ((IData)(vlSelfRef.top__DOT__f_rsps__024DEQ) 
                                      & (IData)(vlSelfRef.top__DOT__f_rsps__DOT__full_reg))))));
        bufp->chgBit(oldp+246,(((~ (IData)(vlSelfRef.top__DOT__f_rsps__DOT__full_reg)) 
                                & (IData)(vlSelfRef.top__DOT__f_rsps__024DEQ))));
        bufp->chgBit(oldp+247,((1U & (((~ (IData)(vlSelfRef.top__DOT__f_rsps__024DEQ)) 
                                       & (~ (IData)(vlSelfRef.top__DOT__f_reqs__024DEQ))) 
                                      | (((~ (IData)(vlSelfRef.top__DOT__f_rsps__024DEQ)) 
                                          & (IData)(vlSelfRef.top__DOT__f_rsps__DOT__empty_reg)) 
                                         | ((~ (IData)(vlSelfRef.top__DOT__f_reqs__024DEQ)) 
                                            & (IData)(vlSelfRef.top__DOT__f_rsps__DOT__full_reg)))))));
        bufp->chgBit(oldp+248,(((IData)(vlSelfRef.top__DOT__f_reqs__024DEQ) 
                                & (IData)(vlSelfRef.top__DOT__f_rsps__DOT__empty_reg))));
        bufp->chgBit(oldp+249,(vlSelfRef.top__DOT__f_rsps__DOT__error_checks__DOT__deqerror));
        bufp->chgBit(oldp+250,(vlSelfRef.top__DOT__f_rsps__DOT__error_checks__DOT__enqerror));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        __Vtemp_16[0U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[0U];
        __Vtemp_16[1U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[1U];
        __Vtemp_16[2U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[2U];
        __Vtemp_16[3U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[3U];
        __Vtemp_16[4U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[6U];
        __Vtemp_16[5U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[7U];
        __Vtemp_16[6U] = (((IData)((((QData)((IData)(
                                                     vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U])))) 
                           << 7U) | (0x7fU & vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[8U]));
        __Vtemp_16[7U] = (((IData)((((QData)((IData)(
                                                     vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U])))) 
                           >> 0x19U) | ((IData)(((((QData)((IData)(
                                                                   vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U]))) 
                                                 >> 0x20U)) 
                                        << 7U));
        __Vtemp_16[8U] = (0x200U | ((0x180U & (vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[0U] 
                                               << 7U)) 
                                    | ((IData)(((((QData)((IData)(
                                                                  vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U]))) 
                                                >> 0x20U)) 
                                       >> 0x19U)));
        bufp->chgWData(oldp+251,(__Vtemp_16),266);
        if (vlSelfRef.top__DOT__WILL_FIRE_RL_mems_devices_rl_DMem_req_rsp) {
            __Vtemp_26[0U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[0U];
            __Vtemp_26[1U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[1U];
            __Vtemp_26[2U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[2U];
            __Vtemp_26[3U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[3U];
            __Vtemp_26[4U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[6U];
            __Vtemp_26[5U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[7U];
            __Vtemp_26[6U] = (((IData)((((QData)((IData)(
                                                         vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U])))) 
                               << 7U) | (0x7fU & vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_req_to_mem_rv[8U]));
            __Vtemp_26[7U] = (((IData)((((QData)((IData)(
                                                         vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U])))) 
                               >> 0x19U) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U]))) 
                                                     >> 0x20U)) 
                                            << 7U));
            __Vtemp_26[8U] = (0x200U | ((0x180U & (
                                                   vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[0U] 
                                                   << 7U)) 
                                        | ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[2U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26[1U]))) 
                                                    >> 0x20U)) 
                                           >> 0x19U)));
        } else if (vlSelfRef.top__DOT__CAN_FIRE_RL_mems_devices_spec_sto_buf_rl_mem_wr_rsp) {
            __Vtemp_26[0U] = VmkTop__ConstPool__CONST_h30a359f8_0[0U];
            __Vtemp_26[1U] = VmkTop__ConstPool__CONST_h30a359f8_0[1U];
            __Vtemp_26[2U] = VmkTop__ConstPool__CONST_h30a359f8_0[2U];
            __Vtemp_26[3U] = VmkTop__ConstPool__CONST_h30a359f8_0[3U];
            __Vtemp_26[4U] = VmkTop__ConstPool__CONST_h30a359f8_0[4U];
            __Vtemp_26[5U] = VmkTop__ConstPool__CONST_h30a359f8_0[5U];
            __Vtemp_26[6U] = VmkTop__ConstPool__CONST_h30a359f8_0[6U];
            __Vtemp_26[7U] = VmkTop__ConstPool__CONST_h30a359f8_0[7U];
            __Vtemp_26[8U] = VmkTop__ConstPool__CONST_h30a359f8_0[8U];
        } else {
            __Vtemp_26[0U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[0U];
            __Vtemp_26[1U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[1U];
            __Vtemp_26[2U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[2U];
            __Vtemp_26[3U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[3U];
            __Vtemp_26[4U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[4U];
            __Vtemp_26[5U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[5U];
            __Vtemp_26[6U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[6U];
            __Vtemp_26[7U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[7U];
            __Vtemp_26[8U] = vlSelfRef.top__DOT__mems_devices_spec_sto_buf_f_rsp_from_mem_rv[8U];
        }
        bufp->chgWData(oldp+260,(__Vtemp_26),266);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+269,(vlSelfRef.top__DOT__v___05Fh18954),32);
        bufp->chgIData(oldp+270,(vlSelfRef.top__DOT__v___05Fh22751),32);
        bufp->chgWData(oldp+271,(vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d147),96);
        bufp->chgIData(oldp+274,(vlSelfRef.top__DOT__v___05Fh6999),32);
        bufp->chgWData(oldp+275,(vlSelfRef.top__DOT__TASK_c_mems_devices_req_rsp___05F_d26),96);
        bufp->chgIData(oldp+278,(vlSelfRef.top__DOT__v___05Fh4213),32);
        bufp->chgIData(oldp+279,(vlSelfRef.top__DOT__v___05Fh4207),32);
        bufp->chgIData(oldp+280,(vlSelfRef.top__DOT__v___05Fh6993),32);
        bufp->chgIData(oldp+281,(vlSelfRef.top__DOT__v___05Fh18948),32);
        bufp->chgIData(oldp+282,(vlSelfRef.top__DOT__v___05Fh22745),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+283,(vlSelfRef.top__DOT__f_rsps__024D_IN),265);
    }
    bufp->chgBit(oldp+292,(vlSelfRef.CLK));
    bufp->chgBit(oldp+293,(vlSelfRef.RST_N));
}

void VmkTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root__trace_cleanup\n"); );
    // Init
    VmkTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmkTop___024root*>(voidSelf);
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
