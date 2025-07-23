// Test Bench for 4-bit Adder
module tb_add4;

    reg [3:0] A;         // 4-bit input A
    reg [3:0] B;         // 4-bit input B
    reg Cin;             // Carry input
    wire [3:0] Sum;      // 4-bit Sum output
    wire Cout;           // Carry output

    // Instantiate the 4-bit adder
    FourBitAdder uut (
        .A(A),
        .B(B),
        .Cin(Cin),
        .Sum(Sum),
        .Cout(Cout)
    );

    // Test cases
    initial begin
        // Test case 1
        A = 4'b0001; B = 4'b0010; Cin = 0; // 1 + 2 = 3
        #10;
        $display("A = %b, B = %b, Cin = %b => Sum = %b, Cout = %b", A, B, Cin, Sum, Cout);

        // Test case 2
        A = 4'b0110; B = 4'b0101; Cin = 0; // 6 + 5 = 11
        #10;
        $display("A = %b, B = %b, Cin = %b => Sum = %b, Cout = %b", A, B, Cin, Sum, Cout);

        // Test case 3
        A = 4'b1111; B = 4'b0001; Cin = 0; // 15 + 1 = 16
        #10;
        $display("A = %b, B = %b, Cin = %b => Sum = %b, Cout = %b", A, B, Cin, Sum, Cout);

        // Test case 4
        A = 4'b1001; B = 4'b0111; Cin = 1; // 9 + 7 + 1 = 17
        #10;
        $display("A = %b, B = %b, Cin = %b => Sum = %b, Cout = %b", A, B, Cin, Sum, Cout);

        // Test case 5
        A = 4'b1111; B = 4'b1111; Cin = 1; // 15 + 15 + 1 = 31
        #10;
        $display("A = %b, B = %b, Cin = %b => Sum = %b, Cout = %b", A, B, Cin, Sum, Cout);

        // End simulation
        $finish;
    end

endmodule
