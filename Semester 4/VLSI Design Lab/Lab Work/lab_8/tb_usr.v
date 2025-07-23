module tb_usr();

reg clk;
reg rst;
reg [1:0] mode;
reg [3:0] parallel_in;
reg serial_in_left;
reg serial_in_right;
wire [3:0] out;

usr uut(
    .clk(clk),
    .rst(rst),
    .mode(mode),
    .parallel_in(parallel_in),
    .serial_in_left(serial_in_left),
    .serial_in_right(serial_in_right),
    .out(out)
);

initial begin
    clk = 0;
    rst = 1;
    mode = 0;
    parallel_in = 0;
    serial_in_left = 0;
    serial_in_right = 0;

    #10 rst = 0;

    #10 mode = 2'b11; parallel_in = 4'b1010;
    #10 mode = 2'b00;

    #10 mode = 2'b01; serial_in_left = 1;
    #10 mode = 2'b01; serial_in_left = 0;

    #10 mode = 2'b10; serial_in_right = 1;
    #10 mode = 2'b10; serial_in_right = 0;

    #10 mode = 2'b11; parallel_in = 4'b1111;

    #50 $finish;
end

always #5 clk = ~clk;

initial begin
    $monitor("Time=%0t, mode=%b, out=%b", $time, mode, out);
end

endmodule
