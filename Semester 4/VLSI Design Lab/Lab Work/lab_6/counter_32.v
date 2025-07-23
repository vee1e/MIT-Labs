`timescale 1ns/1ps

module counter_32(clk, rst, m, count);
input clk, rst, m;
output reg [31:0] count;
always @(posedge clk or negedge rst)
begin
	if (!rst)
		count <= 0;
	else if (m)
		count <= count + 1;
	else
		count <= count - 1;
	end
endmodule
