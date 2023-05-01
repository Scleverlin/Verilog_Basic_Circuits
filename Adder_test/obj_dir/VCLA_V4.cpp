// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCLA_V4.h"
#include "VCLA_V4__Syms.h"

//============================================================
// Constructors

VCLA_V4::VCLA_V4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCLA_V4__Syms(contextp(), _vcname__, this)}
    , cin{vlSymsp->TOP.cin}
    , cout{vlSymsp->TOP.cout}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , sum{vlSymsp->TOP.sum}
    , __PVT__CLA_V4_64__DOT__u1{vlSymsp->TOP.__PVT__CLA_V4_64__DOT__u1}
    , __PVT__CLA_V4_64__DOT__u2{vlSymsp->TOP.__PVT__CLA_V4_64__DOT__u2}
    , __PVT__CLA_V4_64__DOT__u3{vlSymsp->TOP.__PVT__CLA_V4_64__DOT__u3}
    , __PVT__CLA_V4_64__DOT__u4{vlSymsp->TOP.__PVT__CLA_V4_64__DOT__u4}
    , __PVT__CLA_V4_64__DOT__u5{vlSymsp->TOP.__PVT__CLA_V4_64__DOT__u5}
    , __PVT__CLA_V4_64__DOT__u6{vlSymsp->TOP.__PVT__CLA_V4_64__DOT__u6}
    , __PVT__CLA_V4_64__DOT__u7{vlSymsp->TOP.__PVT__CLA_V4_64__DOT__u7}
    , __PVT__CLA_V4_64__DOT__u8{vlSymsp->TOP.__PVT__CLA_V4_64__DOT__u8}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCLA_V4::VCLA_V4(const char* _vcname__)
    : VCLA_V4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCLA_V4::~VCLA_V4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCLA_V4___024root___eval_debug_assertions(VCLA_V4___024root* vlSelf);
#endif  // VL_DEBUG
void VCLA_V4___024root___eval_static(VCLA_V4___024root* vlSelf);
void VCLA_V4___024root___eval_initial(VCLA_V4___024root* vlSelf);
void VCLA_V4___024root___eval_settle(VCLA_V4___024root* vlSelf);
void VCLA_V4___024root___eval(VCLA_V4___024root* vlSelf);

void VCLA_V4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCLA_V4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCLA_V4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCLA_V4___024root___eval_static(&(vlSymsp->TOP));
        VCLA_V4___024root___eval_initial(&(vlSymsp->TOP));
        VCLA_V4___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCLA_V4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCLA_V4::eventsPending() { return false; }

uint64_t VCLA_V4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCLA_V4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCLA_V4___024root___eval_final(VCLA_V4___024root* vlSelf);

VL_ATTR_COLD void VCLA_V4::final() {
    VCLA_V4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCLA_V4::hierName() const { return vlSymsp->name(); }
const char* VCLA_V4::modelName() const { return "VCLA_V4"; }
unsigned VCLA_V4::threads() const { return 1; }
