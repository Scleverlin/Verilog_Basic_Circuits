// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbooth_4_8_bit.h"
#include "Vbooth_4_8_bit__Syms.h"

//============================================================
// Constructors

Vbooth_4_8_bit::Vbooth_4_8_bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbooth_4_8_bit__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbooth_4_8_bit::Vbooth_4_8_bit(const char* _vcname__)
    : Vbooth_4_8_bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbooth_4_8_bit::~Vbooth_4_8_bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbooth_4_8_bit___024root___eval_debug_assertions(Vbooth_4_8_bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vbooth_4_8_bit___024root___eval_static(Vbooth_4_8_bit___024root* vlSelf);
void Vbooth_4_8_bit___024root___eval_initial(Vbooth_4_8_bit___024root* vlSelf);
void Vbooth_4_8_bit___024root___eval_settle(Vbooth_4_8_bit___024root* vlSelf);
void Vbooth_4_8_bit___024root___eval(Vbooth_4_8_bit___024root* vlSelf);

void Vbooth_4_8_bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbooth_4_8_bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbooth_4_8_bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbooth_4_8_bit___024root___eval_static(&(vlSymsp->TOP));
        Vbooth_4_8_bit___024root___eval_initial(&(vlSymsp->TOP));
        Vbooth_4_8_bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbooth_4_8_bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbooth_4_8_bit::eventsPending() { return false; }

uint64_t Vbooth_4_8_bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbooth_4_8_bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbooth_4_8_bit___024root___eval_final(Vbooth_4_8_bit___024root* vlSelf);

VL_ATTR_COLD void Vbooth_4_8_bit::final() {
    Vbooth_4_8_bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbooth_4_8_bit::hierName() const { return vlSymsp->name(); }
const char* Vbooth_4_8_bit::modelName() const { return "Vbooth_4_8_bit"; }
unsigned Vbooth_4_8_bit::threads() const { return 1; }
