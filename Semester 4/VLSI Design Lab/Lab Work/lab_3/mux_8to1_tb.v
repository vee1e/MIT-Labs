module mux_8to1_tb;
    reg [2:0] sel;
    reg en;
    reg [7:0] in;
    wire out;
    mux_8to1 uut(sel, en, in, out);
    initial begin
        in = 8'b10101010; en = 1'b1;
        for(sel=0; sel<8; sel=sel+1) #10;
        en = 1'b0;
        #10 $finish;
    end
endmodule

