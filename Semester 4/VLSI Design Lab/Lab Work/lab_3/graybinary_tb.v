module graybinary_tb();
	reg [3:0] g;
	wire [3:0] b;

	graybinary uut (g, b);

	initial begin
		g = 4'b0000; #2;
		g = 4'b0001; #2;
		g = 4'b0011; #2;
		g = 4'b0010; #2;
		g = 4'b0110; #2;
		g = 4'b0111; #2;
		g = 4'b0101; #2;
		g = 4'b0100; #2;
		g = 4'b1100; #2;
		g = 4'b1101; #2;
		g = 4'b1111; #2;
		g = 4'b1110; #2;
		g = 4'b1010; #2;
		g = 4'b1011; #2;
		g = 4'b1001; #2;
		g = 4'b1000; #2;
	end

	initial begin
		$monitor($time, "b = %b", b);
		#32 $finish;
	end
endmodule
