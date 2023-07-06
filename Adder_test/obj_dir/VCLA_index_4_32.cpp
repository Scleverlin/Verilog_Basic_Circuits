// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCLA_index_4_32.h"
#include "VCLA_index_4_32__Syms.h"

//============================================================
// Constructors

VCLA_index_4_32::VCLA_index_4_32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCLA_index_4_32__Syms(contextp(), _vcname__, this)}
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

VCLA_index_4_32::VCLA_index_4_32(const char* _vcname__)
    : VCLA_index_4_32(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCLA_index_4_32::~VCLA_index_4_32() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCLA_index_4_32___024root___eval_debug_assertions(VCLA_index_4_32___024root* vlSelf);
#endif  // VL_DEBUG
void VCLA_index_4_32___024root___eval_static(VCLA_index_4_32___024root* vlSelf);
void VCLA_index_4_32___024root___eval_initial(VCLA_index_4_32___024root* vlSelf);
void VCLA_index_4_32___024root___eval_settle(VCLA_index_4_32___024root* vlSelf);
void VCLA_index_4_32___024root___eval(VCLA_index_4_32___024root* vlSelf);

void VCLA_index_4_32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCLA_index_4_32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCLA_index_4_32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCLA_index_4_32___024root___eval_static(&(vlSymsp->TOP));
        VCLA_index_4_32___024root___eval_initial(&(vlSymsp->TOP));
        VCLA_index_4_32___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCLA_index_4_32___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCLA_index_4_32::eventsPending() { return false; }

uint64_t VCLA_index_4_32::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCLA_index_4_32::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCLA_index_4_32___024root___eval_final(VCLA_index_4_32___024root* vlSelf);

VL_ATTR_COLD void VCLA_index_4_32::final() {
    VCLA_index_4_32___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCLA_index_4_32::hierName() const { return vlSymsp->name(); }
const char* VCLA_index_4_32::modelName() const { return "VCLA_index_4_32"; }
unsigned VCLA_index_4_32::threads() const { return 1; }
