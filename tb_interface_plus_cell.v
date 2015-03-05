`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:33:51 05/01/2013
// Design Name:   memory_test_module
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2013/SystemOnChipDesign/Project5/ise_project/tb_interface_plus_cell.v
// Project Name:  soc_with_memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: memory_test_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_interface_plus_cell;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] data_in;
	reg [3:0] address;
	reg write;
	reg read;
	
	reg [22:0] i;
	reg [15:0] dado;
	// Outputs
	wire [7:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	memory_test_module uut (
		.clk(clk), 
		.reset(reset), 
		.data_out(data_out), 
		.data_in(data_in), 
		.addr_mem_interface(address), 
		.write(write), 
		.read(read)
	);
	
	always #5
		clk = ~ clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		data_in = 0;
		address = 0;
		write = 0;
		read = 0;
		dado = 16'hC2A5;
		#10;
		reset = 1;
		#200000;
		i=23'h50AEDF;
		
		for(i=0; i<23'h200; i=i+1) begin
			#10;
			address = 1;
			data_in = i[7:0];
			write = 1;
			read = 0;
			
			#10;
			address = 2;
			data_in = i[15:8];
			write=1;
			read = 0;
			
			#10;
			address = 3;
			data_in = i[22:16];
			write=1;
			read = 0;
			
			//data = 0xEEFF
			//write data register
			#10;
			address = 4;
			data_in = dado[7:0];
			write = 1;
			read = 0;
			
			#10;
			address = 5;
			data_in = dado[15:8];
			write = 1;
			read = 0;
			
			#10;
			address=0;
			write=0;
			
			#10;
			write=1;
			address=9;
			#50;
			write=0;
			address=9;
			#150;
		
		end
			
		//read all memory positions
		for(i=0; i<23'h200; i=i+1) begin
			#10;
			address = 1;
			data_in = i[7:0];
			write = 1;
			read = 0;
			
			#10;
			address = 2;
			data_in = i[15:8];
			write=1;
			read = 0;
			
			#10;
			address = 3;
			data_in = i[22:16];
			write=1;
			read = 0;
			
			//READ MEM
			address = 8;
			read = 0;
			write = 1;
			#50;
			write = 0;
			#90;
					
		end
		
		$finish;
		
		// Add stimulus here

	end
      
endmodule

