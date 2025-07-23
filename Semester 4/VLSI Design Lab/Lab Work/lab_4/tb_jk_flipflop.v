module tb_jk_flipflop;
    reg clk, rst, j, k;
    wire q, qn;

    jk_flipflop uut(
        .clk(clk),
        .rst(rst),
        .j(j),
        .k(k),
        .q(q),
        .qn(qn)
    );

    always #5 clk = ~clk;

    initial begin
        clk = 0; rst = 1; j = 0; k = 0;
        #10 rst = 0;
        #10 j = 1; k = 0;
        #10 j = 0; k = 1;
        #10 j = 1; k = 1;
        #100 $finish;
    end
endmodule
