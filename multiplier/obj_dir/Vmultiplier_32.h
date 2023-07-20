// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMULTIPLIER_32_H_
#define VERILATED_VMULTIPLIER_32_H_  // guard

#include "verilated.h"

class Vmultiplier_32__Syms;
class Vmultiplier_32___024root;
class Vmultiplier_32_HC_64;


// This class is the main interface to the Verilated model
class Vmultiplier_32 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmultiplier_32__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN(&a,31,0);
    VL_IN(&b,31,0);
    VL_OUT64(&out,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_0;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_1;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_2;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_3;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_4;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_5;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_6;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_7;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_8;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_9;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_10;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_11;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_12;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_13;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_14;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_15;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_16;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_17;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_18;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_19;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_20;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_21;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_22;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_23;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_24;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_25;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_26;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_27;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_28;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_29;
    Vmultiplier_32_HC_64* const __PVT__multiplier_32__DOT__hc_64_30;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmultiplier_32___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmultiplier_32(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmultiplier_32(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmultiplier_32();
  private:
    VL_UNCOPYABLE(Vmultiplier_32);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
