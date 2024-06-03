// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vuart_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vuart_tb::Vuart_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vuart_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vuart_tb::Vuart_tb(const char* _vcname__)
    : Vuart_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vuart_tb::~Vuart_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vuart_tb___024root___eval_debug_assertions(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vuart_tb___024root___eval_static(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___eval_initial(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___eval_settle(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___eval(Vuart_tb___024root* vlSelf);

void Vuart_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuart_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vuart_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vuart_tb___024root___eval_static(&(vlSymsp->TOP));
        Vuart_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vuart_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vuart_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vuart_tb::eventsPending() { return false; }

uint64_t Vuart_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vuart_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vuart_tb___024root___eval_final(Vuart_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tb::final() {
    Vuart_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vuart_tb::hierName() const { return vlSymsp->name(); }
const char* Vuart_tb::modelName() const { return "Vuart_tb"; }
unsigned Vuart_tb::threads() const { return 1; }
void Vuart_tb::prepareClone() const { contextp()->prepareClone(); }
void Vuart_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vuart_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vuart_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vuart_tb___024root__trace_init_top(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vuart_tb___024root__trace_decl_types(tracep);
    Vuart_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuart_tb___024root__trace_register(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vuart_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vuart_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vuart_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
