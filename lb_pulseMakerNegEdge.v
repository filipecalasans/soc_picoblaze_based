`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:47:12 02/27/2013 
// Design Name: 
// Module Name:    lb_pulseMakerNegEdge 
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
module lb_pulseMakerNegEdge(
    input clk,			//clock
    input signal_in,    //signal which the module is going to identifie the transition
	input reset,	    //reset (negedge)
	input cs,			//chip select
    output wire pulse   //pulse generated.
    );
	
	wire qd0_dd0;
	wire qd1_and;
	//		  D,   clk,  reset,  Q
	lb_dff d0(signal_in, clk, reset, cs, qd0_dd0),
		   d1(qd0_dd0, clk, reset, cs, qd1_and);
	
	assign pulse = (qd1_and & (~qd0_dd0));  
	
endmodule

