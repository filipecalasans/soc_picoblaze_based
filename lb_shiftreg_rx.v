`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:03:52 03/16/2013 
// Design Name: 
// Module Name:    lb_shiftreg_rx 
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
module lb_shiftreg_rx(
    input clk,
    input reset,
    input data_in,
    input shift,
    output reg [11:0] data_out
    );
	
	always @ (posedge clk, negedge reset)
	
		if(!reset)
			data_out <= 0;
		else if(shift)
			data_out <= {data_in, data_out[11:1]};
	

endmodule
