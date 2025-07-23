module mux_8to1(input [2:0] sel, input en, input [7:0] in, output reg out);
    always @(*) out = en ? in[sel] : 1'b0;
endmodule

