`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:30:42 03/19/2013
// Design Name:   lb_UART_toplevel
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2012/SystemOnChipDesign/Project3/tb_lb_UART_full_toplevel.v
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

module tb_lb_UART_full_toplevel;

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
	reg [10:0] shifter;
	reg [4:0] j;
	reg [7:0] i;
	
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
		#5 clk = ~clk; //clock 10ns = 100MHz
		
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		cs = 0;
		we = 0;
		oe = 0;
		adrs = 1;
		data = 0;
		bit8 = 1;
		parity_en = 0;
		odd_n_even = 1;
		baud_val = 4;
		rx = 1;
		
		#10;
		reset = 1;
		#10;
		
		for(i=65; i<96; i=i+1) begin
			shifter = {2'b11,i,1'b0};
			for(j=0; j<10; j=j+1) begin
				rx=shifter[j];
				#104170;
			end
			#500;
			adrs = 1; //watch data
			#100;
			adrs = 1;
			#10;
			oe = 1;
			#10;
			oe = 0;
		end
		

	end
      
endmodule

