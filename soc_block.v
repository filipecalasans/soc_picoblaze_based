`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:06:33 04/15/2013 
// Design Name: 
// Module Name:    soc_block 
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
module soc_block(clk, reset, tx, rx, interrupt, interrupt_ack, bit8, parity_en, 
	odd_n_even, baud_val, addr_mem_mem_interface, data_mem_mem_interface, control_mem, clk_mem, zero
    );

	input clk, interrupt;
	input reset;
    input bit8;
    input parity_en;
    input odd_n_even;
    input [3:0] baud_val;
	input rx;
    output tx, interrupt_ack;
	output [22:0] addr_mem_mem_interface; 
	inout [15:0] data_mem_mem_interface;
	output [6:0] control_mem;
	output clk_mem;
	output [2:0] zero;
	
	reg we, oe, adrs;
	wire [7:0] out_port, in_port;
	wire write_strobe, read_strobe;
	
	wire [7:0] port_id;
	
	wire clk_mem;
    reg write_mem_interface, read_mem_interface; //ok
    wire [7:0] data_in_mem_interface; //ok
    reg [3:0] address_mem_interface; //ok
    wire  [15:0] data_mem_mem_interface; //external output
	wire [7:0]data_out_mem_interface; // ok
    wire [22:0] addr_mem_mem_interface; //ok
    wire CE_out_mem_interface, WE_out_mem_interface, OE_out_mem_interface;
	wire ADV_mem_interface, CRE_mem_interface, UB_mem_interface, LB_mem_interface;
	wire [6:0] control_mem;
	wire [2:0] zero;
	
	assign zero = 0;
	assign clk_mem = 0;
	assign control_mem = {CE_out_mem_interface, WE_out_mem_interface, OE_out_mem_interface,
							ADV_mem_interface, CRE_mem_interface, UB_mem_interface, LB_mem_interface};
	lb_reset uart_reset (
    .clk(clk), 
    .resetb(reset), 
    .cs(1'b0), 
    .system_reset(u_reset)
    );
	
	// Instantiate the module
lb_reset_processor proc_reset (
    .clk(clk), 
    .resetb(reset), 
    .cs(1'b0), 
    .system_reset(processor_reset)
    );
	

processor_top_level processor (
    .clk(clk), 
    .port_id(port_id), 
    .write_strobe(write_strobe), 
    .out_port(out_port), 
    .read_strobe(read_strobe), 
    .interrupt(interrupt), 
    .interrupt_ack(interrupt_ack), 
    .reset(reset), 
    .in_port(in_port), 
    .k_write_strobe(k_write_strobe)
    );
	
	
lb_UART_toplevel uart (
    .clk(clk), 
    .reset(u_reset), 
    .cs(1'b0), 
    .we(we), 
    .oe(oe), 
    .adrs(adrs), 
    .data(out_port), 
    .bit8(bit8), 
    .parity_en(parity_en), 
    .odd_n_even(odd_n_even), 
    .baud_val(baud_val), 
    .rx(rx), 
    .tx(tx), 
    .data_out(in_port)
    );

assign in_port = data_out_mem_interface;
assign data_in_mem_interface = out_port;

memory_interface mem_interface (
    .clk(clk), 
    .reset(u_reset), 
    .write(write_mem_interface), 
    .read(read_mem_interface), 
    .cs(1'b0), 
    .data_in(data_in_mem_interface), 
    .address(address_mem_interface), 
    .data_mem(data_mem_mem_interface), 
    .data_out(data_out_mem_interface), 
    .addr_mem(addr_mem_mem_interface), 
    .CE_out(CE_out_mem_interface), 
    .WE_out(WE_out_mem_interface), 
    .OE_out(OE_out_mem_interface), 
    .ADV(ADV_mem_interface), 
    .CRE(CRE_mem_interface), 
    .UB(UB_mem_interface), 
    .LB(LB_mem_interface)
    );

//Memory Interface Block
//CONSTANT nop,    00	; nop
//CONSTANT war0,   01	; port write memory address 0
//CONSTANT war1,   02	; port write memory address 1
//CONSTANT war2,   03	; port write memory address 2
//CONSTANT wdr0,   04	; port write memory data 0
//CONSTANT wdr1,   05	; port write memory data 1
//CONSTANT rdir0,  06	; port read memory data 0
//CONSTANT rdir1,  07	; port read memory data 1
//CONSTANT do_mr,  08	; port do memory write
//CONSTANT do_mw,  09	; port do memory read
//CONSTANT uart_d, 0A	; port uart data
//CONSTANT uart_s, 0B	; port uart status
//CONSTATN status  0C	; port read status Memory


//BUS Control
always @ (*)
//Interface Block
	if(port_id==8'h0b || port_id == 8'h0a) begin
		write_mem_interface = 0;
		read_mem_interface = 0;
		
		if(read_strobe) begin
			oe = 1; end
		else begin
			oe = 0;
			end
		if(port_id == 8'h0a) begin
			adrs = 0;
			if(write_strobe) begin
				we = 1; end
			else begin
				we = 0; end
			end
		else begin
			we = 0;
			adrs = 1;
			end
		end
		else begin
			oe=0;
			we=0;
			case(port_id)
			1: begin 
				if (write_strobe) begin
					address_mem_interface = 4'h1;
					write_mem_interface = 1;
					read_mem_interface = 0;
				end
				else begin
					write_mem_interface = 0;
					read_mem_interface = 0;
				end
			end
			2:begin
				if (write_strobe) begin
					address_mem_interface = 4'h2;
					write_mem_interface = 1;
					read_mem_interface = 0;
				end
				else begin
					write_mem_interface = 0;
					read_mem_interface = 0;
				end
			end
			3:begin
				if (write_strobe) begin
					address_mem_interface = 4'h3;
					write_mem_interface = 1;
					read_mem_interface = 0;
				end
				else begin
					write_mem_interface = 0;
					read_mem_interface = 0;
				end
			end
			4:begin
				if (write_strobe) begin
					address_mem_interface = 4'h4;
					write_mem_interface = 1;
					read_mem_interface = 0;
				end
				else begin
					write_mem_interface = 0;
					read_mem_interface = 0;
				end
			end
			5:begin
				if (write_strobe) begin
					address_mem_interface = 4'h5;
					write_mem_interface = 1;
					read_mem_interface = 0;
				end
				else begin
					write_mem_interface = 0;
					read_mem_interface = 0;
				end
			end
			6:begin
				if (read_strobe) begin
					address_mem_interface = 4'h6;
					write_mem_interface = 0;
					read_mem_interface = 1;
				end
				else begin
					write_mem_interface = 0;
					read_mem_interface = 0;
				end
			end
			7:begin
				if (read_strobe) begin
					address_mem_interface = 4'h7;
					write_mem_interface = 0;
					read_mem_interface = 1;
				end
				else begin
					write_mem_interface = 0;
					read_mem_interface = 0;
				end
			end
			8:begin
				if (write_strobe) begin
					address_mem_interface = 4'h8;
					write_mem_interface = 1;
					read_mem_interface = 0;
				end
				else begin
					write_mem_interface = 0;
					read_mem_interface = 0;
				end
			end
			9:begin
				if (write_strobe) begin
					address_mem_interface = 4'h9;
					write_mem_interface = 1;
					read_mem_interface = 0;
				end
				else begin
					write_mem_interface = 0;
					read_mem_interface = 0;
				end
			end
			4'hC:begin
				if (read_strobe) begin
					address_mem_interface = 4'hA;
					write_mem_interface = 0;
					read_mem_interface = 1;
				end
				else begin
					write_mem_interface = 0;
					read_mem_interface = 0;
				end
			end
			default: begin
				write_mem_interface = 0;
				read_mem_interface = 0;
				end
			endcase
		end
	
//assign adrs = (port_id == 8'h0a) ? 0 : ((port_id==8'h0b) ? 1 : 0);
//assign oe = ((port_id == 8'h0a) | (port_id == 8'h0b) ) ? ((read_strobe) ? 1 : 0) : 0;
//assign we = (port_id == 8'h0a) ? ((write_strobe) ? 1 : 0) : 0;
endmodule
