`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CECS 460 System on Chip Design
// Engineer: Filipe Calasans Portugal de Oliveira
// Module Name:    lb_bitCounter 
// Project Name:  UART_TX
// Target Devices:  Xilinx Spartan 6
// Description: This module implements a counter that depends of the bits
//				bit8 and parity_en.
//
//////////////////////////////////////////////////////////////////////////////////
module lb_counter5Bits(
    input clk,
	input reset,
	input inc,
	input [N-1:0] value,
	output wire done
    );
	
	localparam N = 4;
	reg [N-1:0] n_bits;
	reg [N-1:0] cont;
	wire [N-1:0] n_cont;
	
	assign n_cont = (inc) ? ((done) ? 0 : (cont+1)) : cont;
	assign done = (cont==n_bits) ? 1 : 0;
		
	always @(posedge clk, negedge reset)
		if(!reset) begin 
			cont <= 0; 
			n_bits <= value;
		end
		else cont <= n_cont;
	
endmodule
