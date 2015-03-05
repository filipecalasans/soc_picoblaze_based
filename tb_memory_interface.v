`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:26:30 04/28/2013
// Design Name:   memory_interface
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2013/SystemOnChipDesign/Project5/ise_project/tb_memory_interface.v
// Project Name:  soc_with_memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: memory_interface
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_memory_interface;

	// Inputs
	reg clk;
	reg reset;
	reg write;
	reg read;
	reg cs;
	reg [7:0] data_in;
	reg [3:0] address;
	reg [15:0] data_test;
	reg flag;
	
	// Outputs
	wire [7:0] data_out;
	wire [22:0] addr_mem;
	wire CE;
	wire WE;
	wire OE;
	wire ADV;
	wire CRE;
	wire UB;
	wire LB;

	// Bidirs
	wire [15:0] data_mem;
	
	always #5
		clk = ~ clk;
	
	//assign data_mem = (flag) ? 16'hBC : 16'hzzzz;
	
	// Instantiate the Unit Under Test (UUT)
	memory_interface uut (
		.clk(clk), 
		.reset(reset), 
		.write(write), 
		.read(read), 
		.cs(cs), 
		.data_in(data_in), 
		.address(address), 
		.data_mem(data_mem), 
		.data_out(data_out), 
		.addr_mem(addr_mem), 
		.CE_out(CE), 
		.WE_out(WE), 
		.OE_out(OE), 
		.ADV(ADV), 
		.CRE(CRE), 
		.UB(UB), 
		.LB(LB)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		write = 0;
		read = 0;
		cs = 0;
		data_in = 0;
		address = 0;
		flag = 0;
		data_test = 16'hAA55;
		
		#10;
		reset = 1;
		//wite address registers
		#150020;
		
		address = 1;
		data_in = 8'hAA;
		write = 1;
		read = 0;
		
		//read status
		#10; 
		address = 10;
		read = 1;
		write = 0;
		
		#10;
		address = 2;
		data_in = 8'h55;
		write=1;
		read = 0;
		
		//read status
		#10; 
		address = 10;
		read = 1;
		write = 0;
		
		#10;
		address = 3;
		data_in = 8'h30;
		write=1;
		read = 0;
		
		//read status
		#10; 
		address = 10;
		read = 1;
		write = 0;
		
		//write data register
		#10;
		address = 4;
		data_in = 8'hFF;
		write = 1;
		read = 0;
		
		#10;
		address = 5;
		data_in = 8'hEE;
		write = 1;
		read = 0;
		
		#10;
		write=0;
		
		#10;
		write=1;
		address=9;
		#20;	
		//read status
		#10; 
		address = 10;
		read = 1;
		write = 0;
		#200;
		
		
		//READ MEMORY
		address = 8;
		read = 0;
		write = 1;
		//flag = 1;
		#10
		
		#10; 
		address = 10;
		read = 1;
		write = 0;
		#120;
		
		$finish;
		
	end
      
endmodule

