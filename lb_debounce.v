`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CECS 460 - System on Chip Design 
// Engineer: Filipe Calasans Portugal de Oliveira
//
// Create Date:    15:46:34 02/06/2013 
// Design Name: 
// Module Name:    lb_debounce 
// Project Name:     Project 1: System on Chip Design 
// Description:    This module is an implementation of Pong`s algorithm for
//				   debouncing circuit. This code can be found in the book
//				   FPGA Prototyping By Verilog Examples Xilinx Spartan-3.
//				   The only difference for the original code is that the 
//				   FSM output is driven to a flip-flop D before to 
//				   become the module output, this avoids combo delays. 
//
//////////////////////////////////////////////////////////////////////////////////
module lb_debounce(
    input clk,			//clock
    input sw,	//switch input
	input reset,
    output reg db		//debounced output
    );

//symbolic state declaration
localparam [2:0]
			ZERO	= 3'b000,
			WAIT1_1 = 3'b001,
			WAIT1_2 = 3'b010,
			WAIT1_3 = 3'b011,
			ONE		= 3'b100,
			WAIT0_1 = 3'b101,
			WAIT0_2 = 3'b110,
			WAIT0_3 = 3'b111;

//Nexys3 has a 100MHz clock = 10ns clock period.
//number of counter bits (2^N * 10ns = 10ms tick)
localparam N = 20;

//signal declaration
reg [N-1:0] q_reg;
wire [N-1:0] q_next;
wire m_tick;
reg [2:0] state_reg, state_next;
reg output_next;
reg output_reg;

//================================================
// Counter to generate 10ms tick
//================================================

always @(posedge clk or negedge reset)
	if(!reset)
		q_reg <= 0;
	else
		q_reg <= q_next;

assign q_next = (q_reg==999999) ? 1'b0 : (q_reg + 1);
//output tick
assign m_tick = (q_reg==0) ? 1'b1 : 1'b0;

//================================================
// Debouncing FSM 
//================================================

//state register

always @(posedge clk or negedge reset) begin
	if(!reset) begin
		state_reg <= 1'b0;
		output_reg <= 1'b0;
	end
	else begin 
		state_reg <= state_next;
		output_reg <= output_next;
	end
end


//================================================
// Next-state logic and output logic
//================================================
always @ (*)
	begin
		//db = 1'b0;
		db = output_reg;
		state_next = state_reg; //default state: the same
		output_next = 1'b0; 	  //default output: 0
		case (state_reg)
			ZERO:
				if(sw) 
					state_next = WAIT1_1;
			WAIT1_1:
				if(~sw)
					state_next = ZERO;
				else 
					if(m_tick)
						state_next = WAIT1_2;
			WAIT1_2: 
				if(~sw)
					state_next = ZERO;
				else
					if(m_tick)
						state_next = WAIT1_3;
			WAIT1_3:
				if(~sw)
					state_next = ZERO;
				else
					if(m_tick)
						state_next = ONE;
			ONE:
				begin
					output_next = 1'b1;
					//db = 1'b1;
					if(~sw)
						state_next = WAIT0_1;
				end
			WAIT0_1:
				begin
					output_next = 1'b1;
					//db = 1'b1;
					if(sw)
						state_next = ONE;
					else
						if(m_tick)
							state_next = WAIT0_2;
				end
			WAIT0_2:
				begin
					output_next = 1'b1;
					//db = 1'b1;
					if(sw)
						state_next = ONE;
					else
						if(m_tick)
							state_next = WAIT0_3;
				end
			WAIT0_3:
				begin
					output_next = 1'b1;
					//db = 1'b1;
					if(sw)
						state_next = ONE;
					else
						if(m_tick)
							state_next = ZERO;
				end
			default: begin
				state_next = ZERO;
				//db = 1'b1;
				end
		endcase
	end
endmodule
