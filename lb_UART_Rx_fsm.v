`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:06:48 03/18/2013 
// Design Name: 
// Module Name:    lb_UART_Rx_fsm 
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
module lb_UART_Rx_fsm(
	input clk,
    input reset,
    input baudTickCounterDone,
    input bitCounterDone,
	input rx,
    output reg done,
    output reg shift,
	output reg half_n_complete,
    output reg incNumBits,
    output reg resetBaudTickCounter,
	output reg resetNumBitsCounter
    );
	
	localparam N = 3;
	
	localparam IDLE = 0,
			   WAIT_HALF_BIT = 1,
			   START_BIT_TIME = 2,
			   WAIT_BIT_TIME = 3,
			   SHIFT = 4, 
			   DONE = 5;
	
	reg [N-1:0] q;
	reg [N-1:0] n_q;
	
	always @ (posedge clk, negedge reset)
		if(!reset)
			q <= IDLE;
		else
			q <= n_q;
			
	//add outputs
	//{done, shift, incNumBits, resetBaudTickCounter, resetNumBitsCounter}
	always @ (*)
		case (q)
			IDLE: begin
				{done, shift, incNumBits, resetBaudTickCounter, 
					resetNumBitsCounter, half_n_complete} = 6'b0_0_0_0_0_0;
				if(rx == 0) 
					n_q = WAIT_HALF_BIT;
				else if (rx == 1)
					n_q = IDLE;
			end
			WAIT_HALF_BIT: begin
				{done, shift, incNumBits, resetBaudTickCounter, 
					resetNumBitsCounter, half_n_complete} = 6'b0_0_0_1_1_0;
				if(!baudTickCounterDone)
					n_q = WAIT_HALF_BIT; 
				if(baudTickCounterDone && rx ==0)
					n_q = SHIFT;
				//if(baudTickCounterDone && rx ==1)
				if(rx == 1)	//false start bit
					n_q = IDLE;
			end
			START_BIT_TIME: begin
				{done, shift, incNumBits, resetBaudTickCounter, 
					resetNumBitsCounter, half_n_complete} = 6'b0_0_0_0_1_1;
				if(bitCounterDone)
					n_q = DONE;
				if(!bitCounterDone)
					n_q = WAIT_BIT_TIME;
				//starts the Bit time generator.
			end
			WAIT_BIT_TIME: begin
				{done, shift, incNumBits, resetBaudTickCounter, 
					resetNumBitsCounter, half_n_complete} = 6'b0_0_0_1_1_1;
				if(!baudTickCounterDone)
					n_q = WAIT_BIT_TIME;
				if(baudTickCounterDone)
					n_q = SHIFT;
			end
			SHIFT: begin
				{done, shift, incNumBits, resetBaudTickCounter, 
					resetNumBitsCounter, half_n_complete} = 6'b0_1_1_0_1_1;
				n_q = START_BIT_TIME;
				//inc number of bits
			end
			DONE: begin
				{done, shift, incNumBits, resetBaudTickCounter, 
					resetNumBitsCounter, half_n_complete} = 6'b1_0_0_0_1_1;
				n_q = IDLE;
			end
			default: begin
				{done, shift, incNumBits, resetBaudTickCounter, 
					resetNumBitsCounter, half_n_complete} = 6'b0_0_0_0_0_0;
				n_q = IDLE;
			end
		endcase
endmodule
