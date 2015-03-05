`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:16:48 02/07/2013
// Design Name:   lb_reset
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/cecs447_project_1/tb_lf_reset.v
// Project Name:  cecs447_project_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_reset
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lf_reset;

	// Inputs
	reg clk;
	reg resetb;
	
	wire system_reset;
	// Instantiate the Unit Under Test (UUT)
	lb_reset uut (
		.clk(clk), 
		.resetb(resetb),
		.system_reset(system_reset)
	);
	
	always 
		#10 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		resetb = 0;

		// Wait 100 ns for global reset to finish
		#25;
        resetb = 1;
		#25;
		resetb = 0;
		#100;
        resetb = 1;
		#25;
		resetb = 0;
		#100;
		
		$finish;
		
		// Add stimulus here

	end
      
endmodule

