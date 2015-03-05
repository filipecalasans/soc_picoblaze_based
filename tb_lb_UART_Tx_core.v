`timescale 1ps / 1fs

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:07:45 02/27/2013
// Design Name:   lb_UART_Tx_Core
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project2/UART_TX/tb_lb_UART_Tx_core.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_UART_Tx_Core
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_UART_Tx_core;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] data;
	reg start;
	reg [19:0] baud_value;
	reg bit8;
	reg parity_en;
	reg odd_n_even;

	// Outputs
	wire tx;
	wire tx_done;

	// Instantiate the Unit Under Test (UUT)
	lb_UART_Tx_Core uut (
		.clk(clk), 
		.reset(reset), 
		.data(data), 
		.start(start), 
		.baud_value(baud_value), 
		.bit8(bit8), 
		.parity_en(parity_en), 
		.odd_n_even(odd_n_even), 
		.tx(tx), 
		.tx_done(tx_done)
	);

	always 
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		//data = 0;
		start = 0;
		baud_value = 3;
		bit8 = 0;
		parity_en = 1;
		odd_n_even = 0;
		data = 8'b0110_1010;
		
		#15	
			reset = 1;
		#15
			start = 1;
		#50
			start = 0;
		// Wait 100 ns for global reset to finish
		#1000;
        
		
		// Add stimulus here

	end
      
endmodule

