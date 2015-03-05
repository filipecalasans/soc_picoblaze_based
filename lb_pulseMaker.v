`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:15:09 02/07/2013 
// Design Name: 
// Module Name:    lb_pulseMaker 
// Project Name:  
// Target Devices: 
// Tool versions: 
// Description:  This module implements a pulse maker. It identifies a posedge 
//				 transition and generates 1 clock pulse.
//
//////////////////////////////////////////////////////////////////////////////////
module lb_pulseMaker(
    input clk,			//clock
    input signal_in,    //signal which the module is going to identifie the transition
	input reset,	    //reset (negedge)
    output wire pulse   //pulse generated.
    );
	
	wire qd0_dd0;
	wire qd1_and;
	//		  D,   clk,  reset,  Q
	lb_dff d0(signal_in, clk, reset, qd0_dd0),
		   d1(qd0_dd0, clk, reset, qd1_and);
	
	assign pulse = ((~qd1_and) & qd0_dd0);  
	
endmodule
