module tb_up_down_counter;
    reg clk, rst, up_down;
    wire [3:0] count;

    up_down_counter uut(
        .clk(clk),
        .rst(rst),
        .up_down(up_down),
        .count(count)
    );

    always #5 clk = ~clk;

    initial begin
        clk = 0; rst = 1; up_down = 1;
        #10 rst = 0;
        #100 up_down = 0;
        #100 $finish;
    end
endmodule
