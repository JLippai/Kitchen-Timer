`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:50:08 04/26/2016
// Design Name:   KitchenTimer
// Module Name:   X:/My Documents/EC311/Labs/ProjectFinal/KitchenTimer_testbench.v
// Project Name:  ProjectFinal
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: KitchenTimer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module KitchenTimer_testbench;

	// Inputs
	reg clk;
	reg reset;
	reg minbtn;
	reg secbtn;
	reg pause;
	reg start;
	reg count_up;
	reg zippy;
	reg [5:0] timesetter;

	// Outputs
	wire zled;
	wire [6:0] seven;
	wire [3:0] AN;
	
	parameter seconds = 100000000;
	
	// Instantiate the Unit Under Test (UUT)
	KitchenTimer uut (
		.clk(clk), 
		.reset(reset), 
		.minbtn(minbtn), 
		.secbtn(secbtn), 
		.pause(pause), 
		.start(start), 
		.count_up(count_up), 
		.zippy(zippy), 
		.timesetter(timesetter), 
		.zled(zled), 
		.seven(seven), 
		.AN(AN)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		minbtn = 0;
		secbtn = 0;
		pause = 0;
		start = 0;
		count_up = 1;
		zippy = 0;
		timesetter = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
      timesetter  = 59;
		#10 minbtn = 1;
		#10 minbtn = 0;
		#10 timesetter = 49;
		#10 secbtn = 1;
		#10 secbtn = 0;
		#10 start = 1;
		#10 start = 0;
		#(15*seconds) zippy = 1;
		#(5*seconds) count_up = 0;
		#(20*seconds) count_up = 1;
		#(5*seconds) pause = 1;
		#10 pause = 0;
		#(3*seconds) reset = 1;
		#10 reset = 0;

	end
     always #5 clk = !clk;
endmodule

