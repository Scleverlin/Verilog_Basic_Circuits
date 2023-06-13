// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VHC_16.h"
#include "VHC_16__Syms.h"

//============================================================
// Constructors

VHC_16::VHC_16(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VHC_16__Syms(contextp(), _vcname__, this)}
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

VHC_16::VHC_16(const char* _vcname__)
    : VHC_16(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VHC_16::~VHC_16() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VHC_16___024root___eval_debug_assertions(VHC_16___024root* vlSelf);
#endif  // VL_DEBUG
void VHC_16___024root___eval_static(VHC_16___024root* vlSelf);
void VHC_16___024root___eval_initial(VHC_16___024root* vlSelf);
void VHC_16___024root___eval_settle(VHC_16___024root* vlSelf);
void VHC_16___024root___eval(VHC_16___024root* vlSelf);

void VHC_16::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHC_16::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VHC_16___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VHC_16___024root___eval_static(&(vlSymsp->TOP));
        VHC_16___024root___eval_initial(&(vlSymsp->TOP));
        VHC_16___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VHC_16___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VHC_16::eventsPending() { return false; }

uint64_t VHC_16::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VHC_16::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VHC_16___024root___eval_final(VHC_16___024root* vlSelf);

VL_ATTR_COLD void VHC_16::final() {
    VHC_16___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VHC_16::hierName() const { return vlSymsp->name(); }
const char* VHC_16::modelName() const { return "VHC_16"; }
unsigned VHC_16::threads() const { return 1; }
