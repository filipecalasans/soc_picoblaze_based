`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:17:29 03/19/2013 
// Design Name: 
// Module Name:    lb_UART_Rx_ControlUnit 
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
module lb_UART_Rx_ControlUnit(
    input clk,
    input reset,
    input bit8,
    input parity_en,
    input [19:0] baudPrescale,
	input cs,
    input rx,
	output done,
    output shift
    );
	
	wire baudTickCounterDone, resetBaudTickCounter, bitCounterDone;
	wire incNumBits, resetNumBitsCounter, half_n_complete;
	
	lb_UART_Rx_fsm rx_fsm (
		.clk(clk), 
		.reset(reset), 
		.baudTickCounterDone(baudTickCounterDone), 
		.bitCounterDone(bitCounterDone), 
		.rx(rx), 
		.done(done), 
		.shift(shift), 
		.half_n_complete(half_n_complete), 
		.incNumBits(incNumBits), 
		.resetBaudTickCounter(resetBaudTickCounter), 
		.resetNumBitsCounter(resetNumBitsCounter)
		);
		
	
		
	lb_16_n_8BaudTickCounter btickcounter (
		.clk(clk), 
		.reset(reset), 
		.prescale(baudPrescale), 
		._16_or_8_ticks(half_n_complete), 
		.cs(cs), 
		.load(resetBaudTickCounter), 
		.done(baudTickCounterDone)
		);
		
	lb_contNumBits bitCounterRx (
		.clk(clk), 
		.reset(reset), 
		.parity_en(parity_en), 
		.bit8(bit8), 
		.inc(incNumBits), 
		.cs(cs), 
		.load(resetNumBitsCounter), 
		.done(bitCounterDone)
		);

endmodule
