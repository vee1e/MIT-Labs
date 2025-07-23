module tb_shift_register;
    reg clk, rst, load, shift, dir;
    reg [3:0] data_in;
    wire [3:0] data_out;

    shift_register uut(
        .clk(clk),
        .rst(rst),
        .load(load),
        .shift(shift),
        .dir(dir),
        .data_in(data_in),
        .data_out(data_out)
    );

    always #5 clk = ~clk;

    initial begin
        clk = 0; rst = 1; load = 0; shift = 0; dir = 0; data_in = 4'b1010;
        #10 rst = 0;
        #10 load = 1;
        #10 load = 0; shift = 1;
        #10 dir = 1;
        #100 $finish;
    end
endmodule
