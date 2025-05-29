// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTop.h for the primary calling header

#include "VmkTop__pch.h"
#include "VmkTop___024root.h"

VL_ATTR_COLD void VmkTop___024root___eval_static(VmkTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VmkTop___024root___eval_initial(VmkTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
}

VL_ATTR_COLD void VmkTop___024root___eval_final(VmkTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VmkTop___024root___eval_settle(VmkTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VmkTop___024root___dump_triggers__act(VmkTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge CLK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VmkTop___024root___dump_triggers__nba(VmkTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge CLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VmkTop___024root___ctor_var_reset(VmkTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->RST_N = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
}
