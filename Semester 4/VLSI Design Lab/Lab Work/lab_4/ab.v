module circuit (
    input wire A,
    input wire B,
    input wire clk_10MHz,
    output reg F
);

    reg C;
    reg F_temp;

    always @(posedge clk_10MHz) begin
        C <= A;
    end

    always @(*) begin
        F_temp = C & B;
    end

    always @(posedge clk_10MHz) begin
        F <= F_temp;
    end
endmodule

