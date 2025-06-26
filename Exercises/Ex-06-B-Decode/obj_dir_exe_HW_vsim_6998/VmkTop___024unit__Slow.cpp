// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTop.h for the primary calling header

#include "VmkTop__pch.h"
#include "VmkTop__Syms.h"
#include "VmkTop___024unit.h"

void VmkTop___024unit___ctor_var_reset(VmkTop___024unit* vlSelf);

VmkTop___024unit::VmkTop___024unit(VmkTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VmkTop___024unit___ctor_var_reset(this);
}

void VmkTop___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VmkTop___024unit::~VmkTop___024unit() {
}
