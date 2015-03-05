`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:03:17 04/28/2013 
// Design Name: 
// Module Name:    memor_interface 
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
module memory_interface(
    input clk,
    input reset,
    input write,
    input read,
    input cs,
    input [7:0] data_in,
    input [3:0] address,
    inout  [15:0] data_mem,
	 output reg [7:0]data_out,
    output [22:0] addr_mem,
    output CE_out, 
    output WE_out,
    output OE_out,
    output ADV,
    output CRE,
    output UB,
    output LB
    );

    reg WE, OE, CE;
	reg [7:0] addr0, addr1, addr2, data_out0, data_out1, data_in0, data_in1, status;
	reg [7:0] nxt_status;
	
	wire wCE, wOE, wWE;
	
	wire [15:0] data_in_buf;
	wire  [15:0] data_mem;
	
	//write state machine variables
	reg [3:0] q;
	reg [3:0] n_q;
	reg [14:0] cont;
	reg n_CE, n_WE, n_OE;
	reg inc, load_data_in_regs;
	reg [15:0] show_data_out;
	
	IOBUF io_data_mem [15:0] (.I({data_out1,data_out0}), .O(data_in_buf), .T(show_data_out), .IO(data_mem));
	/*io_buf buf_io (
    .IO(data_mem), 
    .O(data_in_buf), 
    .I({data_out1,data_out0}), 
    .T(show_data_out[0])
    );*/

	OBUF o_addr [22:0] (.I({addr2[6:0], addr1, addr0}), .O(addr_mem));
	
	OBUF zero_control_signals [3:0] (.I(4'h0), .O({LB,UB,ADV,CRE}));
	
	assign {wCE, wOE, wWE} = {CE, OE, WE};
	OBUF CE_BUF (.I(wCE), .O(CE_out));
	OBUF WE_BUF (.I(wWE), .O(WE_out));
	OBUF OE_BUF (.I(wOE), .O(OE_out));
	
	//Register Write
	always @ (posedge clk, negedge reset)
		if(!reset) begin
			addr0 <= 0;
			addr1 <= 0;
			addr2 <= 0;
			data_out0 <= 0;
			data_out1 <= 0; 
			data_in0 <= 0;
			data_in1 <= 0;
			end
		else begin
			if(write) begin
				case(address)
					1: addr0 <= data_in;
					2: addr1 <= data_in;
					3: addr2 <= data_in;
					4: data_out0 <= data_in;
					5: data_out1 <= data_in;
					endcase
				end
			if(load_data_in_regs)
				{data_in1, data_in0} <= data_in_buf;
			
			/*if(read) begin
				case(address)
					6: data_out <= data_in0;
					7: data_out <= data_in1;
					10: data_out <= status;
				endcase
			end
			else begin
				data_out <= 8'hzz;
			end*/
		end
	
	
	always @ (*)
		if(read) begin
			case(address)
				6: data_out <= data_in0;
				7: data_out <= data_in1;
				10: data_out <= status;
				endcase
			end
		else begin
			data_out <= 8'hzz;
		end
	
	//output registers
	always @ (posedge clk, negedge reset) 
		if(!reset) begin
			WE <= 1'b1;
			OE <= 1'b1;
			CE <= 1'b1;
			q <= 5; //Goes to reset state
			status <= 8'h00;
			cont <= 0;
			end
		else begin
			q <= n_q;
			WE <= n_WE;
			CE <= n_CE;
			OE <= n_OE;
			status <= nxt_status;
			
			if(inc == 1)
				cont <= cont + 1;
			else
				cont <= 0;	
			
			end
	
	//WRITE AND READ STATE MACHINE SIGNAL
	always @ (*)
		case (q)
			0: begin
				n_WE = 1'b1;
				n_CE = 1'b0;
				n_OE = 1'b1;
				inc = 0;
				load_data_in_regs = 0;
				if(write && address == 9) begin //goes to write sequence
					n_q = 6;
					//n_WE = 1'b1;
					//n_CE = 1'b0;
					//n_OE = 1'b0;
					//inc = 0;
					nxt_status = 8'h00;
					show_data_out = 0;
					//load_data_in_regs = 0;
					end
				else if(write && address == 8) begin //goes to read sequence
					n_q = 3;
					//n_WE = 1'b1;
					//n_CE = 1'b0;
					//n_OE = 1'b0;
					//inc = 0;
					nxt_status = 0;
					show_data_out = 16'hFFFF;
					//load_data_in_regs = 0;
					end
				else begin //stay at idle state
					n_q = 0;
					//n_WE = 1'b1;
					//n_CE = 1'b1;
					//n_OE = 1'b0;
					//inc = 0;
					show_data_out = 16'hFFFF;
					nxt_status = 8'h01;
					//load_data_in_regs = 0;
					end
				
				end
			6: begin
					inc = 0;
					nxt_status = 0;
					n_WE = 1'b1;
					n_CE = 1'b0;
					n_OE = 1'b0;
					show_data_out = 0;
					load_data_in_regs = 0;	
					n_q = 1;
			end
			1: begin //state 1 write sequence
					inc = 1;
					nxt_status = 0;
					n_WE = 1'b0;
					n_CE = 1'b0;
					n_OE = 1'b0;
					show_data_out = 0;
					load_data_in_regs = 0;
					if(cont == 8)
						n_q = 2;
				end
			2: begin //state 2 write sequence
					nxt_status = 0;
					n_WE = 1'b1;
					n_CE = 1'b0;
					n_OE = 1'b1;
					n_q = 0;
					inc = 0;
					load_data_in_regs = 0;
					show_data_out = 0;
				end
			3:begin //READ STATE
					nxt_status = 0;
					n_WE = 1'b1;
					n_CE = 1'b0;
					n_OE = 1'b0;
					inc = 1;
					load_data_in_regs = 0;
					show_data_out = 16'hFFFF;	
					if(cont < 8)
						n_q = 3;
					else
						n_q = 4;	
				end
			4:begin //READ STATE
					nxt_status = 0;
					n_WE = 1'b1;
					n_CE = 1'b0;
					n_OE = 1'b1;
					n_q = 0;
					inc = 0;
					load_data_in_regs = 1;
					show_data_out = 16'hFFFF;					
				end
			5: begin //Reset state, must wait 15us to start operation
					nxt_status = 0;
					n_WE = 1'b1;
					n_CE = 1'b1;
					n_OE = 1'b1;
					if(cont < 15000)
						n_q = 5;
					else 
						n_q = 0;
					inc = 1;
					load_data_in_regs = 0;
					show_data_out = 16'hFFFF;					
				end
			endcase

endmodule
