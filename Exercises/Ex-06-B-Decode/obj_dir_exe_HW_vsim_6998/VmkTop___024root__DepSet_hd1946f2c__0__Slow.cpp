// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTop.h for the primary calling header

#include "VmkTop__pch.h"
#include "VmkTop__Syms.h"
#include "VmkTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VmkTop___024root___dump_triggers__stl(VmkTop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VmkTop___024root___eval_triggers__stl(VmkTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTop___024root___eval_triggers__stl\n"); );
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VmkTop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
