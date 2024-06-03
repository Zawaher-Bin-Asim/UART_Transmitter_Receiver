`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/14/2024 07:25:57 PM
// Design Name: 
// Module Name: uart_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////



module uart_tb(
`ifdef Verilator
   input logic  clk
`endif 

);

`ifdef Vivado
    reg clk;
`endif 


reg reset, tx_start, load;
reg [7:0] in;
reg [31:0] tx_baud_divisor, clk_rate;
reg [7:0] captured_in; // Captured value of 'in' for comparison

// Outputs
wire out, data_transmitted, data_received, start_bit;
wire [7:0] data_out;
wire tx_baud_clk, rx_baud_clk;

uart UART (
    .clk(clk), .reset(reset), .tx_start(tx_start), .load(load), .in(in), .clk_rate(clk_rate), .tx_baud_divisor(tx_baud_divisor), // Inputs
    .out(out), .data_transmitted(data_transmitted), .data_out(data_out), .tx_baud_clk(tx_baud_clk), .rx_baud_clk(rx_baud_clk), .data_received(data_received), .start_bit(start_bit) // Outputs
);

`ifdef Vivado
    initial begin
        clk <= 1'b0;
        forever #5 clk <= ~clk;
    end
`endif

//============================================== MAIN TESTBENCH ============================================================//

initial begin
    // Initializing the signals
    signals_init();
    
    @(posedge clk);

    // Setting the clk_rate and baud rate
    setting_clkrate_bauddivisor();

    // Resetting
    reset_seq();

    repeat(5) begin
        input_load();
        start_transmission();

        // Capture the current 'in' value
        captured_in <= in;
        repeat(50) @(posedge clk);

        // Wait for start_bit to be asserted within 33 clock cycles
        wait_for_start_bit(35);

        // Wait for the data transmitted signal
        wait (data_received);
        repeat(20) @(posedge clk);

        if (captured_in == data_out) begin
            $display("\n ====> Data Successfully Transmitted and Received <====");
            $display("\n Transmitted_data = %h; Received_data = %h;", captured_in, data_out);
        end else begin
            $display("\n ==========> Error <==========");
            $display("\n Transmitted Data and Received Data are not same");
            $display("\n Transmitted_data = %h; Received_data = %h;", captured_in, data_out);
            $finish; // Terminate the simulation if there is an error
        end
    end
    repeat(2500) @(posedge clk);
    $finish;
end

//===============================SETTING TASKS =========================================================//

task signals_init;
begin
    load <= 0; tx_start <= 'h0;
    clk_rate <= 'h0; tx_baud_divisor <= 'h0;
end
endtask

task reset_seq;
begin
    reset <= 1'b1;
    @(posedge clk);
    reset <= 1'b0;
    @(posedge clk);
    reset <= 1'b1;
end
endtask

task setting_clkrate_bauddivisor;
begin
    clk_rate <= 32'd16000000; tx_baud_divisor <= 8;
end
endtask

task input_load;
begin
    in <= $random; load <= 1'b0;
    @(posedge clk);
    load <= 1'b1;
    repeat(14) @(posedge clk);
    load <= 1'b0;
end
endtask

task start_transmission;
begin
    tx_start <= 1'b0;
    @(posedge clk);
    tx_start <= 1'b1;
end
endtask

// =============================== HELPER TASKS ========================================================= //

task wait_for_start_bit;
    input integer cycles;
    integer i;
    begin
        for (i = 0; i < cycles; i = i + 1) begin
            @(posedge clk);
            if (start_bit) begin
                $display("\n Start bit received");
                return;
            end
        end
        $display("\n ==========> Error <==========");
        $display("\n Start bit not received within %0d clock cycles", cycles);
        $finish;  // Terminate the simulation if start bit is not received
    end
endtask

endmodule
