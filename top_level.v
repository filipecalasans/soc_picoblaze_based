`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:35:10 04/15/2013 
// Design Name: 
// Module Name:    top_level 
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
module processor_top_level(clk, port_id, write_strobe, out_port, read_strobe,
	 interrupt, interrupt_ack, reset, in_port, k_write_strobe
    );
	
	output 	[7:0]	port_id ;
	output 		write_strobe, read_strobe, interrupt_ack, k_write_strobe;
	output 	[7:0]	out_port ;
	input 	[7:0]	in_port ;
	input		interrupt, reset, clk ;

	 
	wire 	[11:0]	address ;
	wire 	[17:0]	instruction ;
	wire     bram_enable;


kcpsm6 processor (
    .address(address), 
    .instruction(instruction), 
    .bram_enable(bram_enable), 
    .in_port(in_port), 
    .out_port(out_port), 
    .port_id(port_id), 
    .write_strobe(write_strobe), 
    .k_write_strobe(k_write_strobe), 
    .read_strobe(read_strobe), 
    .interrupt(interrupt), 
    .interrupt_ack(interrupt_ack), 
    .sleep(1'b0), 
    .reset(reset|rdl), 
    .clk(clk)
    );
	
uart_test_mem_pre_presentation program (
    .address(address), 
    .instruction(instruction), 
    .enable(bram_enable), 
    .rdl(rdl), 
    .clk(clk)
    );
	
endmodule
