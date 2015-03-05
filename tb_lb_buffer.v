`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:08:42 02/28/2013
// Design Name:   lb_buffer
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project2/UART_TX/tb_lb_buffer.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_buffer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_buffer;

	// Inputs
	reg clk;
	reg reset;
	reg re;
	reg [7:0] w_data;
	reg we;

	// Outputs
	wire full;
	wire [7:0] r_data;
	wire empty;

	// Instantiate the Unit Under Test (UUT)
	lb_buffer uut (
		.clk(clk), 
		.reset(reset), 
		.re(re), 
		.w_data(w_data), 
		.we(we), 
		.full(full), 
		.r_data(r_data), 
		.empty(empty)
	);
	
	always 
		#5 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		re = 0;
		w_data = 0;
		we = 0;
		
		#10;
		reset = 1;
		#10;
		w_data = 8'hA5;
		we = 1;
		#10;
		we = 0;
		#30;
		re = 1;
		#30; 
		re = 0;
		
		#10;
		w_data = 8'hAA;
		we = 1;
		#10;
		we = 0;
		#30;
		re = 1;
		#30 
		re = 0;
		
		
		#10;
		w_data = 8'hFE;
		we = 1;
		#30;
		re = 1;
		#30; 
		re = 0;
		#20;
		
		// Add stimulus here

	end
      
endmodule

