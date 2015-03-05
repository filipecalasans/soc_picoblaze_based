`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:44:51 02/28/2013 
// Design Name: 
// Module Name:    lb_buffer 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 8x1 FIFO. FIFO with 1 position.
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module lb_buffer( 
    input clk,
    input reset,
	input re,
    input [7:0] w_data,
    input we,
    output wire full,
    output wire [7:0] r_data,
	output wire empty
	);
	
	
	localparam FULL_STATE = 0,
			   EMPTY_STATE = 1;	
			   
	wire [7:0] next_w_data;
	wire [7:0] next_r_data;
	
	reg q;
	reg n_q;
	reg flag_full;
	reg next_flag_full;
	
	assign r_data = (re) ? next_r_data : 7'bzzzzzzzz;
	
	//update this block to a register bank
	lb_8bitReg register (
		.clk(clk), 
		.reset(reset), 
		.d_in(w_data), 
		.load(we&empty), 
		.d_out(next_r_data)
		);
/*****************************************************
** FIFO
**
******************************************************/

	
	assign full = flag_full; 
	assign empty = ~flag_full;
	
	always @ (*) 
			case(q) 
			FULL_STATE: begin 
				if(re) begin
					n_q = EMPTY_STATE;
					next_flag_full = 0;
					end
				else  begin
					n_q = FULL_STATE;
					next_flag_full = 1;
					end
			end
			EMPTY_STATE: begin
				if(we) begin
					n_q = FULL_STATE;
					next_flag_full = 1;
				end
				else  begin
					n_q = EMPTY_STATE;
					next_flag_full = 0;
					end
			end
			default: begin	
				n_q = EMPTY_STATE;
				next_flag_full = 0;
				end
		endcase
	
	always @ (posedge clk, negedge reset)
		if(!reset) begin
			q <= EMPTY_STATE;
			flag_full <= 0;
			end
		else begin
			q <= n_q;
			flag_full <= next_flag_full;
		end
	
endmodule
