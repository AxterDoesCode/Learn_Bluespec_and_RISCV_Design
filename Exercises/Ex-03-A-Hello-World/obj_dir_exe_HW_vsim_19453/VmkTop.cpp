// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VmkTop__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VmkTop::VmkTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VmkTop__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , RST_N{vlSymsp->TOP.RST_N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VmkTop::VmkTop(const char* _vcname__)
    : VmkTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VmkTop::~VmkTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VmkTop___024root___eval_debug_assertions(VmkTop___024root* vlSelf);
#endif  // VL_DEBUG
void VmkTop___024root___eval_static(VmkTop___024root* vlSelf);
void VmkTop___024root___eval_initial(VmkTop___024root* vlSelf);
void VmkTop___024root___eval_settle(VmkTop___024root* vlSelf);
void VmkTop___024root___eval(VmkTop___024root* vlSelf);

void VmkTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmkTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VmkTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VmkTop___024root___eval_static(&(vlSymsp->TOP));
        VmkTop___024root___eval_initial(&(vlSymsp->TOP));
        VmkTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VmkTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VmkTop::eventsPending() { return false; }

uint64_t VmkTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VmkTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VmkTop___024root___eval_final(VmkTop___024root* vlSelf);

VL_ATTR_COLD void VmkTop::final() {
    VmkTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VmkTop::hierName() const { return vlSymsp->name(); }
const char* VmkTop::modelName() const { return "VmkTop"; }
unsigned VmkTop::threads() const { return 1; }
void VmkTop::prepareClone() const { contextp()->prepareClone(); }
void VmkTop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VmkTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VmkTop___024root__trace_decl_types(VerilatedVcd* tracep);

void VmkTop___024root__trace_init_top(VmkTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VmkTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmkTop___024root*>(voidSelf);
    VmkTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VmkTop___024root__trace_decl_types(tracep);
    VmkTop___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void VmkTop___024root__trace_register(VmkTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VmkTop::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VmkTop::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VmkTop___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
