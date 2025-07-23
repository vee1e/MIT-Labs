module binary_multiplier_4bit_tb;
    reg [3:0] a, b;
    wire [7:0] product;
    binary_multiplier_4bit uut(a, b, product);
    initial begin
        a = 4'b1010; b = 4'b0011;
        #10 a = 4'b1100; b = 4'b1001;
        #10 $finish;
    end
endmodule

