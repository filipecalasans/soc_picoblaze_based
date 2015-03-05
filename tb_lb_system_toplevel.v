`timescale 1ns/1ns

/***************************************************
 File: TOP_tb.v
 Hierarchy:  TOP_tb
               |
	      TOP
	_______|_____
	|            | 
      UART          ECHO

 Test Environment for CoreUART and ECHO
 John Tramel CECS460A CSULB
 Version 1.0 September 20, 2008
 Version 1.1 September 21, 2008
 Version 1.2 October 09, 2008
 Version 1.3 April 27, 2010 - modified for use with processor/echo

 Assumptions:
     1) Always 1 start bit, 1 stop bit
     2) No parity, stop follows data
     3) With parity stop follows parity
     4) 7N1 = seven bits, no parity,   one stop
     5) 7E1 = seven bits, even parity, one stop
     6) 7O1 = seven bits, odd parity,  one stop
     7) 8N1 = eight bits, no parity,   one stop
     8) 8E1 = eight bits, even parity, one stop
     9) 8O1 = eight bits, odd parity,  one stop



 Table Calculation
       0 - r=300,    bt=  3.3333ms,f=166666,h=83333
       1 - r=1200,   bt= 833.333us,f= 41666,h=20833
       2 - r=2400,   bt= 416.667us,f= 20833,h=10416
       3 - r=4800,   bt= 208.333us,f= 10416,h= 5208
       4 - r=9600,   bt= 104.170us,f=  5208,h= 2604
       5 - r=19200,  bt=  52.083us,f=  2604,h= 1302
       6 - r=38400,  bt=  26.041us,f=  1302,h=  651
       7 - r=57600,  bt=  17.361us,f=   868,h=  434
       8 - r=115200, bt=   8.680us,f=   434,h=  217
       9 - r=230400, bt=   4.340us,f=   217,h=  108
      10 - r=460800, bt=   2.170us,f=   108,h=   54
      11 - r=921600, bt=   1.085us,f=    54,h=   27
****************************************************/

module tb_lb_system_toplevel;

// system inputs

reg         clk;          // 50 MHz input clock
reg         reset;        // high active reset

// configuration inputs

reg         bit8;          // 1=8bits/0=7bits
reg         parity_en;     // 1=parity enabled/0=no parity enabled
reg         odd_n_even;     // 1=odd/0=even
reg  [ 3:0] baud_val;     // select the baud rate
reg  [ 7:0] ascii;       // ascii char to send
reg  [ 7:0] bitcount;
reg         rx;          // receive data to uart
wire        tx;          // transmit data from uart
reg  [10:0] in_buf;
reg  [ 1:0] state;
reg         pulse;
reg         done;
reg  [ 8:0] half;
reg  [ 3:0] num_bits;  // add functionality
reg         checking;  // flag to know when comparing
reg  [10:0] shifter;
reg  [ 7:0] waitread;  // wait to read memory

wire [ 7:0] led;
wire [ 3:0] an;
wire [ 6:0] segs;

integer     i, j, k;
integer     bit_cnt;
integer     scount;
integer     tx_count;
integer     error_count;

//
// define the table memory
//

reg [17:0]  full_table [0:11];     // table for full bit count
integer     time_table [0:11];     // table for timeouts
integer     baud_rate  [0:11];     // table for baud rates

//
// fill the memories
//

   initial 
      begin
      full_table[0]  = 166666;
      full_table[1]  =  41666;
      full_table[2]  =  20833;
      full_table[3]  =  10416;
      full_table[4]  =   5208;
      full_table[5]  =   2604;
      full_table[6]  =   1302;
      full_table[7]  =    868;
      full_table[8]  =    434;
      full_table[9]  =    217;
      full_table[10] =    108;
      full_table[11] =     54;

// delays in # of 20 ns clocks
     
      time_table[0]  = 4_166_650;
      time_table[1]  = 1_041_650;
      time_table[2]  =   520_825;
      time_table[3]  =   260_400;
      time_table[4]  =   130_200;
      time_table[5]  =    65_100;
      time_table[6]  =    43_200;
      time_table[7]  =    21_600;
      time_table[8]  =    10_850;
      time_table[9]  =     5_400;
      time_table[10] =     2_700;
      time_table[11] =     1_350;

// baud rate for display

      baud_rate[0]  =    300;
      baud_rate[1]  =   1200;
      baud_rate[2]  =   2400;
      baud_rate[3]  =   4800;
      baud_rate[4]  =   9600;
      baud_rate[5]  =  19200;
      baud_rate[6]  =  38400;
      baud_rate[7]  =  57600;
      baud_rate[8]  = 115200;
      baud_rate[9]  = 230400;
      baud_rate[10] = 460800;
      baud_rate[11] = 921600;
      end

//
// instantiate the DUT
//
wire [7:0] counted;
system_toplevel uut (
    .clk(clk), 
    .reset(reset), 
    .bit8(bit8), 
    .parity_en(parity_en), 
    .odd_n_even(odd_n_even), 
    .baud_val(baud_val), 
    .rx(rx), 
    .tx(tx)
    );
//
// Print welcome banner
//

initial begin
	$display(" ");
	$display("CECS 460 CoreUART Test Environment");
	$display("Version 2.0");
	$display("Written by John Tramel");
	$display("Pass Cases only at this time - next verison introduce errors");
	$display("Please notify of any discrepancies");
	$display(" ");
        end

//
// initialize the inputs
//

initial begin
	waitread = 0;
        {clk, reset, rx} = 3'b010;
        {bit8,  parity_en, odd_n_even} = 3'b0; // 7bit - 7N1 
        {baud_val} = 4'b0;
        rx = 1;                                // MARK
        pulse = 0;
	error_count = 0;
	in_buf = 11'b0;
	checking = 0;
	shifter = 0;
	ascii = 0;
        end

  always @(bit8 or parity_en or odd_n_even)
	   case ({bit8,parity_en,odd_n_even})
		   3'b000: num_bits =  9;
		   3'b001: num_bits =  9;
		   3'b010: num_bits = 10;
		   3'b011: num_bits = 10;
		   3'b100: num_bits = 10;
		   3'b101: num_bits = 10;
		   3'b110: num_bits = 11;
		   3'b111: num_bits = 11;
	          default: num_bits = 9;
            endcase
	    
//
// setup the 50MHz clock
//

always #20 clk = ~clk;

//
// this assumes all parity and baud rate issues resolved
//

initial begin
      baud_val = 4;
      $display("Baud Rate set to: ", baud_rate[4]);       // fastest baud rate for sim
      {bit8, parity_en, odd_n_even} = 0;                  // 7 bit no parity
      $display("Seven bits - No Parity");
      $display(" ");
                                       // assert reset
      repeat (5) @(negedge clk) ;                         // delay 5 clocks
      reset = 0;                                        // deassert reset
      repeat (5) @(negedge clk) ;                         // delay 5 clocks
      ascii = 8'b0;
      for (i = 0; i < 1000; i = i + 1)
        begin
        if (waitread == 100)
	   SendChar("*");
        else
           SendChar(ascii);
        if (waitread == 100)
	   #10000 waitread = 0;                           // allow time for return values
        TimeOut;
        ascii = ascii + 1;
	waitread = waitread + 1;
        end  // for i
   end //initial

//
// define the tasks to perform the testing
//

task SendChar;
   input [ 7:0] ascii;

   integer      count;

   begin
      shifter[0] = 1'b0; // always start bit
      shifter[7:1] = ascii[6:0];                 // 7 bit data
      shifter[8] = 1'b1;                         // stop bit
      scount = 9;

     for (bitcount = 0; bitcount < scount; bitcount = bitcount + 1)
        for (count = 0; count < full_table[4]; count = count + 1)
           @(posedge clk) rx = shifter[bitcount];
   end
endtask

//
// receive block
//

always @(posedge clk or posedge reset)
begin
     if (reset == 1)
     begin
          state <= 0;
          tx_count <= 0;
          bit_cnt <= 0;
          done <= 0;
     end
     else
     begin
          case(state)
               'h0: begin
                    if (tx == 1) 
                       begin
                    state <= 'h0;
                    bit_cnt <= 0;
                    tx_count <= 0;
                    done <= 0;
                    end
                    else
                    begin
                    tx_count = tx_count + 1;
                    half = full_table[i] >> 1;  //divide by two
                    if (tx_count == half)
                       begin
                       state <= 'h1;
                       tx_count <= 0;
                       end
                    else
                       state <= 'h0;
                    end
                    end

               'h1: begin
                    if (bit_cnt == num_bits)
                    begin
                         state <= 'h0;
                         done <= 1;
                    end
                    tx_count = tx_count + 1;
                    if (tx_count == full_table[i])
                    begin
                         tx_count <= 0;
                         in_buf[bit_cnt] <= tx;
                         bit_cnt <= bit_cnt + 1;
                         state <= 'h1;
                    end
               end
          endcase
     end
end
          
//
// timeout task
//

task TimeOut;
integer delay;
     begin
        pulse = 1;
        delay = time_table[4];
          repeat (delay) @(posedge clk) ;
        pulse = 0;
     end
endtask

endmodule
