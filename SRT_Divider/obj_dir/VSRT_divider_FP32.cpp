// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSRT_divider_FP32.h"
#include "VSRT_divider_FP32__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSRT_divider_FP32::VSRT_divider_FP32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSRT_divider_FP32__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , dividend{vlSymsp->TOP.dividend}
    , divisor{vlSymsp->TOP.divisor}
    , quotient{vlSymsp->TOP.quotient}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSRT_divider_FP32::VSRT_divider_FP32(const char* _vcname__)
    : VSRT_divider_FP32(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSRT_divider_FP32::~VSRT_divider_FP32() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSRT_divider_FP32___024root___eval_debug_assertions(VSRT_divider_FP32___024root* vlSelf);
#endif  // VL_DEBUG
void VSRT_divider_FP32___024root___eval_static(VSRT_divider_FP32___024root* vlSelf);
void VSRT_divider_FP32___024root___eval_initial(VSRT_divider_FP32___024root* vlSelf);
void VSRT_divider_FP32___024root___eval_settle(VSRT_divider_FP32___024root* vlSelf);
void VSRT_divider_FP32___024root___eval(VSRT_divider_FP32___024root* vlSelf);

void VSRT_divider_FP32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSRT_divider_FP32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSRT_divider_FP32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSRT_divider_FP32___024root___eval_static(&(vlSymsp->TOP));
        VSRT_divider_FP32___024root___eval_initial(&(vlSymsp->TOP));
        VSRT_divider_FP32___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSRT_divider_FP32___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSRT_divider_FP32::eventsPending() { return false; }

uint64_t VSRT_divider_FP32::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSRT_divider_FP32::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSRT_divider_FP32___024root___eval_final(VSRT_divider_FP32___024root* vlSelf);

VL_ATTR_COLD void VSRT_divider_FP32::final() {
    VSRT_divider_FP32___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSRT_divider_FP32::hierName() const { return vlSymsp->name(); }
const char* VSRT_divider_FP32::modelName() const { return "VSRT_divider_FP32"; }
unsigned VSRT_divider_FP32::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VSRT_divider_FP32::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSRT_divider_FP32___024root__trace_init_top(VSRT_divider_FP32___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSRT_divider_FP32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSRT_divider_FP32___024root*>(voidSelf);
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSRT_divider_FP32___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSRT_divider_FP32___024root__trace_register(VSRT_divider_FP32___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSRT_divider_FP32::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSRT_divider_FP32::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSRT_divider_FP32___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
