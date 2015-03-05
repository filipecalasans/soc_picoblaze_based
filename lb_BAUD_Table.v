`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:14:46 02/27/2013 
// Design Name: 
// Module Name:    lb_BAUD_Table 
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
module lb_BAUD_Table(
    input [3:0] baudSelect,
    output reg [19:0] counterValue
    );

	always @ (*) 
		case(baudSelect)
			4'b0000: counterValue = 20'd20832; //300
			4'b0001: counterValue = 20'd5207; 
			4'b0010: counterValue = 20'd2603;
			4'b0011: counterValue = 20'd1301;
			4'b0100: counterValue = 20'd650; //9600 BAUD
			4'b0101: counterValue = 20'd324;
			4'b0110: counterValue = 20'd162;
			4'b0111: counterValue = 20'd107;
			4'b1000: counterValue = 20'd53;
			4'b1001: counterValue = 20'd27;
			4'b1010: counterValue = 20'd14;
			4'b1011: counterValue = 20'd7;   //921600 BAUD
			default: counterValue = 20'd650; //9600 BAUD
		endcase
/*
	always @ (*) 
		case(baudSelect)
			4'b0000: counterValue = 20'd166665; //300
			4'b0001: counterValue = 20'd41667; 
			4'b0010: counterValue = 20'd20833;
			4'b0011: counterValue = 20'd10417;
			4'b0100: counterValue = 20'd5209; //9600 BAUD
			4'b0101: counterValue = 20'd2604;
			4'b0110: counterValue = 20'd1303;
			4'b0111: counterValue = 20'd868;
			4'b1000: counterValue = 20'd434;
			4'b1001: counterValue = 20'd217;
			4'b1010: counterValue = 20'd109;
			4'b1011: counterValue = 20'd54;   //921600 BAUD
			default: counterValue = 20'd5209; //9600 BAUD
		endcase
*/

endmodule
