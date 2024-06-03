// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tb.h for the primary calling header

#include "Vuart_tb__pch.h"
#include "Vuart_tb___024root.h"

VL_ATTR_COLD void Vuart_tb___024root___eval_static(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vuart_tb___024root___eval_final(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__stl(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vuart_tb___024root___eval_phase__stl(Vuart_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tb___024root___eval_settle(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vuart_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test/uart_tb.sv", 24, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vuart_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__stl(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_tb___024root___stl_sequent__TOP__0(Vuart_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tb___024root___eval_stl(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vuart_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vuart_tb__ConstPool__TABLE_h4eebfd9a_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vuart_tb__ConstPool__TABLE_hd476cfa5_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vuart_tb__ConstPool__TABLE_h6f4c0f52_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vuart_tb__ConstPool__TABLE_h6eeb59c9_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vuart_tb__ConstPool__TABLE_h6e51dc8e_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vuart_tb__ConstPool__TABLE_hcad76bad_0;

VL_ATTR_COLD void Vuart_tb___024root___stl_sequent__TOP__0(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*1:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->uart_tb__DOT__data_transmitted) 
                     << 4U) | (((IData)(vlSelf->uart_tb__DOT__tx_start) 
                                << 3U) | (((IData)(vlSelf->uart_tb__DOT__load) 
                                           << 2U) | (IData)(vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__c_state))));
    vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__n_state 
        = Vuart_tb__ConstPool__TABLE_h4eebfd9a_0[__Vtableidx1];
    __Vtableidx4 = vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__c_state;
    vlSelf->uart_tb__DOT__UART__DOT__bit_clr = Vuart_tb__ConstPool__TABLE_hd476cfa5_0
        [__Vtableidx4];
    vlSelf->uart_tb__DOT__UART__DOT__get_output = Vuart_tb__ConstPool__TABLE_h6f4c0f52_0
        [__Vtableidx4];
    vlSelf->uart_tb__DOT__UART__DOT__take_value = Vuart_tb__ConstPool__TABLE_h6eeb59c9_0
        [__Vtableidx4];
    vlSelf->uart_tb__DOT__UART__DOT__incre_counter 
        = Vuart_tb__ConstPool__TABLE_h6eeb59c9_0[__Vtableidx4];
    __Vtableidx2 = vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__c_state;
    vlSelf->uart_tb__DOT__UART__DOT__load_en = Vuart_tb__ConstPool__TABLE_h6e51dc8e_0
        [__Vtableidx2];
    vlSelf->uart_tb__DOT__UART__DOT__tx_enable = Vuart_tb__ConstPool__TABLE_h6eeb59c9_0
        [__Vtableidx2];
    vlSelf->uart_tb__DOT__UART__DOT__tx_sel = Vuart_tb__ConstPool__TABLE_h6eeb59c9_0
        [__Vtableidx2];
    vlSelf->uart_tb__DOT__out = ((1U & (~ (IData)(vlSelf->uart_tb__DOT__UART__DOT__tx_sel))) 
                                 || ((1U & (~ (IData)(vlSelf->uart_tb__DOT__UART__DOT__tx_sel))) 
                                     || (IData)(vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__piso_out)));
    __Vtableidx3 = ((0x20U & ((~ (IData)(vlSelf->uart_tb__DOT__out)) 
                              << 5U)) | (((IData)(vlSelf->uart_tb__DOT__UART__DOT__get_value) 
                                          << 4U) | 
                                         (((IData)(vlSelf->uart_tb__DOT__data_received) 
                                           << 3U) | 
                                          (((IData)(vlSelf->uart_tb__DOT__UART__DOT__stop) 
                                            << 2U) 
                                           | (IData)(vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__c_state)))));
    vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__n_state 
        = Vuart_tb__ConstPool__TABLE_hcad76bad_0[__Vtableidx3];
}

VL_ATTR_COLD void Vuart_tb___024root___eval_triggers__stl(Vuart_tb___024root* vlSelf);

VL_ATTR_COLD bool Vuart_tb___024root___eval_phase__stl(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vuart_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vuart_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__act(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge uart_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge uart_tb.reset or posedge uart_tb.tx_baud_clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge uart_tb.reset or posedge uart_tb.rx_baud_clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] uart_tb.data_received)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__nba(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge uart_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge uart_tb.reset or posedge uart_tb.tx_baud_clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge uart_tb.reset or posedge uart_tb.rx_baud_clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] uart_tb.data_received)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_tb___024root___ctor_var_reset(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__tx_start = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__in = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__tx_baud_divisor = VL_RAND_RESET_I(32);
    vlSelf->uart_tb__DOT__clk_rate = VL_RAND_RESET_I(32);
    vlSelf->uart_tb__DOT__captured_in = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__data_transmitted = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__data_received = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__data_out = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__tx_baud_clk = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__rx_baud_clk = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->uart_tb__DOT__UART__DOT__tx_enable = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__load_en = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__tx_sel = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__get_value = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__stop = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__bit_clr = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__get_output = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__take_value = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__incre_counter = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter = VL_RAND_RESET_I(32);
    vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter = VL_RAND_RESET_I(32);
    vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__c_state = VL_RAND_RESET_I(2);
    vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__n_state = VL_RAND_RESET_I(2);
    vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__piso_out = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q = VL_RAND_RESET_I(10);
    vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__c_state = VL_RAND_RESET_I(2);
    vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__n_state = VL_RAND_RESET_I(2);
    vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp = VL_RAND_RESET_I(10);
    vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__q = VL_RAND_RESET_I(10);
    vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SAMLE_COUNTER__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SAMLE_COUNTER__DOT__started = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__tx_baud_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__rx_baud_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__data_received__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
