module LineFollowerRobot (
   input clk, reset,
   input sensorLeft, sensorRight, // Sensors detecting black or white surfaces
   output reg motorLeft, motorRight
);
   parameter STRAIGHT = 2'b00, TURN_LEFT = 2'b01, TURN_RIGHT = 2'b10, STOP = 2'b11;
   reg [1:0] state, next_state;

   always @(posedge clk or posedge reset) begin
       if (reset)
           state <= STRAIGHT;
       else
           state <= next_state;
   end

   always @(*) begin
       case (state)
           STRAIGHT: begin
               if (sensorLeft == 1 && sensorRight == 1)
                   next_state <= STRAIGHT;
               else if (sensorLeft == 0 && sensorRight == 1)
                   next_state <= TURN_LEFT;
               else if (sensorLeft == 1 && sensorRight == 0)
                   next_state <= TURN_RIGHT;
               else
                   next_state <= STOP;
           end
           TURN_LEFT: begin
               if (sensorLeft == 0 && sensorRight == 1)
                   next_state <= TURN_LEFT;
               else if (sensorLeft == 1 && sensorRight == 0)
                   next_state <= TURN_RIGHT;
               else
                   next_state <= STOP;
           end
           TURN_RIGHT: begin
               if (sensorLeft == 1 && sensorRight == 0)
                   next_state <= TURN_RIGHT;
               else if (sensorLeft == 0 && sensorRight == 1)
                   next_state <= TURN_LEFT;
               else
                   next_state <= STOP;
           end
           STOP: begin
               if (sensorLeft == 0 && sensorRight == 0)
                   next_state <= STOP;
               else
                   next_state <= STRAIGHT;
           end
           default: next_state <= STRAIGHT;
       endcase
   end

   always @(*) begin
       case (state)
           STRAIGHT: begin
               motorLeft <= 1;
               motorRight <= 1;
           end
           TURN_LEFT: begin
               motorLeft <= 0;
               motorRight <= 1;
           end
           TURN_RIGHT: begin
               motorLeft <= 1;
               motorRight <= 0;
           end
           STOP: begin
               motorLeft <= 0;
               motorRight <= 0;
           end
           default: begin
               motorLeft <= 1;
               motorRight <= 1;
           end
       endcase
   end
endmodule
