`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:01:53 04/14/2016 
// Design Name: 
// Module Name:    KitchenTimer 
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
module KitchenTimer(

//minbtn and secbtn are the push buttons for setting minutes and seconds respectviely; zippy is the fast count toggle
input clk, reset, minbtn, secbtn, pause, start, count_up, zippy,

// timesetter is the 5 switches whose values get passed into the seconds and minutes values when setting the timer
input[5:0] timesetter,

// zled is the output corresponding to the LED that lights up when the counter counts down to 0
output reg zled,

// seven is the signals A-G output by the seven-segment display driver
output [6:0] seven,

//AN is the signal to the 4 anodes for the 7-segment displays; only one is active (low) at a time
output [3:0] AN);
	
	// Setting the maximum the timer can count up to (3600 seconds is 60 minutes)
	parameter maxcount = 3600;
	
	// My FSM has 4 possible states, stored in this register
	reg[1:0] state;
	
	// The actual value of the timer in seconds; only need 12-bits to go up to 3600
	reg[11:0] totalseconds;
	
	// This is a counter done at the hardware clock's frequency; it only counts up to the slow_period number of clock cycles 
	// and is used for setting flags to let the timer counter know when to increment
	reg[26:0] rawcount;
	
	
	// The number of 100 MHz clock cycles in one period of each of the slower counters/pulses: 
	// 100M in one second, 20M in 0.2 seconds, 100k in 0.001 seconds
	// The fast_flag and slow_flag are true for one clock cycle every [slow/fast]_period clock cycles to facilitate incrementing the timer
	parameter slow_period = 27'b101111101011110000100000000;
	parameter fast_period = 27'b001001100010010110100000000;
	parameter khz_period =  27'b000000000011000011010100000;
	
	reg fast_flag, slow_flag;
	
	// This wire carries the 1 kHz pulse signal obtained from dividing the clock signal with the ClockDivider module; 
	// used for the display driver
	wire khz_clk;
	ClockDivider CDK(clk, khz_period, khz_clk);
	
	// The Debounce module creates clean signals for all the push buttons; they are true for exactly one clock cycle right after the button is pressed
	
	wire clean_reset, clean_minbtn, clean_secbtn, clean_pause, clean_start;
	
	Debounce DBRST(clk, reset, clean_reset);
	Debounce DBMIN(clk, minbtn, clean_minbtn);
	Debounce DBSEC(clk, secbtn, clean_secbtn);
	Debounce DBPAUSE(clk, pause, clean_pause);
	Debounce DBSTART(clk, start, clean_start);
	
	// BCD representation of the total timer count in seconds, along with a single BCD digit representing the digit on the 7-segment
	// display currently being shown (cycling through all 4 at 1 kHz frequency)
	// The seven_alternate module is a display driver for producing the BCD representation of the current digit
	// and the appropriate signal to activate the correct anode
	// The binary_to_segment module converts current_bin into output to produce the correct image on the 7-segment display
	reg[15:0] allseconds_bin;
	wire[3:0] current_bin;
	
	seven_alternate SA(khz_clk, clean_reset, allseconds_bin, current_bin, AN);
	
	binary_to_segment SEG(current_bin, seven);
	
	
	// This part of the program is purely combinational; at any given time, the BCD bin accurately reflects the state of the
	// kitchen timer and the fast and slow flags are only true respectively at the frequency the fast counter has to update (5 Hz) and 
	// the frequency the slow counter updates (1 Hz)
	always @ (*) begin
		allseconds_bin[3:0] = (totalseconds % 60) % 10;
		allseconds_bin[7:4] = (totalseconds % 60) / 10;
		allseconds_bin[11:8] = (totalseconds / 60) % 10;
		allseconds_bin[15:12] = (totalseconds / 60) / 10;
		
		slow_flag = (rawcount % slow_period == slow_period - 1'b1) ? 1 : 0;
		fast_flag = (rawcount % fast_period == fast_period - 1'b1) ? 1 : 0;
	end
	
	
	/* My FSM has four states:
	00- Clock setting
	01- Clock running
	10- Clock paused
	11- 0 reached when counting down
	*/

	// This is the sequential logic block
	always @ (posedge clk) begin

		// Regardless of state, pushing reset will transition to the setting state and 0 counters
		if (clean_reset) begin
			zled <= 1'b0;
			totalseconds <= 12'b000000000000;
			rawcount <= 0;
			state <= 2'b00;
		end
		else begin
			case (state)

			// In the setting state, you can set the values for seconds/minutes or push start,
			// the latter of which will transition to the counting state
			2'b00:
				if (clean_start)
					state <= 2'b01;
				else begin
					if (clean_minbtn) begin
						totalseconds <= (totalseconds % 60) + 60 * timesetter;
					end
					if (clean_secbtn) begin
						totalseconds <= totalseconds - (totalseconds % 60) + timesetter;
					end
				end

			// In the counting state, either the system remains in the counting state
			// (while incrementing/decrementing the count), or hitting pause will transition
			// to the pause state, or reaching 0 while counting down will transition to the 0
			// reached state while turning the LED on
			2'b01:
				if (clean_pause)
					state <= 2'b10;
				else begin
				
					if (rawcount == slow_period - 1'b1)
						rawcount <= 0;
					else
						rawcount <= rawcount + 1'b1;
						
					if (~count_up && totalseconds == 0) begin
						zled <= 1'b1;
						state <= 2'b11;
					end
					
					else begin
						if (count_up == 1'b1 && totalseconds >= maxcount) begin
							totalseconds <= 12'b000000000000;
						end
						else

						// This algebraic manipulation lets me handle count_up and ~count_up
						// conditions in the same state, along with fast and slow; it evaluates to totalseconds++ when
						// count_up is 1 and the appropriate flag is true, and totalseconds-- when count_up is 0 and the appropriate flag is true
							totalseconds <= totalseconds + (((zippy&&fast_flag) || ((~zippy)&&slow_flag))? 1 : 0)*(2 * count_up - 1'b1);
					end
				end
				
			// The only state-transitioning input in the pause state is hitting pause, which
			// activates the counting state
			2'b10:
				if (clean_pause)
					state <= 2'b01;

			// The only possible transitions out of the zero reached state are resetting
			// (resolved above) or changing the direction of counting to be upward, which
			// will make the clock start counting up from zero and turn off the LED
			default:
				if (count_up) begin
					totalseconds <= 12'b000000000001;
					zled <= 1'b0;
					state <= 2'b01;
				end
			endcase
		end
	end
endmodule