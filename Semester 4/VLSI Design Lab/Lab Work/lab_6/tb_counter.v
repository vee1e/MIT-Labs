`timescale 1ns/1ps

module tb_counter;
	reg clk, rst, m;
	wire [3:0] count;
	initial begin
		clk = 0;
		rst = 0; #25;
		rst = 1;
	end
	initial begin
		m = 1;
		#600 m = 0;
		rst = 0; #25;
		rst = 1;
		#500 m = 0;
	end

	counter counter1(count, clk, rst, m);
	always #5 clk = ~clk;
	initial
	#1400 $finish;
endmodule

