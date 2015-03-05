`timescale 1ps / 1fs

////////////////////////////////////////////////////////////////////////////////
// Company: CECS 460 System on Chip Engineering
// Engineer: Filipe Calasans Portugal de Oliveira
//
// Create Date:   20:30:06 02/26/2013
// Design Name:   lb_bitCounter
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project2/UART_TX/tb_lb_bitCounter.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_bitCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_counter4Bits;

	// Inputs
	reg clk;
	reg reset;
	reg inc;
	reg [4:0] value;
	// Outputs
	wire done;
	
	integer i;
	reg [1:0] s;
	
	// Instantiate the Unit Under Test (UUT)
	lb_counter4Bits uut (
		.clk(clk), 
		.reset(reset), 
		.inc(inc), 
		.value(value), 
		.done(done)
	);
	

	always 
		#10 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		inc = 0;
		s = 0;
		value = 8;
		
		#15;
		reset = 1;
		#10;
		
		for(i=0; i<4; i=i+1) begin
		inc = 1;
		#220;
		value = value + 1;
		#15
		reset = 0;
		#20;
		reset = 1;
		#10;
		inc = 0;
		end
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

