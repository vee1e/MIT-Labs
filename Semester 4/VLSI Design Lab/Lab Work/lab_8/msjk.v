module msjk(
    input wire clk,
    input wire rst,
    input wire j,
    input wire k,
    output reg q,
    output wire qbar
);

reg master_q;

assign qbar = ~q;

always @(posedge clk or posedge rst) begin
    if (rst)
        master_q <= 1'b0;
    else begin
        case({j, k})
            2'b00: master_q <= master_q;
            2'b01: master_q <= 1'b0;
            2'b10: master_q <= 1'b1;
            2'b11: master_q <= ~master_q;
        endcase
    end
end

always @(negedge clk or posedge rst) begin
    if (rst)
        q <= 1'b0;
    else
        q <= master_q;
end

endmodule
