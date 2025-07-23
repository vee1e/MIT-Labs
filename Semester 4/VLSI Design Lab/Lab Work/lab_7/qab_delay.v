module qab_delay(
    input A, B, C,
    output Q
);
    wire AB_not, AplusB_not;
    
    assign #1 AB_not = ~(A & B);
    assign #1 AplusB_not = ~(A | B);
    assign #1 Q = AB_not & AplusB_not & C;
endmodule
