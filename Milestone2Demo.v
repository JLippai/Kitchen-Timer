`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:15:43 04/18/2016 
// Design Name: 
// Module Name:    Milestone2Demo 
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
module Milestone2Demo(
	input clk,
	input reset,
	input button,
	output[6:0] seven,
	output [3:0] AN
    );
	wire khz_clk, clean;
	parameter zero = 16'b0000000000000000;
	parameter twelve = 16'b0001001000110100;
	
	parameter S0 = 0, S1 = 1;
	reg state;
	reg [15:0] big_bin;
	wire [3:0] small_bin;
	
	Debounce DB1(clk, button, clean);
	
	ClockDivider CD1(clk, khz_clk);
	seven_alternate SA(khz_clk, clean, big_bin, small_bin, AN);
	binary_to_segment SEG(small_bin, seven);
	
	always @ (state) begin
		case (state)
			S0:
				big_bin = zero;
			S1:
				big_bin = twelve;
			default:
				big_bin = zero;
		endcase
	end
	
	always @ (posedge clk or posedge reset) begin
		if (reset)
			state <= S0;
		else
			case (state)
				S0:
					if (clean)
						state <= S1;
					else
						state <= S0;
				S1:
					if (clean)
						state <= S0;
					else
						state <= S1;
				endcase
	end
endmodule
