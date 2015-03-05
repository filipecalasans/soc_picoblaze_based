`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:47:25 03/19/2013
// Design Name:   lb_16_n_8BaudTickCounter
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project3/tb_lb_16_n_8BaudTickCounter.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_16_n_8BaudTickCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_16_n_8BaudTickCounter;

	// Inputs
	reg clk;
	reg reset;
	reg [19:0] prescale;
	reg _16_or_8_ticks;
	reg cs;
	reg load;

	// Outputs
	wire done;

	// Instantiate the Unit Under Test (UUT)
	lb_16_n_8BaudTickCounter uut (
		.clk(clk), 
		.reset(reset), 
		.prescale(prescale), 
		._16_or_8_ticks(_16_or_8_ticks), 
		.cs(cs), 
		.load(load), 
		.done(done)
	);
	
	always 
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		prescale = 0;
		_16_or_8_ticks = 0;
		cs = 0;
		load = 1;
		
		#15;
		reset = 1;
		
		#300;
		_16_or_8_ticks  = 1;
		load = 0;
		#10;
		load = 1;
		
		
		
		
		// Wait 100 ns for global reset to finish
		#500;
        
		// Add stimulus here

	end
      
endmodule

