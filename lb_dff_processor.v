`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:38:52 04/16/2013 
// Design Name: 
// Module Name:    lb_dff_processor 
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
module lb_dff_processor(
	input D, 		//Data input
    input clk, 		//Clock 
    input reset	,	//Reset
	input cs,
	output reg Q 	//Data output
    );

always @ (posedge clk, posedge reset) 	
	//if(!cs) begin
		if(reset)
			Q <= 1'b1;
		else 
			Q <= D;
	//end


endmodule
