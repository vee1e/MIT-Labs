module binary_to_excess3(input [3:0] binary, output reg [3:0] excess3);
    always @(*) excess3 = binary + 4'b0011;
endmodule

