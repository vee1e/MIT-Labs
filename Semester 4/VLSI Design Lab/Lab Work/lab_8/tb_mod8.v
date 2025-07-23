module tb_mod8();

reg clk;
reg rst;
reg enable;
wire [2:0] count;

mod8 uut(
    .clk(clk),
    .rst(rst),
    .enable(enable),
    .count(count)
);

initial begin
    clk = 0;
    rst = 1;
    enable = 0;

    #10 rst = 0;
    #10 enable = 1;

    #200 enable = 0;
    #20 enable = 1;

    #50 $finish;
end

always #5 clk = ~clk;

initial begin
    $monitor("Time=%0t, enable=%b, count=%b", $time, enable, count);
end

endmodule
