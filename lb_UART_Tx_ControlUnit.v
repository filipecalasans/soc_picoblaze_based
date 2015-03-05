`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:51:07 02/27/2013 
// Design Name: 
// Module Name:    lb_UART_Tx_ControlUnit 
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
module lb_UART_Tx_ControlUnit(
    input clk,
    input reset,
    input start,
    input bit8,
    input parity_en,
    input [19:0] baudPrescale,
	input cs,
    output done,
    output load,
    output shift
    );
	
	wire baudTickCounterDone, resetBaudTickCounter, bitCounterDone;
	wire incNumBits, resetNumBitsCounter;
	
	//assign startCounterNumBits  = resetNumBitsCounter & reset;
	//assign startBaudTickCounter = resetBaudTickCounter & reset;
	
	lb_16BaudTickCounter baudTickCounter (
		.clk(clk), 
		.reset(reset), 
		.prescale(baudPrescale), 
		.cs(cs),
		.load(resetBaudTickCounter),
		.done(baudTickCounterDone)
		);
	
	lb_UART_Tx_FSM fsm (
		.clk(clk), 
		.reset(reset), 
		.start(start), 
		.baudTickCounterDone(baudTickCounterDone), 
		.bitCounterDone(bitCounterDone),
		.cs(cs),
		.done(done), 
		.shift(shift), 
		.load(load), 
		.incNumBits(incNumBits), 
		.resetBaudTickCounter(resetBaudTickCounter), 
		.resetNumBitsCounter(resetNumBitsCounter)
		);

	lb_contNumBits counterNumBits (
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
