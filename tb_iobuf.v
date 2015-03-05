`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:53:18 05/07/2013
// Design Name:   io_buf
// Module Name:   C:/Users/Filipe/Documents/Classes/Spring - 2013/SystemOnChipDesign/Project5/ise_project/tb_iobuf.v
// Project Name:  soc_with_memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: io_buf
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_iobuf;

	// Inputs
	reg [15:0] I;
	reg T;

	// Outputs
	wire [15:0] O;

	// Bidirs
	wire [15:0] IO;
	reg [15:0] IO_BUF;
	// Instantiate the Unit Under Test (UUT)
	io_buf uut (
		.IO(IO), 
		.O(O), 
		.I(I), 
		.T(T)
	);
	
	assign IO = IO_BUF;
	
	initial begin
		// Initialize Inputs
		I = 0;
		T = 1;
		IO_BUF = 16'hAABB;
		
		#20;
		I = 16'h4433;
		T = 0;
		IO_BUF = 16'hzzzz;
		
		#20;
		I = 16'h0022;
		T = 0;
		IO_BUF = 16'hzzzz;
		
		#20;
		T = 1;
		IO_BUF = 16'hCCFF;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

