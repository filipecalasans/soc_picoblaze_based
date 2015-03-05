`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:09:03 03/16/2013
// Design Name:   lb_shiftreg_rx
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project3/tb_lb_shiftreg_rx.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_shiftreg_rx
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_shiftreg_rx;

	// Inputs
	reg clk;
	reg reset;
	reg data_in;
	reg shift;

	// Outputs
	wire [10:0] data_out;
	reg [5:0] i;
	
	// Instantiate the Unit Under Test (UUT)
	lb_shiftreg_rx uut (
		.clk(clk), 
		.reset(reset), 
		.data_in(data_in), 
		.shift(shift), 
		.data_out(data_out)
	);

	always
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		data_in = 0;
		shift = 0;
		
		#15;
		reset = 1;
		for(i=0; i<10; i=i+1) begin
			data_in = i[0];
			shift = 1;
			#10;
		end
			
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

