// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdff.h"
#include "Vdff__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdff::Vdff(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdff__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , data{vlSymsp->TOP.data}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdff::Vdff(const char* _vcname__)
    : Vdff(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdff::~Vdff() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdff___024root___eval_debug_assertions(Vdff___024root* vlSelf);
#endif  // VL_DEBUG
void Vdff___024root___eval_static(Vdff___024root* vlSelf);
void Vdff___024root___eval_initial(Vdff___024root* vlSelf);
void Vdff___024root___eval_settle(Vdff___024root* vlSelf);
void Vdff___024root___eval(Vdff___024root* vlSelf);

void Vdff::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdff::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdff___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdff___024root___eval_static(&(vlSymsp->TOP));
        Vdff___024root___eval_initial(&(vlSymsp->TOP));
        Vdff___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdff___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdff::eventsPending() { return false; }

uint64_t Vdff::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdff::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdff___024root___eval_final(Vdff___024root* vlSelf);

VL_ATTR_COLD void Vdff::final() {
    Vdff___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdff::hierName() const { return vlSymsp->name(); }
const char* Vdff::modelName() const { return "Vdff"; }
unsigned Vdff::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdff::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdff___024root__trace_init_top(Vdff___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdff___024root*>(voidSelf);
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdff___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdff___024root__trace_register(Vdff___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdff::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdff::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdff___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
