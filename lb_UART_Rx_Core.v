`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:42 03/19/2013 
// Design Name: 
// Module Name:    lb_UART_Rx_Core 
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
module lb_UART_Rx_Core(
    input clk,
    input reset,
    input [19:0] baud_value,
    input bit8,
    input parity_en,
    input odd_n_even,
	input cs,
	input rx,
    output [7:0] data_out,
    output done,
	output reg parity_err,
	output reg stopErr //stopbit error 
	);
	
	wire shift;
	reg [10:0] data_received;
	wire [11:0] data_tobe_modified;
	
	reg parity;
	
	lb_UART_Rx_ControlUnit rx_core (
		.clk(clk), 
		.reset(reset), 
		.bit8(bit8), 
		.parity_en(parity_en), 
		.baudPrescale(baud_value), 
		//.baudPrescale(20'b11),
		.cs(cs), 
		.rx(rx), 
		.done(done), 
		.shift(shift)
		);
	
	lb_shiftreg_rx shift_reg (
		.clk(clk), 
		.reset(reset), 
		.data_in(rx), 
		.shift(shift), 
		.data_out(data_tobe_modified)
		);
	
	always @ (*) 
		case({parity_en, bit8})
		0: data_received = {2'b11,data_tobe_modified[9:1]};
		1: data_received = {1'b1,data_tobe_modified[10:1]};
		2: data_received = {1'b1,data_tobe_modified[10:1]};
		3: data_received = data_tobe_modified;
		endcase
		
	assign data_out = (bit8) ? data_received[8:1] : {1'b0,data_received[7:1]};
	
	//even = par
	//odd = impar
	//Parity Check
	always @(*)
		if(parity_en) begin
			
			if(bit8) begin
				if(odd_n_even) begin
					if (^data_received[9:1] == 0) 
						parity_err = 1'b0;
					else
						parity_err = 1'b1; // parity even error detected
				end
				else begin
					if (^data_received[9:1] == 1) 
						parity_err = 1'b0;
					else
						parity_err = 1'b1; // parity odd error detected
				end
			end
			
			else begin
				if(odd_n_even) begin
					if (^data_received[8:1] == 0) 
						parity_err = 1'b0;
					else
						parity_err = 1'b1; // parity even error detected
				end
				else begin
					if (^data_received[8:1] == 1) 
						parity_err = 1'b1;
					else
						parity_err = 1'b0; // parity odd error detected
				end
			end
		end	
		else 
			parity_err = 0;
		
	
	//stopBit Error
	always @ (*) 
		case ({parity_en,bit8})
			0: begin
				if(data_received[8] != 1)
					stopErr = 1;
				else
					stopErr = 0;
			end
			1:begin
				if(data_received[9] != 1)
					stopErr = 1;
				else
					stopErr = 0;
			end
			2:begin
				if(data_received[9] != 1)
					stopErr = 1;
				else
					stopErr = 0;
			end
			3:begin
				if(data_received[10] != 1)
					stopErr = 1;
				else
					stopErr = 0;
			end	
			endcase
endmodule
