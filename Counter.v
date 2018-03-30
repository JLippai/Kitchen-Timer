`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:55:16 04/13/2016 
// Design Name: 
// Module Name:    Counter 
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
module Counter(count_out, count_in, count_up, max_count);

// This module counts up or down by 1 depending on the state of the input count_dir
// Count speed is handled outside of this module, since all it does it determine how
// frequently this module is used

	input[11:0] count_in;
	input[11:0] max_count;
	
	//0 will count down, 1 will count up
	input count_up;
	
	output reg[11:0] count_out;
	
	always @ (*)
	begin
	if (count_in == max_count && count_up == 1'b1)
			assign count_out = 6'b000000;
	else
		assign count_out = count_in + count_up + count_up - 1'b1;
	end

endmodule