module tb_msjk();

reg clk;
reg rst;
reg j;
reg k;
wire q;
wire qbar;

msjk uut(
    .clk(clk),
    .rst(rst),
    .j(j),
    .k(k),
    .q(q),
    .qbar(qbar)
);

initial begin
    clk = 0;
    rst = 1;
    j = 0;
    k = 0;

    #10 rst = 0;

    #10 j = 0; k = 0;
    #10 j = 0; k = 1;
    #10 j = 1; k = 0;
    #10 j = 1; k = 1;
    #10 j = 0; k = 0;

    #50 $finish;
end

always #5 clk = ~clk;

initial begin
    $monitor("Time=%0t, j=%b, k=%b, q=%b, qbar=%b", $time, j, k, q, qbar);
end

endmodule
