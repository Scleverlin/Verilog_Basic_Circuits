// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vks_adder_3.h"
#include "Vks_adder_3__Syms.h"

//============================================================
// Constructors

Vks_adder_3::Vks_adder_3(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vks_adder_3__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , cin{vlSymsp->TOP.cin}
    , cout{vlSymsp->TOP.cout}
    , sum{vlSymsp->TOP.sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vks_adder_3::Vks_adder_3(const char* _vcname__)
    : Vks_adder_3(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vks_adder_3::~Vks_adder_3() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vks_adder_3___024root___eval_initial(Vks_adder_3___024root* vlSelf);
void Vks_adder_3___024root___eval_settle(Vks_adder_3___024root* vlSelf);
void Vks_adder_3___024root___eval(Vks_adder_3___024root* vlSelf);
#ifdef VL_DEBUG
void Vks_adder_3___024root___eval_debug_assertions(Vks_adder_3___024root* vlSelf);
#endif  // VL_DEBUG
void Vks_adder_3___024root___final(Vks_adder_3___024root* vlSelf);

static void _eval_initial_loop(Vks_adder_3__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vks_adder_3___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vks_adder_3___024root___eval_settle(&(vlSymsp->TOP));
        Vks_adder_3___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vks_adder_3::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vks_adder_3::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vks_adder_3___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vks_adder_3___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vks_adder_3::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vks_adder_3::final() {
    Vks_adder_3___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vks_adder_3::hierName() const { return vlSymsp->name(); }
const char* Vks_adder_3::modelName() const { return "Vks_adder_3"; }
unsigned Vks_adder_3::threads() const { return 1; }
