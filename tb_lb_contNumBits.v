`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:10:17 02/26/2013
// Design Name:   lb_contNumBits
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project2/UART_TX/tb_lb_contNumBits.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_contNumBits
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_contNumBits;

	// Inputs
	reg clk;
	reg reset;
	reg parity_en;
	reg bit8;
	reg [1:0] value;
	reg inc;
	reg cs;
	// Outputs
	wire done;
	integer i;
	
	// Instantiate the Unit Under Test (UUT)
	lb_contNumBits uut (
		.clk(clk), 
		.reset(reset), 
		.parity_en(parity_en), 
		.bit8(bit8),
		.inc(inc),
		.cs(cs),
		.done(done)
	);

	always
		#10 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		parity_en = 0;
		bit8 = 0;
		value = 0;
		inc =0;
		cs = 0;
		
		#20
		reset = 0;
		
		#20;
		reset = 1;
		inc=1;
		#10;
		
		for(i=0; i<4; i=i+1) begin
			#220;
			value = value + 1;
			#20
			{parity_en,bit8} = value;
			#20
			reset = 0;
			#20;
			reset = 1;
			#10;
		end
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

