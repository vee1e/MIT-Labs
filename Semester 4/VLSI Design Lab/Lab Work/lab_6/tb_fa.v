module tb_fa();
reg a, b, cin;
wire sum, cout;

fa uut(.a(a), .b(b), .cin(cin), .sum(sum), .cout(cout));

initial begin
	$monitor("Time=%t, a=%b,  b=%b, cin=%b, sum=%b, cout=%b", $time, a, b, cin, sum, cout);
	a = 0; b = 0; c = 0; #10;
	a = 0; b = 0; c = 1; #10;
	a = 0; b = 1; c = 0; #10;
	a = 0; b = 1; c = 1; #10;
	a = 1; b = 0; c = 0; #10;
	a = 1; b = 0; c = 1; #10;
	a = 1; b = 1; c = 0; #10;
	a = 1; b = 1; c = 1; #10;
	$finish;
end
endmodule
