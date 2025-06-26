// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTop.h for the primary calling header

#include "VmkTop__pch.h"
#include "VmkTop__Syms.h"
#include "VmkTop___024unit.h"

extern "C" void c_mems_devices_init(unsigned int arg0);

VL_INLINE_OPT void VmkTop___024unit____Vdpiimwrap_c_mems_devices_init_TOP____024unit(IData/*31:0*/ arg0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmkTop___024unit____Vdpiimwrap_c_mems_devices_init_TOP____024unit\n"); );
    // Body
    unsigned int arg0__Vcvt;
    for (size_t arg0__Vidx = 0; arg0__Vidx < 1; ++arg0__Vidx) arg0__Vcvt = arg0;
    c_mems_devices_init(arg0__Vcvt);
}

extern "C" void c_mems_devices_req_rsp(svBitVecVal* res, unsigned long long arg0, unsigned int arg1, unsigned int arg2, unsigned long long arg3, unsigned int arg4, const svBitVecVal* arg5);

VL_INLINE_OPT void VmkTop___024unit____Vdpiimwrap_c_mems_devices_req_rsp_TOP____024unit(VlWide<3>/*95:0*/ &res, QData/*63:0*/ arg0, IData/*31:0*/ arg1, IData/*31:0*/ arg2, QData/*63:0*/ arg3, IData/*31:0*/ arg4, VlWide<4>/*127:0*/ arg5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmkTop___024unit____Vdpiimwrap_c_mems_devices_req_rsp_TOP____024unit\n"); );
    // Body
    svBitVecVal res__Vcvt[3];
    unsigned long long arg0__Vcvt;
    for (size_t arg0__Vidx = 0; arg0__Vidx < 1; ++arg0__Vidx) arg0__Vcvt = arg0;
    unsigned int arg1__Vcvt;
    for (size_t arg1__Vidx = 0; arg1__Vidx < 1; ++arg1__Vidx) arg1__Vcvt = arg1;
    unsigned int arg2__Vcvt;
    for (size_t arg2__Vidx = 0; arg2__Vidx < 1; ++arg2__Vidx) arg2__Vcvt = arg2;
    unsigned long long arg3__Vcvt;
    for (size_t arg3__Vidx = 0; arg3__Vidx < 1; ++arg3__Vidx) arg3__Vcvt = arg3;
    unsigned int arg4__Vcvt;
    for (size_t arg4__Vidx = 0; arg4__Vidx < 1; ++arg4__Vidx) arg4__Vcvt = arg4;
    svBitVecVal arg5__Vcvt[4];
    for (size_t arg5__Vidx = 0; arg5__Vidx < 1; ++arg5__Vidx) VL_SET_SVBV_W(128, arg5__Vcvt + 4 * arg5__Vidx, arg5);
    c_mems_devices_req_rsp(res__Vcvt, arg0__Vcvt, arg1__Vcvt, arg2__Vcvt, arg3__Vcvt, arg4__Vcvt, arg5__Vcvt);
    VL_SET_W_SVBV(96,res,res__Vcvt + 0);
}
