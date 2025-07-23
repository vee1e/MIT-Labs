module tb_mod8_counter;
    reg clk, rst;
    wire [2:0] count;

    mod8_counter uut(
        .clk(clk),
        .rst(rst),
        .count(count)
    );

    always #5 clk = ~clk;

    initial begin
        clk = 0; rst = 1;
        #10 rst = 0;
        #100 $finish;
    end
endmodule
