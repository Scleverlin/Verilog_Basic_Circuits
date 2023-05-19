// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCLA_HAN_PG_16.h"
#include "VCLA_HAN_PG_16__Syms.h"

//============================================================
// Constructors

VCLA_HAN_PG_16::VCLA_HAN_PG_16(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCLA_HAN_PG_16__Syms(contextp(), _vcname__, this)}
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

VCLA_HAN_PG_16::VCLA_HAN_PG_16(const char* _vcname__)
    : VCLA_HAN_PG_16(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCLA_HAN_PG_16::~VCLA_HAN_PG_16() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCLA_HAN_PG_16___024root___eval_debug_assertions(VCLA_HAN_PG_16___024root* vlSelf);
#endif  // VL_DEBUG
void VCLA_HAN_PG_16___024root___eval_static(VCLA_HAN_PG_16___024root* vlSelf);
void VCLA_HAN_PG_16___024root___eval_initial(VCLA_HAN_PG_16___024root* vlSelf);
void VCLA_HAN_PG_16___024root___eval_settle(VCLA_HAN_PG_16___024root* vlSelf);
void VCLA_HAN_PG_16___024root___eval(VCLA_HAN_PG_16___024root* vlSelf);

void VCLA_HAN_PG_16::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCLA_HAN_PG_16::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCLA_HAN_PG_16___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCLA_HAN_PG_16___024root___eval_static(&(vlSymsp->TOP));
        VCLA_HAN_PG_16___024root___eval_initial(&(vlSymsp->TOP));
        VCLA_HAN_PG_16___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCLA_HAN_PG_16___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCLA_HAN_PG_16::eventsPending() { return false; }

uint64_t VCLA_HAN_PG_16::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCLA_HAN_PG_16::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCLA_HAN_PG_16___024root___eval_final(VCLA_HAN_PG_16___024root* vlSelf);

VL_ATTR_COLD void VCLA_HAN_PG_16::final() {
    VCLA_HAN_PG_16___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCLA_HAN_PG_16::hierName() const { return vlSymsp->name(); }
const char* VCLA_HAN_PG_16::modelName() const { return "VCLA_HAN_PG_16"; }
unsigned VCLA_HAN_PG_16::threads() const { return 1; }
