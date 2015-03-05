`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:30:30 02/07/2013
// Design Name:   lb_pulseMaker
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/cecs447_project_1/tb_lb_pulseMaker.v
// Project Name:  cecs447_project_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_pulseMaker
//
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_pulseMaker;

	// Inputs
	reg clk;
	reg signal_in;
	reg reset;

	// Outputs
	wire pulse;

	// Instantiate the Unit Under Test (UUT)
	lb_pulseMaker uut (
		.clk(clk), 
		.signal_in(signal_in), 
		.reset(reset), 
		.pulse(pulse)
	);
	
	always 
		#10 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		signal_in = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 1;
        #100;
		signal_in = 1;
		#20;
		signal_in = 0;
		#100;
		signal_in = 1;
		#40;
		signal_in = 0;
		#100;
		signal_in = 1;
		#60;
		signal_in = 0;
		#100
		$finish;
		// Add stimulus here

	end
      
endmodule

