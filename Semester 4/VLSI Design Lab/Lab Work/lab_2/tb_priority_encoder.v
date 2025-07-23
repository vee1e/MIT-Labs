module tb_priority_encoder;
    reg [3:0] data_in;
    wire [1:0] encoded;
    wire valid;

    priority_encoder uut (
        .data_in(data_in),
        .encoded(encoded),
        .valid(valid)
    );

    initial begin
        $monitor("data_in=%b, encoded=%b, valid=%b", data_in, encoded, valid);
        data_in = 4'b0000; #10;
        data_in = 4'b0001; #10;
        data_in = 4'b0010; #10;
        data_in = 4'b0100; #10;
        data_in = 4'b1000; #10;
        $finish;
    end
endmodule

