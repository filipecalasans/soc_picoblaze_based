`timescale 1ps / 1fs

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:17:12 03/01/2013
// Design Name:   lb_UART_Tx
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project2/UART_TX/tb_lb_UART_Tx.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_UART_Tx
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_UART_Tx;

	// Inputs
	reg clk;
	reg reset;
	reg cs;
	reg we;
	reg [7:0] data;
	reg bit8;
	reg parity_en;
	reg odd_n_even;
	reg [19:0] baud_val;

	// Outputs
	wire txrdy;
	wire tx;
	
	integer i;
	reg flag;
	// Instantiate the Unit Under Test (UUT)
	lb_UART_Tx uut (
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
		cs = 0;
		we = 0;
		data = 8'hA5;
		bit8 = 1;
		parity_en = 1;
		odd_n_even = 1;
		baud_val = 3;
		i = 0;
		flag = 0;
		
		#15;
		reset = 1;
		#15;
		we = 1;
		#15;
		we = 0;
		// Wait 100 ns for global reset to finish
		#5000;
		
		
        
		// Add stimulus here

	end
      
endmodule

