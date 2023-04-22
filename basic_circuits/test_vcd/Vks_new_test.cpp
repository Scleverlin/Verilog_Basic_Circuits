// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vks_new_test.h"
#include "Vks_new_test__Syms.h"
#include "verilated_vcd_c.h"

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
// Evaluation function

#ifdef VL_DEBUG
void Vks_new_test___024root___eval_debug_assertions(Vks_new_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vks_new_test___024root___eval_static(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___eval_initial(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___eval_settle(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___eval(Vks_new_test___024root* vlSelf);

void Vks_new_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vks_new_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vks_new_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vks_new_test___024root___eval_static(&(vlSymsp->TOP));
        Vks_new_test___024root___eval_initial(&(vlSymsp->TOP));
        Vks_new_test___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vks_new_test___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vks_new_test::eventsPending() { return false; }

uint64_t Vks_new_test::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vks_new_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vks_new_test___024root___eval_final(Vks_new_test___024root* vlSelf);

VL_ATTR_COLD void Vks_new_test::final() {
    Vks_new_test___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vks_new_test::hierName() const { return vlSymsp->name(); }
const char* Vks_new_test::modelName() const { return "Vks_new_test"; }
unsigned Vks_new_test::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vks_new_test::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vks_new_test___024root__trace_init_top(Vks_new_test___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vks_new_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vks_new_test___024root*>(voidSelf);
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vks_new_test___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vks_new_test___024root__trace_register(Vks_new_test___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vks_new_test::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vks_new_test::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vks_new_test___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
