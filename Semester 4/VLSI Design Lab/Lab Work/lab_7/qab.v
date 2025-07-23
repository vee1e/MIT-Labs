module qab(
   input A, B, C,
   output Q
);
   wire AB_not, AplusB_not;
   
   assign AB_not = ~(A & B);
   assign AplusB_not = ~(A | B);
   assign Q = AB_not & AplusB_not & C;
endmodule
