module add4 (
    input [3:0] A,      // 4-bit input A
    input [3:0] B,      // 4-bit input B
    input Cin,          // Carry input
    output [3:0] Sum,   // 4-bit Sum output
    output Cout         // Carry output
);
    wire [4:0] temp;    // Temporary wire to hold the sum with carry

    assign temp = A + B + Cin; // Perform addition
    assign Sum = temp[3:0];     // Assign lower 4 bits to Sum
    assign Cout = temp[4];      // Assign the 5th bit to Cout

endmodule
