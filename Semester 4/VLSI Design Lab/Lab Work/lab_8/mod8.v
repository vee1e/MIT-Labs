module mod8(
    input wire clk,
    input wire rst,
    input wire enable,
    output reg [2:0] count
);

always @(posedge clk or posedge rst) begin
    if (rst)
        count <= 3'b000;
    else if (enable) begin
        if (count == 3'b111)
            count <= 3'b000;
        else
            count <= count + 1'b1;
    end
end

endmodule
