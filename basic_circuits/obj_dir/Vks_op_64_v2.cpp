// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vks_op_64_v2.h"
#include "Vks_op_64_v2__Syms.h"

//============================================================
// Constructors

Vks_op_64_v2::Vks_op_64_v2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vks_op_64_v2__Syms(contextp(), _vcname__, this)}
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

Vks_op_64_v2::Vks_op_64_v2(const char* _vcname__)
    : Vks_op_64_v2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vks_op_64_v2::~Vks_op_64_v2() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vks_op_64_v2___024root___eval_initial(Vks_op_64_v2___024root* vlSelf);
void Vks_op_64_v2___024root___eval_settle(Vks_op_64_v2___024root* vlSelf);
void Vks_op_64_v2___024root___eval(Vks_op_64_v2___024root* vlSelf);
QData Vks_op_64_v2___024root___change_request(Vks_op_64_v2___024root* vlSelf);
#ifdef VL_DEBUG
void Vks_op_64_v2___024root___eval_debug_assertions(Vks_op_64_v2___024root* vlSelf);
#endif  // VL_DEBUG
void Vks_op_64_v2___024root___final(Vks_op_64_v2___024root* vlSelf);

static void _eval_initial_loop(Vks_op_64_v2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vks_op_64_v2___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vks_op_64_v2___024root___eval_settle(&(vlSymsp->TOP));
        Vks_op_64_v2___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vks_op_64_v2___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ks_op_64_v2.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vks_op_64_v2___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vks_op_64_v2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vks_op_64_v2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vks_op_64_v2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vks_op_64_v2___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vks_op_64_v2___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ks_op_64_v2.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vks_op_64_v2___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vks_op_64_v2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vks_op_64_v2::final() {
    Vks_op_64_v2___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vks_op_64_v2::hierName() const { return vlSymsp->name(); }
const char* Vks_op_64_v2::modelName() const { return "Vks_op_64_v2"; }
unsigned Vks_op_64_v2::threads() const { return 1; }
