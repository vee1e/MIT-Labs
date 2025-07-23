module ex3_demux(input i, s0, s1, output y0, y1, y2, y3);
	assign y0 = ~s0 & ~s1 & i;
	assign y1 = ~s0 &  s1 & i;
	assign y2 =  s0 & ~s1 & i;
	assign y3 =  s0 &  s1 & i;
endmodule
