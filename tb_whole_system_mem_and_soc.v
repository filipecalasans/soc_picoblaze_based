`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:56:02 05/07/2013
// Design Name:   mem_test_with_soc
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2013/SystemOnChipDesign/Project5/ise_project/tb_whole_system_mem_and_soc.v
// Project Name:  soc_with_memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mem_test_with_soc
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_whole_system_mem_and_soc;

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
	
	//variables
	
	reg [10:0] shifter;
	reg [4:0] j;
	reg [7:0] i;
	reg [11:0] char;
	
	// Instantiate the Unit Under Test (UUT)
	mem_test_with_soc uut (
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
	always #5
		clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		rx = 1;
		interrupt = 0;
		bit8 = 1;
		parity_en = 1;
		odd_n_even = 1;
		baud_val = 4'b0100;
		char = 11'b 11_01000001_01;
		#20;
		reset = 1;
		
			for(j=0; j<4; j=j+1) begin
		
			for(i=0; i<11; i=i+1) begin
				rx=char[i];
				#104110;
			end
			
			
			for(i=0; i<8; i=i+1) begin
				#104110;
			end
			
			char = char + 11'b00_00000001_00;
			
			end
		// Wait 100 ns for global reset to finish
		#100;
	 
		$finish;
		// Add stimulus here

	end
      
endmodule

