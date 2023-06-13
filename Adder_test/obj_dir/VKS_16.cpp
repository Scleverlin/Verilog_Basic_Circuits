// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VKS_16.h"
#include "VKS_16__Syms.h"

//============================================================
// Constructors

VKS_16::VKS_16(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VKS_16__Syms(contextp(), _vcname__, this)}
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

VKS_16::VKS_16(const char* _vcname__)
    : VKS_16(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VKS_16::~VKS_16() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VKS_16___024root___eval_debug_assertions(VKS_16___024root* vlSelf);
#endif  // VL_DEBUG
void VKS_16___024root___eval_static(VKS_16___024root* vlSelf);
void VKS_16___024root___eval_initial(VKS_16___024root* vlSelf);
void VKS_16___024root___eval_settle(VKS_16___024root* vlSelf);
void VKS_16___024root___eval(VKS_16___024root* vlSelf);

void VKS_16::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VKS_16::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VKS_16___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VKS_16___024root___eval_static(&(vlSymsp->TOP));
        VKS_16___024root___eval_initial(&(vlSymsp->TOP));
        VKS_16___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VKS_16___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VKS_16::eventsPending() { return false; }

uint64_t VKS_16::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VKS_16::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VKS_16___024root___eval_final(VKS_16___024root* vlSelf);

VL_ATTR_COLD void VKS_16::final() {
    VKS_16___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VKS_16::hierName() const { return vlSymsp->name(); }
const char* VKS_16::modelName() const { return "VKS_16"; }
unsigned VKS_16::threads() const { return 1; }
