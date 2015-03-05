`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:07:33 05/01/2013 
// Design Name: 
// Module Name:    memory_test_module 
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
module memory_test_module(clk, reset, data_out, data_in, addr_mem_interface, write, read 
    );

	input clk, reset, write, read;
	input wire [7:0] data_in;
	output wire [7:0] data_out;
	input wire [3:0] addr_mem_interface;
	
	wire 				  clk;
    wire	              adv_n;
    wire                  cre;
    wire                  ce_n;
    wire                  oe_n;
    wire                  we_n;
    wire 	        [1:0] by_n;
    wire            [22:0] addr;
    wire            [15:0] dq;
	
	wire LB, UN;
	
	assign  by_n = {UB, LB};
	
// Instantiate the module
memory_interface mem_interface (
    .clk(clk), //
    .reset(reset), //
    .write(write), //
    .read(read), //
    .cs(1'b0), //
    .data_in(data_in), //
    .address(addr_mem_interface),  //
    .data_mem(dq), //
    .data_out(data_out), //
    .addr_mem(addr), //
    .CE_out(ce_n), //
    .WE_out(we_n), //
    .OE_out(oe_n), //
    .ADV(adv_n), //
    .CRE(cre), //
    .UB(UB), //
    .LB(LB) //
    );

// Instantiate the module
cellram mem (
    .clk(1'b0), //
    .adv_n(adv_n), //
    .cre(cre), //
    .o_wait(o_wait), // 
    .ce_n(ce_n), //
    .oe_n(oe_n), //
    .we_n(we_n), //
    .lb_n(by_n[1]), //
    .ub_n(by_n[0]),// 
    .addr(addr),// 
    .dq(dq)//
    );

endmodule
