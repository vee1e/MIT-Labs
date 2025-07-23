module tb_and_gate;
    reg A, B;
    wire AB;

    and_gate uut(
        .A(A),
        .B(B),
        .AB(AB)
    );

    initial begin
        A = 0; B = 0;
        #10 A = 1; B = 0;
        #10 A = 0; B = 1;
        #10 A = 1; B = 1;
        #10 $finish;
    end
endmodule
