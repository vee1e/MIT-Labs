module decoder_5to32_tb;
    reg [4:0] in;
    wire [31:0] out;
    decoder_5to32 uut(in, out);
    initial begin
        for(in=0; in<32; in=in+1) #10;
        $finish;
    end
endmodule

