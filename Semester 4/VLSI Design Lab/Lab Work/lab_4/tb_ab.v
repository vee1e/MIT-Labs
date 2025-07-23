`timescale 1ns/1ps

module tb_circuit;

    reg A, B, clk_10MHz;
    wire F;

    circuit uut (
        .A(A),
        .B(B),
        .clk_10MHz(clk_10MHz),
        .F(F)
    );

    always #50 clk_10MHz = ~clk_10MHz;
    always #100 A = ~A;
    always #50 B = ~B;

    initial begin
        A = 0;
        B = 0;
        clk_10MHz = 0;
        #2000 $stop;
    end

endmodule

