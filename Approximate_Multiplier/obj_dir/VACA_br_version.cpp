// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VACA_br_version.h"
#include "VACA_br_version__Syms.h"

//============================================================
// Constructors

VACA_br_version::VACA_br_version(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VACA_br_version__Syms(contextp(), _vcname__, this)}
    , cin{vlSymsp->TOP.cin}
    , cout{vlSymsp->TOP.cout}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , sum{vlSymsp->TOP.sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VACA_br_version::VACA_br_version(const char* _vcname__)
    : VACA_br_version(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VACA_br_version::~VACA_br_version() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VACA_br_version___024root___eval_debug_assertions(VACA_br_version___024root* vlSelf);
#endif  // VL_DEBUG
void VACA_br_version___024root___eval_static(VACA_br_version___024root* vlSelf);
void VACA_br_version___024root___eval_initial(VACA_br_version___024root* vlSelf);
void VACA_br_version___024root___eval_settle(VACA_br_version___024root* vlSelf);
void VACA_br_version___024root___eval(VACA_br_version___024root* vlSelf);

void VACA_br_version::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VACA_br_version::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VACA_br_version___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VACA_br_version___024root___eval_static(&(vlSymsp->TOP));
        VACA_br_version___024root___eval_initial(&(vlSymsp->TOP));
        VACA_br_version___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VACA_br_version___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VACA_br_version::eventsPending() { return false; }

uint64_t VACA_br_version::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VACA_br_version::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VACA_br_version___024root___eval_final(VACA_br_version___024root* vlSelf);

VL_ATTR_COLD void VACA_br_version::final() {
    VACA_br_version___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VACA_br_version::hierName() const { return vlSymsp->name(); }
const char* VACA_br_version::modelName() const { return "VACA_br_version"; }
unsigned VACA_br_version::threads() const { return 1; }
