module decoder16to4(
    input [3:0] data_in,
    output reg [15:0] data_out
);
    integer i;
    always @(*) begin
        data_out = 16'b0;
        for (i = 0; i < 16; i = i + 1)
            if (data_in == i)
                data_out[i] = 1'b1;
    end
endmodule

