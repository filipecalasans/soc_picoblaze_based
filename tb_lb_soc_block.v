`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:33:33 04/16/2013
// Design Name:   soc_block
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project4/picoblaze_project/tb_lb_soc_block.v
// Project Name:  picoblaze_project
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

module tb_lb_soc_block;

	// Inputs
	reg clk;
	reg reset;
	reg rx;
	reg interrupt;
	reg bit8;
	reg parity_en;
	reg odd_n_even;
	reg [3:0] baud_val;

	// Outputs
	wire tx;
	wire interrupt_ack;

	//internal
	reg [10:0] char;
	reg [3:0] i;
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
		.baud_val(baud_val)
	);
	
	always 
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		rx = 0;
		interrupt = 0;
		bit8 = 1;
		parity_en = 0;
		odd_n_even = 0;
		baud_val = 4'b0100;
		char = 11'b1_1_01000001_0; //ASC A
		#10;
		reset =0;
		
		for(i=0; i<11; i=i+1) begin
			rx=char[i];
			#104110;
		end
		
		// Wait 100 ns for global reset to finish
		#100;
	
        
		// Add stimulus here

	end
      
endmodule

