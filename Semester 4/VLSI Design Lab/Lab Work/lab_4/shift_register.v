module shift_register(
    input clk, rst, load, shift, dir,
    input [3:0] data_in,
    output reg [3:0] data_out
);
    always @(posedge clk or posedge rst) begin
        if (rst) data_out <= 4'b0000;
        else if (load) data_out <= data_in;
        else if (shift) begin
            if (dir) data_out <= {data_out[2:0], 1'b0};
            else data_out <= {1'b0, data_out[3:1]};
        end
    end
endmodule
