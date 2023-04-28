// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtemplate.h"
#include "Vtemplate__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtemplate::Vtemplate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtemplate__Syms(contextp(), _vcname__, this)}
    , io_clk{vlSymsp->TOP.io_clk}
    , io_rst_n{vlSymsp->TOP.io_rst_n}
    , io_start{vlSymsp->TOP.io_start}
    , io_data{vlSymsp->TOP.io_data}
    , io_rs232_tx{vlSymsp->TOP.io_rs232_tx}
    , io_done{vlSymsp->TOP.io_done}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtemplate::Vtemplate(const char* _vcname__)
    : Vtemplate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtemplate::~Vtemplate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtemplate___024root___eval_debug_assertions(Vtemplate___024root* vlSelf);
#endif  // VL_DEBUG
void Vtemplate___024root___eval_static(Vtemplate___024root* vlSelf);
void Vtemplate___024root___eval_initial(Vtemplate___024root* vlSelf);
void Vtemplate___024root___eval_settle(Vtemplate___024root* vlSelf);
void Vtemplate___024root___eval(Vtemplate___024root* vlSelf);

void Vtemplate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtemplate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtemplate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtemplate___024root___eval_static(&(vlSymsp->TOP));
        Vtemplate___024root___eval_initial(&(vlSymsp->TOP));
        Vtemplate___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtemplate___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtemplate::eventsPending() { return false; }

uint64_t Vtemplate::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtemplate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtemplate___024root___eval_final(Vtemplate___024root* vlSelf);

VL_ATTR_COLD void Vtemplate::final() {
    Vtemplate___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtemplate::hierName() const { return vlSymsp->name(); }
const char* Vtemplate::modelName() const { return "Vtemplate"; }
unsigned Vtemplate::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtemplate::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtemplate___024root__trace_init_top(Vtemplate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtemplate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtemplate___024root*>(voidSelf);
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtemplate___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtemplate___024root__trace_register(Vtemplate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtemplate::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtemplate::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtemplate___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
