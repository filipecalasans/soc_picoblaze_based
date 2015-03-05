`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CECS 460 - System on Chip Design
// Engineer: Filipe Calasans Portugal de Oliveira
// 
// Create Date:    22:10:30 02/11/2013 
// Design Name: 
// Module Name:    lb_dff_posReset 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 1 bit D flip-flop, posedge sensitive reset.
//
//////////////////////////////////////////////////////////////////////////////////
module lb_dff_posReset(
    input D, 		//Data input
    input clk, 		//Clock 
    input reset,	//Reset
	input cs,		//chip select
	output reg Q 	//Data 
    );
	
always @ (posedge clk or posedge reset) 
	//if (cs) 
		if(reset)
			Q <= 1'b0;
		else 
			Q <= D;
	
endmodule
