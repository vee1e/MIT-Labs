module tb_decoder16to4;
    reg [3:0] data_in;
    wire [15:0] data_out;

    decoder16to4 uut (
        .data_in(data_in),
        .data_out(data_out)
    );

    initial begin
        $monitor("data_in=%b, data_out=%b", data_in, data_out);
        data_in = 4'b0000; #10;
        data_in = 4'b0001; #10;
        data_in = 4'b0010; #10;
        data_in = 4'b0011; #10;
        data_in = 4'b0100; #10;
        data_in = 4'b1111; #10;
        $finish;
    end
endmodule

