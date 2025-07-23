module tb_qab;
    reg A, B, C;
    wire Q;
    
    qab uut(
        .A(A),
        .B(B),
        .C(C),
        .Q(Q)
    );
    
    initial begin
        A = 0; B = 0; C = 0;
        #10;
        A = 0; B = 0; C = 1;
        #10;
        A = 0; B = 1; C = 0;
        #10;
        A = 0; B = 1; C = 1;
        #10;
        A = 1; B = 0; C = 0;
        #10;
        A = 1; B = 0; C = 1;
        #10;
        A = 1; B = 1; C = 0;
        #10;
        A = 1; B = 1; C = 1;
        #10;
        $finish;
    end
endmodule
