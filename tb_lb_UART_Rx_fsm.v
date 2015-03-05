`timescale 1ps / 1fs

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:37:53 03/18/2013
// Design Name:   lb_UART_Rx_fsm
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project3/tb_lb_UART_Rx_fsm.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_UART_Rx_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_UART_Rx_fsm;

	// Inputs
	reg clk;
	reg reset;
	reg baudTickCounterDone;
	reg bitCounterDone;
	reg rx;

	// Outputs
	wire done;
	wire shift;
	wire half_n_complete;
	wire incNumBits;
	wire resetBaudTickCounter;
	wire resetNumBitsCounter;

	// Instantiate the Unit Under Test (UUT)
	lb_UART_Rx_fsm uut (
		.clk(clk), 
		.reset(reset),  
		.baudTickCounterDone(baudTickCounterDone), 
		.bitCounterDone(bitCounterDone), 
		.rx(rx), 
		.done(done), 
		.shift(shift), 
		.half_n_complete(half_n_complete), 
		.incNumBits(incNumBits), 
		.resetBaudTickCounter(resetBaudTickCounter), 
		.resetNumBitsCounter(resetNumBitsCounter)
	);
	
	always 
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		baudTickCounterDone = 0;
		bitCounterDone = 0;
		rx = 0;
		
		#15;
		reset = 1;
		#60;
		
		
		// Wait 100 ns for global reset to finish
		#100000;
        
		// Add stimulus here

	end
      
endmodule

