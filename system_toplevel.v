`timescale 1ps / 1fs
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:38:48 03/03/2013 
// Design Name: 
// Module Name:    system_toplevel 
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
module system_toplevel(
    input clk,
    input reset,
	input bit8,
	input parity_en,
	input odd_n_even,
	input [3:0] baud_val,
	input rx,
    output tx
    );
	
	wire system_reset;
	wire [7:0] data_in;
	wire [7:0] data_out;
	wire CSn, WE, OE, adrs;
	
	//assign led = {bit8, parity_en, odd_n_even, baud_val};
	
	// Instantiate the module
	echo processor (
		.clk(clk), 
		.reset_ns(system_reset), 
		.data_out(data_out), 
		.adrs(adrs), 
		.data_in(data_in), 
		.WE(WE), 
		.OE(OE), 
		.CSn(CSn)
		);

	lb_UART_toplevel full_uart (
		.clk(clk), 
		.reset(system_reset), 
		.cs(CSn), 
		.we(WE), 
		.oe(OE), 
		.adrs(adrs), 
		.data(data_in), //Tx data
		.bit8(bit8), 
		.parity_en(parity_en), 
		.odd_n_even(odd_n_even), 
		.baud_val(baud_val), 
		.rx(rx),  
		.tx(tx), 
		.data_out(data_out) //Rx Data
		);
	
	lb_reset resetModule (
		.clk(clk), //
		.resetb(reset), //
		.cs(1'b1), //
		.system_reset(system_reset) //
		);


endmodule
