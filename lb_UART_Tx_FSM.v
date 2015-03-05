`timescale 1ps / 1fs
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:37:04 02/27/2013 
// Design Name: 
// Module Name:    lb_UART_Tx_FSM 
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
module lb_UART_Tx_FSM(
    input clk,
    input reset,
    input start,
    input baudTickCounterDone,
    input bitCounterDone,
	input cs,
    output reg done,
    output reg shift,
    output reg load,
    output reg incNumBits,
    output reg resetBaudTickCounter,
	output reg resetNumBitsCounter
    );
	
	localparam IDLE 		  = 2'b00,
			   LOAD_SHIFT_REG = 2'b01,
			   SHIFT_REG      = 2'b10,
			   WAIT_BIT_TIME  = 2'b11;
			   
	reg nxt_done, nxt_shift, nxt_load, nxt_incNumBits, nxt_resetBaudTickCounter;
	reg nxt_resetNumBitsCounter;
	
	reg [1:0] nq;
	reg [1:0] q;
	
/***************************************************
**  Present State assignment
**
***************************************************/	
	
	always @ (posedge clk, negedge reset)
		//if(!cs) begin 
			if(!reset) 
					q <= IDLE;
			else
					q <= nq;
		//end
	
/***************************************************
**  Present output assignment
**
***************************************************/	
	
	always @ (posedge clk, negedge reset)
		//if(!cs) begin
			if(!reset) 
				{done, shift, load, incNumBits, 
						resetBaudTickCounter, resetNumBitsCounter} <= 6'b1_0_0_0_1_1;
			else begin
				done <= nxt_done;
				shift <= nxt_shift;
				load <= nxt_load;
				incNumBits <= nxt_incNumBits;
				resetBaudTickCounter <= nxt_resetBaudTickCounter;
				resetNumBitsCounter <= nxt_resetNumBitsCounter;
			end
		//end
		
/***************************************************
** State Transition Logic and 
**
***************************************************/

	always @ (*)
		case (q)
			IDLE: begin
				{nxt_done, nxt_shift, nxt_load, nxt_incNumBits, nxt_resetBaudTickCounter, nxt_resetNumBitsCounter} = 6'b1_0_0_0_1_0;
				if(start)
					nq = LOAD_SHIFT_REG;
				else
					nq = IDLE;
			end
			LOAD_SHIFT_REG: begin
				{nxt_done, nxt_shift, nxt_load, nxt_incNumBits, nxt_resetBaudTickCounter, nxt_resetNumBitsCounter} = 6'b0_0_1_0_1_1;
				nq = SHIFT_REG;
			end
			SHIFT_REG: begin
				{nxt_done, nxt_shift, nxt_load, nxt_incNumBits, nxt_resetBaudTickCounter, nxt_resetNumBitsCounter} = 6'b0_1_0_1_0_1;
				nq = WAIT_BIT_TIME;
			end	
			WAIT_BIT_TIME:begin
				{nxt_done, nxt_shift, nxt_load, nxt_incNumBits, nxt_resetBaudTickCounter, nxt_resetNumBitsCounter} = 6'b0_0_0_0_1_1;
				if(!baudTickCounterDone)
					nq = WAIT_BIT_TIME;
				else begin 
					if (!bitCounterDone)
						nq = SHIFT_REG;
					else 
						nq = IDLE;
				end
			end
		endcase

endmodule
