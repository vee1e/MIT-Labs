module tb_gray_to_binary;
    reg [3:0] gray;
    wire [3:0] binary;

    gray_to_binary uut (
        .gray(gray),
        .binary(binary)
    );

    initial begin
        $monitor("gray=%b, binary=%b", gray, binary);
        gray = 4'b0000; #10;
        gray = 4'b0001; #10;
        gray = 4'b0011; #10;
        gray = 4'b0110; #10;
        gray = 4'b1111; #10;
        $finish;
    end
endmodule

