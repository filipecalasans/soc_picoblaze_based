`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:23:40 02/28/2013 
// Design Name: 
// Module Name:    lb_8bitReg 
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
module lb_8bitReg(
    input clk,
    input reset,
    input [7:0] d_in,
    input load,
    output reg [7:0] d_out
    );

	always @ (posedge clk, negedge reset)
		if(!reset)
			d_out <= 8'b0000_0000;
		else if(load)
			d_out <= d_in;
			else
			d_out <= d_out;
endmodule
