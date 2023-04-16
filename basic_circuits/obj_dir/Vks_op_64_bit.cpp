// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vks_op_64_bit.h"
#include "Vks_op_64_bit__Syms.h"

//============================================================
// Constructors

Vks_op_64_bit::Vks_op_64_bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vks_op_64_bit__Syms(contextp(), _vcname__, this)}
    , cin{vlSymsp->TOP.cin}
    , cout{vlSymsp->TOP.cout}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , sum{vlSymsp->TOP.sum}
    , __PVT__ks_op_64_bit__DOT__u1{vlSymsp->TOP.__PVT__ks_op_64_bit__DOT__u1}
    , __PVT__ks_op_64_bit__DOT__u2{vlSymsp->TOP.__PVT__ks_op_64_bit__DOT__u2}
    , __PVT__ks_op_64_bit__DOT__u3{vlSymsp->TOP.__PVT__ks_op_64_bit__DOT__u3}
    , __PVT__ks_op_64_bit__DOT__u4{vlSymsp->TOP.__PVT__ks_op_64_bit__DOT__u4}
    , __PVT__ks_op_64_bit__DOT__u5{vlSymsp->TOP.__PVT__ks_op_64_bit__DOT__u5}
    , __PVT__ks_op_64_bit__DOT__u6{vlSymsp->TOP.__PVT__ks_op_64_bit__DOT__u6}
    , __PVT__ks_op_64_bit__DOT__u7{vlSymsp->TOP.__PVT__ks_op_64_bit__DOT__u7}
    , __PVT__ks_op_64_bit__DOT__u8{vlSymsp->TOP.__PVT__ks_op_64_bit__DOT__u8}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vks_op_64_bit::Vks_op_64_bit(const char* _vcname__)
    : Vks_op_64_bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vks_op_64_bit::~Vks_op_64_bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vks_op_64_bit___024root___eval_initial(Vks_op_64_bit___024root* vlSelf);
void Vks_op_64_bit___024root___eval_settle(Vks_op_64_bit___024root* vlSelf);
void Vks_op_64_bit___024root___eval(Vks_op_64_bit___024root* vlSelf);
#ifdef VL_DEBUG
void Vks_op_64_bit___024root___eval_debug_assertions(Vks_op_64_bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vks_op_64_bit___024root___final(Vks_op_64_bit___024root* vlSelf);

static void _eval_initial_loop(Vks_op_64_bit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vks_op_64_bit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vks_op_64_bit___024root___eval_settle(&(vlSymsp->TOP));
        Vks_op_64_bit___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vks_op_64_bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vks_op_64_bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vks_op_64_bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vks_op_64_bit___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vks_op_64_bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vks_op_64_bit::final() {
    Vks_op_64_bit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vks_op_64_bit::hierName() const { return vlSymsp->name(); }
const char* Vks_op_64_bit::modelName() const { return "Vks_op_64_bit"; }
unsigned Vks_op_64_bit::threads() const { return 1; }
