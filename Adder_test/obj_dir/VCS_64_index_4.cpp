// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCS_64_index_4.h"
#include "VCS_64_index_4__Syms.h"

//============================================================
// Constructors

VCS_64_index_4::VCS_64_index_4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCS_64_index_4__Syms(contextp(), _vcname__, this)}
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

VCS_64_index_4::VCS_64_index_4(const char* _vcname__)
    : VCS_64_index_4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCS_64_index_4::~VCS_64_index_4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCS_64_index_4___024root___eval_debug_assertions(VCS_64_index_4___024root* vlSelf);
#endif  // VL_DEBUG
void VCS_64_index_4___024root___eval_static(VCS_64_index_4___024root* vlSelf);
void VCS_64_index_4___024root___eval_initial(VCS_64_index_4___024root* vlSelf);
void VCS_64_index_4___024root___eval_settle(VCS_64_index_4___024root* vlSelf);
void VCS_64_index_4___024root___eval(VCS_64_index_4___024root* vlSelf);

void VCS_64_index_4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCS_64_index_4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCS_64_index_4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCS_64_index_4___024root___eval_static(&(vlSymsp->TOP));
        VCS_64_index_4___024root___eval_initial(&(vlSymsp->TOP));
        VCS_64_index_4___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCS_64_index_4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCS_64_index_4::eventsPending() { return false; }

uint64_t VCS_64_index_4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCS_64_index_4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCS_64_index_4___024root___eval_final(VCS_64_index_4___024root* vlSelf);

VL_ATTR_COLD void VCS_64_index_4::final() {
    VCS_64_index_4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCS_64_index_4::hierName() const { return vlSymsp->name(); }
const char* VCS_64_index_4::modelName() const { return "VCS_64_index_4"; }
unsigned VCS_64_index_4::threads() const { return 1; }
