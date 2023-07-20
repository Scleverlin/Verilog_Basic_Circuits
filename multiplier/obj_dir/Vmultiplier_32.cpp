// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmultiplier_32.h"
#include "Vmultiplier_32__Syms.h"

//============================================================
// Constructors

Vmultiplier_32::Vmultiplier_32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmultiplier_32__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , out{vlSymsp->TOP.out}
    , __PVT__multiplier_32__DOT__hc_64_0{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_0}
    , __PVT__multiplier_32__DOT__hc_64_1{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_1}
    , __PVT__multiplier_32__DOT__hc_64_2{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_2}
    , __PVT__multiplier_32__DOT__hc_64_3{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_3}
    , __PVT__multiplier_32__DOT__hc_64_4{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_4}
    , __PVT__multiplier_32__DOT__hc_64_5{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_5}
    , __PVT__multiplier_32__DOT__hc_64_6{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_6}
    , __PVT__multiplier_32__DOT__hc_64_7{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_7}
    , __PVT__multiplier_32__DOT__hc_64_8{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_8}
    , __PVT__multiplier_32__DOT__hc_64_9{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_9}
    , __PVT__multiplier_32__DOT__hc_64_10{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_10}
    , __PVT__multiplier_32__DOT__hc_64_11{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_11}
    , __PVT__multiplier_32__DOT__hc_64_12{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_12}
    , __PVT__multiplier_32__DOT__hc_64_13{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_13}
    , __PVT__multiplier_32__DOT__hc_64_14{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_14}
    , __PVT__multiplier_32__DOT__hc_64_15{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_15}
    , __PVT__multiplier_32__DOT__hc_64_16{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_16}
    , __PVT__multiplier_32__DOT__hc_64_17{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_17}
    , __PVT__multiplier_32__DOT__hc_64_18{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_18}
    , __PVT__multiplier_32__DOT__hc_64_19{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_19}
    , __PVT__multiplier_32__DOT__hc_64_20{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_20}
    , __PVT__multiplier_32__DOT__hc_64_21{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_21}
    , __PVT__multiplier_32__DOT__hc_64_22{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_22}
    , __PVT__multiplier_32__DOT__hc_64_23{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_23}
    , __PVT__multiplier_32__DOT__hc_64_24{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_24}
    , __PVT__multiplier_32__DOT__hc_64_25{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_25}
    , __PVT__multiplier_32__DOT__hc_64_26{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_26}
    , __PVT__multiplier_32__DOT__hc_64_27{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_27}
    , __PVT__multiplier_32__DOT__hc_64_28{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_28}
    , __PVT__multiplier_32__DOT__hc_64_29{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_29}
    , __PVT__multiplier_32__DOT__hc_64_30{vlSymsp->TOP.__PVT__multiplier_32__DOT__hc_64_30}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmultiplier_32::Vmultiplier_32(const char* _vcname__)
    : Vmultiplier_32(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmultiplier_32::~Vmultiplier_32() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmultiplier_32___024root___eval_debug_assertions(Vmultiplier_32___024root* vlSelf);
#endif  // VL_DEBUG
void Vmultiplier_32___024root___eval_static(Vmultiplier_32___024root* vlSelf);
void Vmultiplier_32___024root___eval_initial(Vmultiplier_32___024root* vlSelf);
void Vmultiplier_32___024root___eval_settle(Vmultiplier_32___024root* vlSelf);
void Vmultiplier_32___024root___eval(Vmultiplier_32___024root* vlSelf);

void Vmultiplier_32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmultiplier_32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmultiplier_32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmultiplier_32___024root___eval_static(&(vlSymsp->TOP));
        Vmultiplier_32___024root___eval_initial(&(vlSymsp->TOP));
        Vmultiplier_32___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmultiplier_32___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmultiplier_32::eventsPending() { return false; }

uint64_t Vmultiplier_32::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmultiplier_32::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmultiplier_32___024root___eval_final(Vmultiplier_32___024root* vlSelf);

VL_ATTR_COLD void Vmultiplier_32::final() {
    Vmultiplier_32___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmultiplier_32::hierName() const { return vlSymsp->name(); }
const char* Vmultiplier_32::modelName() const { return "Vmultiplier_32"; }
unsigned Vmultiplier_32::threads() const { return 1; }
