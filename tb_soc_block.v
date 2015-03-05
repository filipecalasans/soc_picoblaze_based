`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:08:16 05/01/2013
// Design Name:   soc_block
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2013/SystemOnChipDesign/Project5/ise_project/tb_soc_block.v
// Project Name:  soc_with_memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: soc_block
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_soc_block;

	// Inputs
	reg clk;
	reg reset;
	reg rx;
	reg interrupt;
	reg bit8;
	reg parity_en;
	reg odd_n_even;
	reg [3:0] baud_val;
	reg clk_mem;
	
	// Outputs
	wire tx;
	wire interrupt_ack;
	wire [22:0] addr_mem_mem_interface;
	wire [6:0] control_mem;
	wire [2:0] zero;
	
	// Bidirs
	wire [15:0] data_mem_mem_interface;
	
	// Instantiate the Unit Under Test (UUT)
	soc_block uut (
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
	
	always
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk_mem = 0;
		clk = 0;
		reset = 0;
		rx = 1;
		interrupt = 0;
		bit8 = 1;
		parity_en = 1;
		odd_n_even = 1;
		baud_val = 1011;
		
		#20;
		reset=1;
		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here

	end
      
endmodule

