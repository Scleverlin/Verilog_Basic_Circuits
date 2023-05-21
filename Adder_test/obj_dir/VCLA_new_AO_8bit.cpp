// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCLA_new_AO_8bit.h"
#include "VCLA_new_AO_8bit__Syms.h"

//============================================================
// Constructors

VCLA_new_AO_8bit::VCLA_new_AO_8bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCLA_new_AO_8bit__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , cin{vlSymsp->TOP.cin}
    , sum{vlSymsp->TOP.sum}
    , cout{vlSymsp->TOP.cout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCLA_new_AO_8bit::VCLA_new_AO_8bit(const char* _vcname__)
    : VCLA_new_AO_8bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCLA_new_AO_8bit::~VCLA_new_AO_8bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCLA_new_AO_8bit___024root___eval_debug_assertions(VCLA_new_AO_8bit___024root* vlSelf);
#endif  // VL_DEBUG
void VCLA_new_AO_8bit___024root___eval_static(VCLA_new_AO_8bit___024root* vlSelf);
void VCLA_new_AO_8bit___024root___eval_initial(VCLA_new_AO_8bit___024root* vlSelf);
void VCLA_new_AO_8bit___024root___eval_settle(VCLA_new_AO_8bit___024root* vlSelf);
void VCLA_new_AO_8bit___024root___eval(VCLA_new_AO_8bit___024root* vlSelf);

void VCLA_new_AO_8bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCLA_new_AO_8bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCLA_new_AO_8bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCLA_new_AO_8bit___024root___eval_static(&(vlSymsp->TOP));
        VCLA_new_AO_8bit___024root___eval_initial(&(vlSymsp->TOP));
        VCLA_new_AO_8bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCLA_new_AO_8bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCLA_new_AO_8bit::eventsPending() { return false; }

uint64_t VCLA_new_AO_8bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCLA_new_AO_8bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCLA_new_AO_8bit___024root___eval_final(VCLA_new_AO_8bit___024root* vlSelf);

VL_ATTR_COLD void VCLA_new_AO_8bit::final() {
    VCLA_new_AO_8bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCLA_new_AO_8bit::hierName() const { return vlSymsp->name(); }
const char* VCLA_new_AO_8bit::modelName() const { return "VCLA_new_AO_8bit"; }
unsigned VCLA_new_AO_8bit::threads() const { return 1; }
