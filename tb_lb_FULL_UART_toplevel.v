`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:36:18 03/19/2013
// Design Name:   lb_UART_toplevel
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project3/tb_lb_FULL_UART_toplevel.v
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

module tb_lb_FULL_UART_toplevel;

	// Inputs
	reg clk;
	reg reset;
	reg cs;
	reg we;
	reg oe;
	reg adrs;
	reg [7:0] data;
	reg bit8;
	reg parity_en;
	reg odd_n_even;
	reg [3:0] baud_val;
	reg rx;

	// Outputs
	wire tx;
	wire [7:0] data_out;
	reg [10:0] char;
	reg [3:0] i;
	// Instantiate the Unit Under Test (UUT)
	lb_UART_toplevel uut (
		.clk(clk), 
		.reset(reset), 
		.cs(cs), 
		.we(we), 
		.oe(oe), 
		.adrs(adrs), 
		.data(data), 
		.bit8(bit8), 
		.parity_en(parity_en), 
		.odd_n_even(odd_n_even), 
		.baud_val(baud_val), 
		.rx(rx), 
		.tx(tx), 
		.data_out(data_out)
	);
	
	always 
		#5 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		cs = 0;
		we = 0;
		oe = 0;
		adrs = 0;
		data = 0;
		bit8 = 1;
		parity_en = 0;
		odd_n_even = 0;
		baud_val = 4'b0100;
		rx = 1;
		char = 11'b1_1_01000001_0; //ASC A
		#10;
		reset =1;
		cs=1;
		
		for(i=0; i<11; i=i+1) begin
			rx=char[i];
			#104170;
		end
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

