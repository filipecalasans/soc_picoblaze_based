`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:10:34 02/26/2013 
// Design Name: 
// Module Name:    lb_16BaudTickCounter 
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
module lb_16BaudTickCounter(
    input clk,
    input reset,
    input [N-1:0] prescale,
	input cs,
	input load,
	output done
    );
	
	localparam N = 20;
	
	wire inc, doneCounterPulseMaker;
	
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
		.value(4'hF), //16 Clock ticks each BTICK
		//.value(4'h01),
		.cs(cs),
		.load(load),
		.done(doneCounterPulseMaker)
		);
	
	lb_clockCounter clockCounter (
		.clk(clk), 
		.reset(reset), 
		.value(prescale), 
		.cs(cs),
		.load(load),	
		.done(inc)
		);
	
endmodule
