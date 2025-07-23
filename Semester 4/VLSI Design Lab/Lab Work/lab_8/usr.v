module usr(
    input wire clk,
    input wire rst,
    input wire [1:0] mode,
    input wire [3:0] parallel_in,
    input wire serial_in_left,
    input wire serial_in_right,
    output reg [3:0] out
);

always @(posedge clk or posedge rst) begin
    if (rst)
        out <= 4'b0000;
    else begin
        case(mode)
            2'b00: out <= out;
            2'b01: out <= {serial_in_left, out[3:1]};
            2'b10: out <= {out[2:0], serial_in_right};
            2'b11: out <= parallel_in;
        endcase
    end
end

endmodule
