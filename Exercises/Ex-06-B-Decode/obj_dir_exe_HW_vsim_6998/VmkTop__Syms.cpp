// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VmkTop__pch.h"
#include "VmkTop.h"
#include "VmkTop___024root.h"
#include "VmkTop___024unit.h"

// FUNCTIONS
VmkTop__Syms::~VmkTop__Syms()
{
}

VmkTop__Syms::VmkTop__Syms(VerilatedContext* contextp, const char* namep, VmkTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(978);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_top__f_reqs.configure(this, name(), "top.f_reqs", "f_reqs", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__f_reqs__error_checks.configure(this, name(), "top.f_reqs.error_checks", "error_checks", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__f_rsps.configure(this, name(), "top.f_rsps", "f_rsps", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__f_rsps__error_checks.configure(this, name(), "top.f_rsps.error_checks", "error_checks", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
