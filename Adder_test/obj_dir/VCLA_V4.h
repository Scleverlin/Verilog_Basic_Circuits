// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCLA_V4_H_
#define VERILATED_VCLA_V4_H_  // guard

#include "verilated.h"

class VCLA_V4__Syms;
class VCLA_V4___024root;
class VCLA_V4_CLA_v4_8_bit;


// This class is the main interface to the Verilated model
class VCLA_V4 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VCLA_V4__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&cin,0,0);
    VL_OUT8(&cout,0,0);
    VL_IN64(&a,63,0);
    VL_IN64(&b,63,0);
    VL_OUT64(&sum,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VCLA_V4_CLA_v4_8_bit* const __PVT__CLA_V4_64__DOT__u1;
    VCLA_V4_CLA_v4_8_bit* const __PVT__CLA_V4_64__DOT__u2;
    VCLA_V4_CLA_v4_8_bit* const __PVT__CLA_V4_64__DOT__u3;
    VCLA_V4_CLA_v4_8_bit* const __PVT__CLA_V4_64__DOT__u4;
    VCLA_V4_CLA_v4_8_bit* const __PVT__CLA_V4_64__DOT__u5;
    VCLA_V4_CLA_v4_8_bit* const __PVT__CLA_V4_64__DOT__u6;
    VCLA_V4_CLA_v4_8_bit* const __PVT__CLA_V4_64__DOT__u7;
    VCLA_V4_CLA_v4_8_bit* const __PVT__CLA_V4_64__DOT__u8;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VCLA_V4___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VCLA_V4(VerilatedContext* contextp, const char* name = "TOP");
    explicit VCLA_V4(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VCLA_V4();
  private:
    VL_UNCOPYABLE(VCLA_V4);  ///< Copying not allowed

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