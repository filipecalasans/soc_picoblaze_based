`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:34 02/26/2013 
// Design Name: 
// Module Name:    lb_clockCounter 
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
module lb_clockCounter(
    input clk,
	input reset,
	input [N-1:0] value,
	input cs,
	input load,
	output wire done
    );
	
	localparam N = 20;
	reg [N-1:0] n_bits;
	reg [N-1:0] cont;
	wire [N-1:0] n_cont;
	
	assign n_cont = ((done) ? 0 : (cont+1));
	assign done = (cont==n_bits) ? 1 : 0;
	
	always @(posedge clk, negedge reset)
		//if(!cs) begin
			if(!reset) begin 
				cont <= 0; 
				n_bits <= value;
			end
			else begin
				if(!load) begin
					cont <= 0; 
					n_bits <= value;
				end
				else 
					cont <= n_cont;
			end
		
endmodule
