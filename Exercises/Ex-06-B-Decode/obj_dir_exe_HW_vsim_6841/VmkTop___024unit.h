// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VmkTop.h for the primary calling header

#ifndef VERILATED_VMKTOP___024UNIT_H_
#define VERILATED_VMKTOP___024UNIT_H_  // guard

#include "verilated.h"


class VmkTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VmkTop___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VmkTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VmkTop___024unit(VmkTop__Syms* symsp, const char* v__name);
    ~VmkTop___024unit();
    VL_UNCOPYABLE(VmkTop___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
