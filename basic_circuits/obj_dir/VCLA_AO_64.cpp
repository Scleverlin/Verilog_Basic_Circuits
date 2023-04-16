// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCLA_AO_64.h"
#include "VCLA_AO_64__Syms.h"

//============================================================
// Constructors

VCLA_AO_64::VCLA_AO_64(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCLA_AO_64__Syms(contextp(), _vcname__, this)}
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

VCLA_AO_64::VCLA_AO_64(const char* _vcname__)
    : VCLA_AO_64(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCLA_AO_64::~VCLA_AO_64() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VCLA_AO_64___024root___eval_initial(VCLA_AO_64___024root* vlSelf);
void VCLA_AO_64___024root___eval_settle(VCLA_AO_64___024root* vlSelf);
void VCLA_AO_64___024root___eval(VCLA_AO_64___024root* vlSelf);
QData VCLA_AO_64___024root___change_request(VCLA_AO_64___024root* vlSelf);
#ifdef VL_DEBUG
void VCLA_AO_64___024root___eval_debug_assertions(VCLA_AO_64___024root* vlSelf);
#endif  // VL_DEBUG
void VCLA_AO_64___024root___final(VCLA_AO_64___024root* vlSelf);

static void _eval_initial_loop(VCLA_AO_64__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCLA_AO_64___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCLA_AO_64___024root___eval_settle(&(vlSymsp->TOP));
        VCLA_AO_64___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VCLA_AO_64___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("CLA_AO_64.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VCLA_AO_64___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCLA_AO_64::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCLA_AO_64::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCLA_AO_64___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCLA_AO_64___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VCLA_AO_64___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("CLA_AO_64.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VCLA_AO_64___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VCLA_AO_64::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VCLA_AO_64::final() {
    VCLA_AO_64___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCLA_AO_64::hierName() const { return vlSymsp->name(); }
const char* VCLA_AO_64::modelName() const { return "VCLA_AO_64"; }
unsigned VCLA_AO_64::threads() const { return 1; }
