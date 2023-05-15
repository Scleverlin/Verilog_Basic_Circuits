// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBK_adder_8bit.h"
#include "VBK_adder_8bit__Syms.h"

//============================================================
// Constructors

VBK_adder_8bit::VBK_adder_8bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBK_adder_8bit__Syms(contextp(), _vcname__, this)}
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

VBK_adder_8bit::VBK_adder_8bit(const char* _vcname__)
    : VBK_adder_8bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBK_adder_8bit::~VBK_adder_8bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBK_adder_8bit___024root___eval_debug_assertions(VBK_adder_8bit___024root* vlSelf);
#endif  // VL_DEBUG
void VBK_adder_8bit___024root___eval_static(VBK_adder_8bit___024root* vlSelf);
void VBK_adder_8bit___024root___eval_initial(VBK_adder_8bit___024root* vlSelf);
void VBK_adder_8bit___024root___eval_settle(VBK_adder_8bit___024root* vlSelf);
void VBK_adder_8bit___024root___eval(VBK_adder_8bit___024root* vlSelf);

void VBK_adder_8bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBK_adder_8bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBK_adder_8bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBK_adder_8bit___024root___eval_static(&(vlSymsp->TOP));
        VBK_adder_8bit___024root___eval_initial(&(vlSymsp->TOP));
        VBK_adder_8bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBK_adder_8bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBK_adder_8bit::eventsPending() { return false; }

uint64_t VBK_adder_8bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBK_adder_8bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBK_adder_8bit___024root___eval_final(VBK_adder_8bit___024root* vlSelf);

VL_ATTR_COLD void VBK_adder_8bit::final() {
    VBK_adder_8bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBK_adder_8bit::hierName() const { return vlSymsp->name(); }
const char* VBK_adder_8bit::modelName() const { return "VBK_adder_8bit"; }
unsigned VBK_adder_8bit::threads() const { return 1; }
