module mod10 (
    input wire clk,        // Clock input
    input wire reset,      // Asynchronous reset
    output reg [3:0] count // 4-bit output to hold the count value
);

// Always block triggered on the rising edge of the clock or reset
always @(posedge clk or posedge reset) begin
    if (reset) begin
        count <= 4'b0000; // Reset count to 0
    end else begin
        if (count == 4'b1001) begin
            count <= 4'b0000; // Reset count to 0 when it reaches 10
        end else begin
            count <= count + 1; // Increment count
        end
    end
end

endmodule
