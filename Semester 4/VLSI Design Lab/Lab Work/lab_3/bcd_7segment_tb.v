module bcd_7segment_tb;
    reg [3:0] bcd;
    wire [6:0] seg;
    bcd_7segment uut(bcd, seg);
    initial begin
        for(bcd=0; bcd<10; bcd=bcd+1) #10;
        $finish;
    end
endmodule

