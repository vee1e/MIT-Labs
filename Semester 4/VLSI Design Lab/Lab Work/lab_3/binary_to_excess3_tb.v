module binary_to_excess3_tb;
    reg [3:0] binary;
    wire [3:0] excess3;
    binary_to_excess3 uut(binary, excess3);
    initial begin
        for(binary=0; binary<16; binary=binary+1) #10;
        $finish;
    end
endmodule

