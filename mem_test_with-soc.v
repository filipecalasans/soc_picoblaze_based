`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:29:34 05/06/2013 
// Design Name: 
// Module Name:    mem_test_with-soc 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mem_test_with_soc( clk, reset, tx, rx, interrupt, interrupt_ack, bit8, parity_en, 
	odd_n_even, baud_val 
    );

	input clk, interrupt;
	input reset;
    input bit8;
    input parity_en;
    input odd_n_even;
    input [3:0] baud_val;
	input rx;
    output tx, interrupt_ack;
	
	wire [2:0] zero;
	wire [22:0] addr_mem_mem_interface;
	wire [15:0] data_mem_mem_interface;
	wire [6:0] control_mem;
	wire clk_mem;
	
// Instantiate the module
cellram ram_(
    .clk(1'b0), //
    .adv_n(1'b0), //
    .cre(1'b0), //
    .o_wait(o_wait), // 
    .ce_n(control_mem[6]), //
    .oe_n(control_mem[4]), //
    .we_n(control_mem[5]), //
    .lb_n(1'b0), //
    .ub_n(1'b0),// 
    .addr(addr_mem_mem_interface),// 
    .dq(data_mem_mem_interface)//
    );							
// Instantiate the module
soc_block soc (
    .clk(clk), 
    .reset(reset), 
    .tx(tx), 
    .rx(rx), 
    .interrupt(interrupt), 
    .interrupt_ack(interrupt_ack), 
    .bit8(bit8), 
    .parity_en(parity_en), 
    .odd_n_even(odd_n_even), 
    .baud_val(baud_val), 
    .addr_mem_mem_interface(addr_mem_mem_interface), 
    .data_mem_mem_interface(data_mem_mem_interface), 
    .control_mem(control_mem), 
    .clk_mem(clk_mem), 
    .zero(zero)
    );


endmodule
