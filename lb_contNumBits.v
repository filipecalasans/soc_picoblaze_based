`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:05:59 02/26/2013 
// Design Name: 
// Module Name:    lb_contNumBits 
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
module lb_contNumBits(
    input clk,
    input reset,
    input parity_en,
    input bit8,
	input inc,
	input cs,
	input load,
    output done
    );
	
	reg [3:0] value;
	
	lb_counter4Bits counter4Bits (
		.clk(clk), 
		.reset(reset), 
		.inc(inc), 
		.value(value),
		.cs(cs),
		.load(load),
		.done(done)
		);
		
	always @ (*)
		case({parity_en, bit8}) 
			2'b00: value = 10;
			2'b01: value = 11;
			2'b10: value = 11;
			2'b11: value = 12;
		endcase
	
endmodule
