`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:47:37 03/02/2013
// Design Name:   lb_UART_toplevel
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project2/UART_TX/tb_lb_UART_toplevel.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_UART_toplevel
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_UART_toplevel;

	// Inputs
	reg clk;
	reg reset;
	reg cs;
	reg we;
	reg [7:0] data;
	reg bit8;
	reg parity_en;
	reg odd_n_even;
	reg [3:0] baud_val;
	
	// Outputs
	wire txrdy;
	wire tx;

	// Instantiate the Unit Under Test (UUT)
	lb_UART_toplevel uut (
		.clk(clk), 
		.reset(reset), 
		.cs(cs), 
		.we(we), 
		.data(data), 
		.bit8(bit8), 
		.parity_en(parity_en), 
		.odd_n_even(odd_n_even), 
		.baud_val(baud_val),
		.txrdy(txrdy), 
		.tx(tx)
	);

	always 
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		cs = 1;
		we = 0;
		data = 8'hA5;
		bit8 = 1;
		parity_en = 1;
		odd_n_even = 1;
		baud_val = 4'b0000;
		
		#15
		cs = 0;
		
		#15;
		reset = 1;
		#15;
		we = 1;
		#35;
		we = 0;
		// Wait 100 ns for global reset to finish
		#5000;
		
	end
      
endmodule

