module mux4to1(
    input [3:0] data_in,
    input [1:0] sel,
    output data_out
);
    assign data_out = data_in[sel];
endmodule

