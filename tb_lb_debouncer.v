`timescale 1ps / 1fs

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:27:59 02/10/2013
// Design Name:   lb_debounce
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/cecs447_project_1/tb_lb_debouncer.v
// Project Name:  cecs447_project_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_debounce
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_debouncer;

	// Inputs
	reg clk;
	reg sw;
	reg reset;

	// Outputs
	wire db;

	// Instantiate the Unit Under Test (UUT)
	lb_debounce uut (
		.clk(clk), 
		.sw(sw), 
		.reset(reset), 
		.db(db)
	);
	always 
		#10clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		sw = 0;
		reset = 1;
		
		#10;
		reset = 0;
		#15;
		sw = 1;
		#250
		sw = 0;
		// Wait 100 ns for global reset to finish
		#100000000;
        
		// Add stimulus here

	end
      
endmodule

