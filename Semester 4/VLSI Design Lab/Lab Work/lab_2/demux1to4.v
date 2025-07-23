module demux1to4(
    input data_in,
    input [1:0] sel,
    output [3:0] data_out
);
    assign data_out = (data_in << sel);
endmodule

