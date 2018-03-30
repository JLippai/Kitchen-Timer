`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:31:26 04/17/2016 
// Design Name: 
// Module Name:    seven_alternate 
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

// Simple digit alternator for the seven-segment display; cycles through the 4 anodes at the clock rate (1 kHz as defined in KitchenTimer)
// and produces the correct BCD digit matching to it
module seven_alternate(
input clk,
input reset,
input[15:0] big_bin,
output reg[3:0] small_bin,
output reg[3:0] AN
    );
	reg[1:0] count;
	
	always @ (count) begin
		case (count)
			2'b00: begin
				AN = 4'b1110;
				small_bin = big_bin[3:0];
				end
			2'b01: begin
				AN = 4'b1101;
				small_bin = big_bin[7:4];
				end
			2'b10: begin
				AN = 4'b1011;
				small_bin = big_bin[11:8];
				end
			default: begin
				AN = 4'b0111;
				small_bin = big_bin[15:12];
				end
			endcase
	end
	
	always @ (posedge clk or posedge reset) begin
		if (reset) begin
			count <= 0;
		end
		else
			count <= count + 1'b1;
	end
endmodule
