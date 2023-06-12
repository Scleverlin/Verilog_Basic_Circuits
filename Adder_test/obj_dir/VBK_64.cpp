// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBK_64.h"
#include "VBK_64__Syms.h"

//============================================================
// Constructors

VBK_64::VBK_64(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBK_64__Syms(contextp(), _vcname__, this)}
    , Cin{vlSymsp->TOP.Cin}
    , cout{vlSymsp->TOP.cout}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , S{vlSymsp->TOP.S}
    , __PVT__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh{vlSymsp->TOP.__PVT__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh}
    , __PVT__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh{vlSymsp->TOP.__PVT__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VBK_64::VBK_64(const char* _vcname__)
    : VBK_64(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBK_64::~VBK_64() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBK_64___024root___eval_debug_assertions(VBK_64___024root* vlSelf);
#endif  // VL_DEBUG
void VBK_64___024root___eval_static(VBK_64___024root* vlSelf);
void VBK_64___024root___eval_initial(VBK_64___024root* vlSelf);
void VBK_64___024root___eval_settle(VBK_64___024root* vlSelf);
void VBK_64___024root___eval(VBK_64___024root* vlSelf);

void VBK_64::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBK_64::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBK_64___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBK_64___024root___eval_static(&(vlSymsp->TOP));
        VBK_64___024root___eval_initial(&(vlSymsp->TOP));
        VBK_64___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBK_64___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBK_64::eventsPending() { return false; }

uint64_t VBK_64::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBK_64::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBK_64___024root___eval_final(VBK_64___024root* vlSelf);

VL_ATTR_COLD void VBK_64::final() {
    VBK_64___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBK_64::hierName() const { return vlSymsp->name(); }
const char* VBK_64::modelName() const { return "VBK_64"; }
unsigned VBK_64::threads() const { return 1; }
