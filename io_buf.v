`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:48:06 05/07/2013 
// Design Name: 
// Module Name:    io_buf 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module io_buf(
    inout [15:0] IO,
    output [15:0] O,
    input [15:0] I,
    input T
    );

	assign IO = (T) ? 16'hzzzz : I;
	assign O = (T) ? IO : I;

endmodule
