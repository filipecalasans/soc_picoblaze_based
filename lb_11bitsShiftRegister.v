`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:40:09 02/26/2013 
// Design Name: 
// Module Name:    lb_11bitsShiftRegister 
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
module lb_11bitsShiftRegister(
    input clk,
    input reset,
    input load,
    input shift,
    input [N-1:0] data_in,
	input cs,
    output reg data_out
    );
	
	localparam N = 12;
	
	//reg data_out;
	reg [N-1:0] data;

	always @ (posedge clk, negedge reset) 
		//if(!cs) begin
			if(!reset) begin
				data_out <= 1'b1;
				data <= 0;
			end
			else begin
				if(load) begin
					data <= data_in;
					data_out <= 1'b1;
				end
				else begin
					if(shift)
						{data, data_out} <= {{1'b1, data[N-1:1]},data[0]};
						else
						data_out <= data_out;
				end
			end
		//end
			
endmodule
