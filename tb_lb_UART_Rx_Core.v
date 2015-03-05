`timescale 1ps / 1fs

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:26:48 03/19/2013
// Design Name:   lb_UART_Rx_Core
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project3/tb_lb_UART_Rx_Core.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_UART_Rx_Core
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_UART_Rx_Core;

	// Inputs
	reg clk;
	reg reset;
	reg [19:0] baud_value;
	reg bit8;
	reg parity_en;
	reg odd_n_even;
	reg cs;
	reg rx;

	// Outputs
	wire [7:0] data_out;
	wire done;
	wire parity_err;
	wire stopErr;

	// Instantiate the Unit Under Test (UUT)
	lb_UART_Rx_Core uut (
		.clk(clk), 
		.reset(reset), 
		.baud_value(baud_value), 
		.bit8(bit8), 
		.parity_en(parity_en), 
		.odd_n_even(odd_n_even), 
		.cs(cs), 
		.rx(rx), 
		.data_out(data_out), 
		.done(done), 
		.parity_err(parity_err), 
		.stopErr(stopErr)
	);
	
	always 
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		baud_value = 0;
		bit8 = 1;
		parity_en = 1;
		odd_n_even = 1;
		cs = 1;
		rx = 1;
		
		#20;
		reset =1;
		#20;
		rx=0;
		#380;
		rx=1;
		

			
		// Wait 100 ns for global reset to finish
		#100000;
        
		// Add stimulus here

	end
      
endmodule

