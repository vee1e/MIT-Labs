module tb_mux_demux;
    reg [3:0] data_in;
    reg [1:0] sel;
    reg demux_in;
    wire mux_out;
    wire [3:0] demux_out;

    mux4to1 mux (
        .data_in(data_in),
        .sel(sel),
        .data_out(mux_out)
    );

    demux1to4 demux (
        .data_in(demux_in),
        .sel(sel),
        .data_out(demux_out)
    );

    initial begin
        $monitor("MUX: data_in=%b, sel=%b, mux_out=%b | DEMUX: demux_in=%b, sel=%b, demux_out=%b",
                 data_in, sel, mux_out, demux_in, sel, demux_out);
        data_in = 4'b1010; sel = 2'b00; demux_in = 1; #10;
        sel = 2'b01; #10;
        sel = 2'b10; #10;
        sel = 2'b11; #10;
        $finish;
    end
endmodule

