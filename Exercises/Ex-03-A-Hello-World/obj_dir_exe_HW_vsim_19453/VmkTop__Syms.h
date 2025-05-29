// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMKTOP__SYMS_H_
#define VERILATED_VMKTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VmkTop.h"

// INCLUDE MODULE CLASSES
#include "VmkTop___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VmkTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VmkTop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VmkTop___024root               TOP;

    // CONSTRUCTORS
    VmkTop__Syms(VerilatedContext* contextp, const char* namep, VmkTop* modelp);
    ~VmkTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
