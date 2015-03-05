`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:40:19 03/20/2013
// Design Name:   system_toplevel
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project3/tb_systemToplevel_with_processor.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: system_toplevel
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_systemToplevel_with_processor;

	// Inputs
	reg clk;
	reg reset;
	reg bit8;
	reg parity_en;
	reg odd_n_even;
	reg [3:0] baud_val;
	reg rx;

	// Outputs
	wire tx;
	
	reg [10:0] shifter;
	reg [4:0] j;
	reg [7:0] i;
	
	
	// Instantiate the Unit Under Test (UUT)
	system_toplevel uut (
		.clk(clk), 
		.reset(reset), 
		.bit8(bit8), 
		.parity_en(parity_en), 
		.odd_n_even(odd_n_even), 
		.baud_val(baud_val), 
		.rx(rx), 
		.tx(tx)
	);

	always 
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		bit8 = 1;
		parity_en = 0;
		odd_n_even = 0;
		baud_val = 4'b0100; //9600 BAUD
		rx = 1;
		
		#30;
		reset = 0;
		
		
		for(i=65; i<96; i=i+1) begin
			
			#100;
			shifter = {2'b11,i,1'b0};
			for(j=0; j<10; j=j+1) begin
				rx=shifter[j];
				#104170;
			end
			#5145870;
		end
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

