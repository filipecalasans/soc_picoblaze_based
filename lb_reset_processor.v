`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:37:38 04/16/2013 
// Design Name: 
// Module Name:    lb_reset_processor 
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
module lb_reset_processor( 
	input clk,					//system clock
    input resetb,				//reset button signal
	input cs,
    output wire system_reset	//system reset signal assynch-in, synch-out.
    );
	
	wire qd0_dd1;
	wire logic_one;
	
	assign logic_one = 1'b0;
	//		  D,   clk,  reset,  cs, Q
	lb_dff_processor d0(logic_one, clk, resetb, cs, qd0_dd1),
		   d1(qd0_dd1, clk, resetb, cs, system_reset);
   


endmodule
