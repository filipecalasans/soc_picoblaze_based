`timescale 1ps / 100fs
//////////////////////////////////////////////////////////////////////////////////
// Company:  CECS 460 - System on Chip Design
// Engineer: Filipe Calasans Portugal de Oliveira
// 
// Create Date:    23:24:13 09/11/2012 
// Design Name:	   1 bit Register
// Module Name:    lb_dff 
// Project Name:   Lab Project 1 System on Chip Design  
// Description: 1 bit D flip-flop, negedge sensitive reset.
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module lb_dff(
    input D, 		//Data input
    input clk, 		//Clock 
    input reset	,	//Reset
	input cs,
	output reg Q 	//Data output
    );

always @ (posedge clk, negedge reset) 	
	//if(!cs) begin
		if(!reset)
			Q <= 1'b0;
		else 
			Q <= D;
	//end
endmodule


