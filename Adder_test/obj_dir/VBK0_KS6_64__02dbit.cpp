// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBK0_KS6_64__02dbit.h"
#include "VBK0_KS6_64__02dbit__Syms.h"

//============================================================
// Constructors

VBK0_KS6_64__02dbit::VBK0_KS6_64__02dbit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBK0_KS6_64__02dbit__Syms(contextp(), _vcname__, this)}
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

VBK0_KS6_64__02dbit::VBK0_KS6_64__02dbit(const char* _vcname__)
    : VBK0_KS6_64__02dbit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBK0_KS6_64__02dbit::~VBK0_KS6_64__02dbit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBK0_KS6_64__02dbit___024root___eval_debug_assertions(VBK0_KS6_64__02dbit___024root* vlSelf);
#endif  // VL_DEBUG
void VBK0_KS6_64__02dbit___024root___eval_static(VBK0_KS6_64__02dbit___024root* vlSelf);
void VBK0_KS6_64__02dbit___024root___eval_initial(VBK0_KS6_64__02dbit___024root* vlSelf);
void VBK0_KS6_64__02dbit___024root___eval_settle(VBK0_KS6_64__02dbit___024root* vlSelf);
void VBK0_KS6_64__02dbit___024root___eval(VBK0_KS6_64__02dbit___024root* vlSelf);

void VBK0_KS6_64__02dbit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBK0_KS6_64__02dbit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBK0_KS6_64__02dbit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBK0_KS6_64__02dbit___024root___eval_static(&(vlSymsp->TOP));
        VBK0_KS6_64__02dbit___024root___eval_initial(&(vlSymsp->TOP));
        VBK0_KS6_64__02dbit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBK0_KS6_64__02dbit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBK0_KS6_64__02dbit::eventsPending() { return false; }

uint64_t VBK0_KS6_64__02dbit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBK0_KS6_64__02dbit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBK0_KS6_64__02dbit___024root___eval_final(VBK0_KS6_64__02dbit___024root* vlSelf);

VL_ATTR_COLD void VBK0_KS6_64__02dbit::final() {
    VBK0_KS6_64__02dbit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBK0_KS6_64__02dbit::hierName() const { return vlSymsp->name(); }
const char* VBK0_KS6_64__02dbit::modelName() const { return "VBK0_KS6_64__02dbit"; }
unsigned VBK0_KS6_64__02dbit::threads() const { return 1; }
