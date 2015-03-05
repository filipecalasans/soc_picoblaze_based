`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:48:06 02/26/2013
// Design Name:   lb_clockCounter
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project2/UART_TX/tb_lb_clockCounter.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_clockCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_clockCounter;

	// Inputs
	reg clk;
	reg reset;
	reg [19:0] value;

	// Outputs
	wire done;

	// Instantiate the Unit Under Test (UUT)
	lb_clockCounter uut (
		.clk(clk), 
		.reset(reset), 
		.value(value), 
		.done(done)
	);
	
	always 
		#10 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		value = 200;
		
		#10;
			reset = 1;
			
		// Wait 100 ns for global reset to finish
		#300;
        
		#10;
			reset = 0;
		#10;
			reset = 1;
		// Wait 100 ns for global reset to finish
		
		#300;
		
		// Add stimulus here

	end
      
endmodule

