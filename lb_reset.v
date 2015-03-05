`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CECS 460 - System On Chip Design
// Engineer: Filipe Calasans Portugal de Oliveira 
// 
// Module Name:    lb_reset 
// Project Name:   Project 1 - System On Chip Design
// Description:    This module implements a Asynchronus-In, Synchronus-out reset
//				   circuit. This circuit was provided bt Mr. Tramel in his 
//				   CECS 460 class at CSULB.
//					
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module lb_reset(
    input clk,					//system clock
    input resetb,				//reset button signal
	input cs,
    output wire system_reset	//system reset signal assynch-in, synch-out.
    );
	
	wire qd0_dd1;
	wire logic_one;
	
	assign logic_one = 1'b1;
	//		  D,   clk,  reset,  cs, Q
	lb_dff_posReset d0(logic_one, clk, resetb, cs, qd0_dd1),
					d1(qd0_dd1, clk, resetb, cs, system_reset);
	
endmodule
