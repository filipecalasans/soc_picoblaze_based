`timescale 1ps / 1fs

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:07:23 02/27/2013
// Design Name:   lb_UART_Tx_ControlUnit
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project2/UART_TX/tb_lb_UART_Tx_CU.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_UART_Tx_ControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_UART_Tx_CU;

	// Inputs
	reg clk;
	reg reset;
	reg start;
	reg bit8;
	reg parity_en;
	reg [19:0] baudPrescale;

	// Outputs
	wire done;
	wire load;
	wire shift;

	// Instantiate the Unit Under Test (UUT)
	lb_UART_Tx_ControlUnit uut (
		.clk(clk), 
		.reset(reset), 
		.start(start), 
		.bit8(bit8), 
		.parity_en(parity_en), 
		.baudPrescale(baudPrescale), 
		.done(done), 
		.load(load), 
		.shift(shift)
	);
	
	always
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		start = 0;
		bit8 = 1;
		parity_en = 1;
		baudPrescale = 3;
		
		#15	
			reset = 1;
		#15
			start = 1;
		#15
			start = 0;
		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here

	end
      
endmodule

