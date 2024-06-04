// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_tb.h for the primary calling header

#ifndef VERILATED_VUART_TB___024ROOT_H_
#define VERILATED_VUART_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuart_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ uart_tb__DOT__reset;
    CData/*0:0*/ uart_tb__DOT__tx_baud_clk;
    CData/*0:0*/ uart_tb__DOT__rx_baud_clk;
    CData/*0:0*/ uart_tb__DOT__tx_start;
    CData/*0:0*/ uart_tb__DOT__load;
    CData/*7:0*/ uart_tb__DOT__in;
    CData/*7:0*/ uart_tb__DOT__captured_in;
    CData/*0:0*/ uart_tb__DOT__out;
    CData/*0:0*/ uart_tb__DOT__data_transmitted;
    CData/*0:0*/ uart_tb__DOT__data_received;
    CData/*7:0*/ uart_tb__DOT__data_out;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__tx_enable;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__load_en;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__tx_sel;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__get_value;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__stop;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__bit_clr;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__get_output;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__take_value;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__incre_counter;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle;
    CData/*1:0*/ uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__c_state;
    CData/*1:0*/ uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__n_state;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__piso_out;
    CData/*3:0*/ uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter;
    CData/*1:0*/ uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__c_state;
    CData/*1:0*/ uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__n_state;
    CData/*3:0*/ uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter;
    CData/*2:0*/ uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SAMLE_COUNTER__DOT__counter;
    CData/*0:0*/ uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SAMLE_COUNTER__DOT__started;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tb__DOT__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tb__DOT__tx_baud_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tb__DOT__rx_baud_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tb__DOT__data_received__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q;
    SData/*9:0*/ uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp;
    SData/*9:0*/ uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__q;
    IData/*31:0*/ uart_tb__DOT__tx_baud_divisor;
    IData/*31:0*/ uart_tb__DOT__clk_rate;
    IData/*31:0*/ uart_tb__DOT__wait_for_start_bit__Vstatic__i;
    IData/*31:0*/ uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter;
    IData/*31:0*/ uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlTriggerScheduler __VtrigSched_h759a1d48__0;
    VlTriggerScheduler __VtrigSched_h6d82393c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vuart_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_tb___024root(Vuart_tb__Syms* symsp, const char* v__name);
    ~Vuart_tb___024root();
    VL_UNCOPYABLE(Vuart_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
