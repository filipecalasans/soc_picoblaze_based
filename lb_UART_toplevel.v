`timescale 1ps / 1fs
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:44:48 03/02/2013 
// Design Name: 
// Module Name:    lb_UART_toplevel 
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
module lb_UART_toplevel(
    input clk,
    input reset,
    input cs,
    input we,
	input oe,
	input adrs,
    input [7:0] data,
    input bit8,
    input parity_en,
    input odd_n_even,
    input [3:0] baud_val,
	input rx,
    output tx,
	output [7:0] data_out
	);
	
	wire [19:0] baud;
	wire system_reset;
	wire next_tx, next_txrdy;
	reg [7:0] status_in;
	wire [7:0] status_out;
	wire [7:0] data_rx;
	wire [7:0] data_buff;
	assign tx = (cs) ? next_tx : next_tx;
	assign txrdy = (cs) ? next_txrdy : next_txrdy;
	
	reg [7:0] buffer_tx;
	
	lb_UART_Tx_Core uart_tx(
    .clk(clk), 
    .reset(reset), 
    //.data(data), 
    .data(buffer_tx),
	.start(we&~cs), 
    .baud_value(baud), 
    //.baud_value(20'b10),
	.bit8(bit8), 
    .parity_en(parity_en), 
    .odd_n_even(odd_n_even), 
	.cs(cs),
    .tx(next_tx), 
    .tx_done(next_txrdy)
    );
	
	lb_BAUD_Table baudMux (
    .baudSelect(baud_val), 
    .counterValue(baud)
    );
	
	lb_UART_Rx_Core uart_rx (
		.clk(clk), 
		.reset(reset), 
		.baud_value(baud), 
		.bit8(bit8), 
		.parity_en(parity_en), 
		.odd_n_even(odd_n_even), 
		.cs(cs), 
		.rx(rx), 
		.data_out(data_rx), 
		.done(donerx), 
		.parity_err(parity_err), 
		.stopErr(stopErr)
		);
	
	
	lb_8bitReg statusReg(
		.clk(clk), 
		.reset(reset), 
		.d_in(status_in), 
		.load(donerx|(oe&(~cs))), 
		.d_out(status_out)
		);
	
	lb_8bitReg dataRxBuff(
		.clk(clk), 
		.reset(reset), 
		.d_in(data_rx), 
		.load(donerx), 
		.d_out(data_buff)
		);
		
	//as the txrdy is already driven to a register before to come out the fsm, 
	//we decided not store the txrdy into the status register avoiding delay.
	assign data_out = oe ? ((adrs) ? {status_out[7:2],txrdy,status_out[0]} : data_buff) : 8'hzzzzzzzz;
	
	always @ (*)
		//;
		if((oe&(~cs)) && !donerx) begin
			status_in[6:4] = 3'b000;
			status_in[0] = 1'b0;
			status_in[1] = txrdy;//ignore
			{status_in[7],status_in[3:2]} = 3'b000;
			end
		else if(!(oe&(~cs)) && donerx) begin
			status_in[6:4] = {stopErr, parity_err, donerx & status_out[0]};
			status_in[0] = donerx;
			status_in[1] = txrdy; //ignore
			{status_in[7],status_in[3:2]} = 3'b000;
			end
		else if((oe&(~cs)) && donerx) begin
			status_in[6:4] = {stopErr, parity_err, 1'b0};
			status_in[0] = donerx;
			status_in[1] = txrdy; //ignore
			{status_in[7],status_in[3:2]} = 3'b000;
			end
				
	always @ (posedge clk, negedge reset)
		if(!reset)
			buffer_tx <= 0;
		else if(we)
			buffer_tx <= data;
			
endmodule
