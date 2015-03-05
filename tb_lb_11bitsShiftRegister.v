`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:12:04 02/27/2013
// Design Name:   lb_11bitsShiftRegister
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project2/UART_TX/tb_lb_11bitsShiftRegister.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_11bitsShiftRegister
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_11bitsShiftRegister;

	// Inputs
	reg clk;
	reg reset;
	reg load;
	reg shift;
	reg [10:0] data_in;

	// Outputs
	wire data_out;
	
	//local variables
	integer i;
	
	
	// Instantiate the Unit Under Test (UUT)
	lb_11bitsShiftRegister uut (
		.clk(clk), 
		.reset(reset), 
		.load(load), 
		.shift(shift), 
		.data_in(data_in), 
		.data_out(data_out)
	);

	always
		#10 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		load = 0;
		shift = 0;
		data_in = 11'b00_11_0_1_0_1_00_1;
	
		#30;
		reset = 1;
		load = 1;
		#10;
		load = 0;
		#20;
		for(i=0; i<11; i=i+1) begin
			shift = 1;
			#20;
			shift = 0;
			#40;
		end	
		
		data_in = 11'b11_00_0_1_0_1_11_0;
		load = 1;
		#20;
		load = 0;
		#20;
		for(i=0; i<11; i=i+1) begin
			shift = 1;
			#20;
			shift = 0;
			#40;
		end	
		
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

