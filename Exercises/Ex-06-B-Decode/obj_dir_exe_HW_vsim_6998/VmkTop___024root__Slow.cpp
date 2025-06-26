// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTop.h for the primary calling header

#include "VmkTop__pch.h"
#include "VmkTop__Syms.h"
#include "VmkTop___024root.h"

void VmkTop___024root___ctor_var_reset(VmkTop___024root* vlSelf);

VmkTop___024root::VmkTop___024root(VmkTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VmkTop___024root___ctor_var_reset(this);
}

void VmkTop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VmkTop___024root::~VmkTop___024root() {
}
