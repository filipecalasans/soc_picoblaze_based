`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:24:28 02/27/2013
// Design Name:   lb_UART_Tx_FSM
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project2/UART_TX/tb_lb_UART_Tx_FSM.v
// Project Name:  UART_TX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lb_UART_Tx_FSM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_lb_UART_Tx_FSM;

	// Inputs
	reg clk;
	reg reset;
	reg start;
	reg baudTickCounterDone;
	reg bitCounterDone;

	// Outputs
	wire done;
	wire shift;
	wire load;
	wire incNumBits;
	wire resetBaudTickCounter;

	integer i;
	
	// Instantiate the Unit Under Test (UUT)
	lb_UART_Tx_FSM uut (
		.clk(clk), 
		.reset(reset), 
		.start(start), 
		.baudTickCounterDone(baudTickCounterDone), 
		.bitCounterDone(bitCounterDone), 
		.done(done), 
		.shift(shift), 
		.load(load), 
		.incNumBits(incNumBits), 
		.resetBaudTickCounter(resetBaudTickCounter)
	);
	
	always #
		5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		start = 0;
		baudTickCounterDone = 0;
		bitCounterDone = 0;
		
		#30;
		reset = 1;
		#10;
		start = 1;
		
		for(i=0; i<10; i=i+1) begin
			#40;
			baudTickCounterDone = 1;
			if(i==9)
				bitCounterDone = 1;
			#10;
			baudTickCounterDone = 0;
			bitCounterDone = 0;
		end
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

