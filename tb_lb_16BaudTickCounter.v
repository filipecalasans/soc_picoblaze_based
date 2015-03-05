`timescale 1ps / 1fs

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:25:11 02/26/2013
// Design Name:   lb_16BaudTickCounter
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project2/UART_TX/tb_lb_16BaudTickCounter.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_16BaudTickCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_16BaudTickCounter;

	// Inputs
	reg clk;
	reg reset;
	reg [19:0] prescale;

	// Outputs
	wire done;

	// Instantiate the Unit Under Test (UUT)
	lb_16BaudTickCounter uut (
		.clk(clk), 
		.reset(reset), 
		.prescale(prescale), 
		.done(done)
	);

	always 
		#20 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		prescale = 3;
		
		#10
		reset = 1;
		// Wait 100 ns for global reset to finish
		#400;
        
		// Add stimulus here

	end
      
endmodule

