// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vks_new_test.h"
#include "Vks_new_test__Syms.h"

//============================================================
// Constructors

Vks_new_test::Vks_new_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vks_new_test__Syms(contextp(), _vcname__, this)}
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

Vks_new_test::Vks_new_test(const char* _vcname__)
    : Vks_new_test(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vks_new_test::~Vks_new_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vks_new_test___024root___eval_initial(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___eval_settle(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___eval(Vks_new_test___024root* vlSelf);
QData Vks_new_test___024root___change_request(Vks_new_test___024root* vlSelf);
#ifdef VL_DEBUG
void Vks_new_test___024root___eval_debug_assertions(Vks_new_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vks_new_test___024root___final(Vks_new_test___024root* vlSelf);

static void _eval_initial_loop(Vks_new_test__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vks_new_test___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vks_new_test___024root___eval_settle(&(vlSymsp->TOP));
        Vks_new_test___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vks_new_test___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ks_new_test.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vks_new_test___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vks_new_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vks_new_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vks_new_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vks_new_test___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vks_new_test___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ks_new_test.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vks_new_test___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vks_new_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vks_new_test::final() {
    Vks_new_test___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vks_new_test::hierName() const { return vlSymsp->name(); }
const char* Vks_new_test::modelName() const { return "Vks_new_test"; }
unsigned Vks_new_test::threads() const { return 1; }
