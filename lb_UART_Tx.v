`timescale 1ps / 1fs
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:07:58 03/01/2013 
// Design Name: 
// Module Name:    lb_UART_Tx 
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
module lb_UART_Tx(
    input clk,
    input reset,
    input cs,
    input we,
    input [7:0] data,
    input bit8,
    input parity_en,
    input odd_n_even,
    input [19:0] baud_val,
	output txrdy,
    output tx
    );
	
	wire [7:0] fifo_uart_data;
	wire re_txDone;
	wire full;
	wire start;
	wire empty;
	wire next_tx;
	wire next_txrdy;
	
	
	assign start = ~empty;
	
	assign tx = (cs) ? 1'bz : next_tx;
	assign txrdy = (cs) ? 1'bz :  ~next_txrdy ;
	
	lb_UART_Tx_Core uart_tx (
		.clk(clk), 
		.reset(reset), 
		.data(fifo_uart_data), 
		.start(start), 
		.baud_value(baud_val),
		.bit8(bit8), 
		.parity_en(parity_en), 
		.odd_n_even(odd_n_even), 
		.tx(next_tx), 
		.tx_done(re_txDone)
		);
	
	lb_buffer fifo (
		.clk(clk), 
		.reset(reset), 
		.re(re_txDone), 
		.w_data(data), 
		.we(we), 
		.full(next_txrdy), 
		.r_data(fifo_uart_data), 
		.empty(empty)
		);

endmodule
