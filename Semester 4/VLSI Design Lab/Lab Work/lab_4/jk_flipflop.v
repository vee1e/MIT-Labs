module jk_flipflop(
    input clk, rst, j, k,
    output reg q, qn
);
    reg ms_q, ms_qn;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            ms_q <= 0;
            ms_qn <= 1;
        end else begin
            case ({j, k})
                2'b00: {ms_q, ms_qn} <= {ms_q, ms_qn};
                2'b01: {ms_q, ms_qn} <= {0, 1};
                2'b10: {ms_q, ms_qn} <= {1, 0};
                2'b11: {ms_q, ms_qn} <= {~ms_q, ~ms_qn};
            endcase
        end
    end

    always @(negedge clk) begin
        q <= ms_q;
        qn <= ms_qn;
    end
endmodule
