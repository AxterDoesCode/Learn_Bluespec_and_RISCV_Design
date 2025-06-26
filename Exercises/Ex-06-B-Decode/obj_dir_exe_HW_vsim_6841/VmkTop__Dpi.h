// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMKTOP__DPI_H_
#define VERILATED_VMKTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at verilog/mkTop.v:29:30
    extern void c_mems_devices_init(unsigned int arg0);
    // DPI import at verilog/mkTop.v:30:30
    extern void c_mems_devices_req_rsp(svBitVecVal* res, unsigned long long arg0, unsigned int arg1, unsigned int arg2, unsigned long long arg3, unsigned int arg4, const svBitVecVal* arg5);

#ifdef __cplusplus
}
#endif

#endif  // guard
