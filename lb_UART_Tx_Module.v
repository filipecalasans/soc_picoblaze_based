`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:35:32 02/27/2013 
// Design Name: 
// Module Name:    lb_UART_Tx_Module 
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
module lb_UART_Tx_Core(
    input clk,
    input reset,
    input [7:0] data,
    input start,
    input [19:0] baud_value,
    input bit8,
    input parity_en,
    input odd_n_even,
	input cs,
    output tx,
    output tx_done
    );
		
	reg [2:0] missingBits;
	wire shift, load;
	
	lb_UART_Tx_ControlUnit tx_cu (
		.clk(clk), 
		.reset(reset), 
		.start(start), 
		.bit8(bit8), 
		.parity_en(parity_en), 
		.baudPrescale(baud_value), 
		.cs(cs),
		.done(tx_done), 
		.load(load), 
		.shift(shift)
		);
	
	lb_11bitsShiftRegister tx_shift_reg (
		.clk(clk), 
		.reset(reset), 
		.load(load), 
		.shift(shift), 
		.data_in({missingBits,data[6:0],1'b0,1'b1}),
		.cs(cs),		
		.data_out(tx)
		);
	
	//Missing Bits Combo Logic !
	always @ (*)
		case ({bit8, parity_en,odd_n_even})
			3'b000: missingBits = {1'b1, 1'b1, 1'b1};
			3'b001: missingBits = {1'b1, 1'b1, 1'b1};
			3'b010: missingBits = {1'b1, 1'b1, (^data[6:0])};
			3'b011: missingBits = {1'b1, 1'b1, ~(^(data[6:0]))};
			3'b100: missingBits = {1'b1, 1'b1, data[7]};
			3'b101: missingBits = {1'b1, 1'b1, data[7]};
			3'b110: missingBits = {1'b1, ^(data[7:0]), data[7]};
			3'b111: missingBits = {1'b1, ~(^(data[7:0])), data[7]};
		endcase
	
endmodule
