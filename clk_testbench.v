`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:56:34 04/26/2016 
// Design Name: 
// Module Name:    clk_testbench 
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
module clk_testbench(
output reg out_clk
	 );
	always begin
		out_clk = 0;
		forever #10 out_clk = ~out_clk;
	end
endmodule
