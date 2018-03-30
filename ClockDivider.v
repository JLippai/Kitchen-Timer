`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:26:19 04/17/2016 
// Design Name: 
// Module Name:    ClockDivider 
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

// Adjustable clock divider - outouts a pulse signal at specified period by using the hardware clock signal with a counter
// that is divided into a half with 0 output and a half with 1 output
module ClockDivider(
input in_clk,
input[26:0] clk_period,
output reg out_clk
    );
	reg[26:0] count;

	always @ (posedge in_clk) begin
		if (count == clk_period - 1'b1)
			count <= 0;
		else
			count <= count + 1'b1;
		if (count >= (clk_period - 1'b1)/2)
			out_clk <= 1;
		else
			out_clk <= 0;
	
	end

endmodule
