module tb_LineFollowerRobot();
   reg clk, reset;
   reg sensorLeft, sensorRight;
   wire motorLeft, motorRight;

   LineFollowerRobot UUT (
       .clk(clk),
       .reset(reset),
       .sensorLeft(sensorLeft),
       .sensorRight(sensorRight),
       .motorLeft(motorLeft),
       .motorRight(motorRight)
   );

   always #5 clk = ~clk;

   initial begin
       clk = 0;
       reset = 0;
       sensorLeft = 0;
       sensorRight = 0;
       reset = 1; #10;
       reset = 0;
       sensorLeft = 1; sensorRight = 1; #10;
       sensorLeft = 0; sensorRight = 1; #10;
       sensorLeft = 1; sensorRight = 0; #10;
       sensorLeft = 0; sensorRight = 0; #10;
       #60; $finish;
   end

   initial begin
       $monitor("Time %t: clk=%b, reset=%b, sensorLeft=%b, sensorRight=%b, motorLeft=%b, motorRight=%b",
               $time, clk, reset, sensorLeft, sensorRight, motorLeft, motorRight);
   end
endmodule
