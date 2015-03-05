`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:07:07 03/19/2013 
// Design Name: 
// Module Name:    lb_16_n_8BaudTickCounter 
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
module lb_16_n_8BaudTickCounter(
     input clk,
    input reset,
    input [N-1:0] prescale,
	input _16_or_8_ticks, //16 = 1, 8 = 0
	input cs,
	input load,
	output done
    );
	
	localparam N = 20;
	
	wire inc, doneCounterPulseMaker;
	wire [3:0] countValue;
	
	assign countValue = (_16_or_8_ticks) ? 4'hF : 4'h7;
	
	lb_pulseMakerNegEdge pulseMakerNegEdge (
		.clk(clk), 
		.signal_in(doneCounterPulseMaker), 
		.reset(reset), 
		.cs(cs),
		.pulse(done)
		);
	
	lb_counter4Bits counter4Bits (
		.clk(clk), 
		.reset(reset), 
		.inc(inc), 
		.value(countValue), //16 or 8 Clock ticks each BTICK
		.cs(cs),
		.load(load),
		.done(doneCounterPulseMaker)
		);
	
	lb_clockCounter clockCounter (
		.clk(clk), 
		.reset(reset), 
		.value(prescale), 
		//.value(20'b11),
		.cs(cs),
		.load(load),	
		.done(inc)
		);
	

endmodule
