`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:56:05 04/15/2013
// Design Name:   top_level
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project4/picoblaze_project/processor_sim.v
// Project Name:  picoblaze_project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top_level
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module processor_sim;

	// Inputs
	reg clk;
	reg interrupt;
	reg reset;
	reg [7:0] in_port;

	// Outputs
	wire [7:0] port_id;
	wire write_strobe;
	wire [7:0] out_port;
	wire read_strobe;
	wire interrupt_ack;

	// Instantiate the Unit Under Test (UUT)
	top_level uut (
		.clk(clk), 
		.port_id(port_id), 
		.write_strobe(write_strobe), 
		.out_port(out_port), 
		.read_strobe(read_strobe), 
		.interrupt(interrupt), 
		.interrupt_ack(interrupt_ack), 
		.reset(reset), 
		.in_port(in_port)
	);

	always
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		interrupt = 0;
		reset = 1;
		in_port = 0;
		
		#20;
		reset = 0;
		// Wait 100 ns for global reset to finish
		#100000;
        
		// Add stimulus here

	end
      
endmodule

