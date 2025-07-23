module tb_qab_delay;
    reg A, B, C;
    wire Q;
    
    qab_delay uut(
        .A(A),
        .B(B),
        .C(C),
        .Q(Q)
    );
    
    initial begin
        A = 0; B = 0; C = 0;
        #20;
        A = 0; B = 0; C = 1;
        #20;
        A = 0; B = 1; C = 0;
        #20;
        A = 0; B = 1; C = 1;
        #20;
        A = 1; B = 0; C = 0;
        #20;
        A = 1; B = 0; C = 1;
        #20;
        A = 1; B = 1; C = 0;
        #20;
        A = 1; B = 1; C = 1;
        #20;
        $finish;
    end
    
    initial begin
        $monitor("Time=%0t: A=%b B=%b C=%b Q=%b", $time, A, B, C, Q);
    end
endmodule
