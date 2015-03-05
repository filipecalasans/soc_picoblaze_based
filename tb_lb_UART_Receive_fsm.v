`timescale 1ps / 1fs

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:55:29 03/19/2013
// Design Name:   lb_UART_Rx_ControlUnit
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project3/tb_lb_UART_Receive_fsm.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_UART_Rx_ControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_UART_Receive_fsm;

	// Inputs
	reg clk;
	reg reset;
	reg bit8;
	reg parity_en;
	reg [19:0] baudPrescale;
	reg cs;
	reg rx;

	// Outputs
	wire done;
	wire shift;

	// Instantiate the Unit Under Test (UUT)
	lb_UART_Rx_ControlUnit uut (
		.clk(clk), 
		.reset(reset), 
		.bit8(bit8), 
		.parity_en(parity_en), 
		.baudPrescale(baudPrescale), 
		.cs(cs), 
		.rx(rx), 
		.done(done), 
		.shift(shift)
	);
	
	always 
		#5 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		bit8 = 1;
		parity_en = 1;
		baudPrescale = 0;
		cs = 0;
		rx = 1;
		
		#15;
		reset = 1;
		#30;
		rx = 0;
		#380;
		rx = 1;
		
		
		// Wait 100 ns for global reset to finish
		#10000;
        
		// Add stimulus here

	end
      
endmodule

