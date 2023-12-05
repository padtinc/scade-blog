extern "C" //Allows connection to external C code
{
#include "servocontrol.h" //Connects to SCADE-generated C code
}
#include "Servo.h" //Connects to Servo library
inC_servocontrol in_struct; //Connects servocontrol library to shorter term "in_struct"
outC_servocontrol out_struct; //Connects servocontrol library to shorter term "out_struct"

Servo servo0; //Declares servo0 as type "Servo"
Servo servo1; //Declares servo1 as type "Servo"
Servo servo2; //Declares servo2 as type "Servo"
char input;
void setup() {
  // put your setup code here, to run once:
  servo0.attach(3); //Connects servo0 to port 3 on Arduino
  servo1.attach(5); //Connects servo2 to port 5 on Arduino
  servo2.attach(6); //Connects servo2 to port 6 on Arduino
  Serial.begin(9600); //Starts Serial connect for keyboard input
  servo0.write(out_struct.output[0]); //Sets servo0 to the value of Output @ index 0
  servo1.write(out_struct.output[1]); //Sets servo1 to the value of Output @ index 1
  servo2.write(out_struct.output[2]); //Sets servo2 to the value of Output @ index 2
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i=0; i< 3; i++){ //Run as many times as inputs exist
    input = Serial.read(); //Make SCADE input value = to typed value at each index
    if (input=='0' || input=='1' || input=='2')
      in_struct.input[i] = input; //Make SCADE input value = to typed value at each index
      Serial.print(in_struct.input[i]);
      Serial.print(' ');
  }
  Serial.println();
  servocontrol(&in_struct, &out_struct); //Run SCADE-generated Code
  for (int i=0; i< 3; i++){
    Serial.print(out_struct.output[i]);
    Serial.print(' ');
  }
  Serial.println();
  servo0.write(out_struct.output[0]); //Sets servo0 to the value of Output @ index 0
  servo1.write(out_struct.output[1]); //Sets servo1 to the value of Output @ index 1
  servo2.write(out_struct.output[2]); //Sets servo2 to the value of Output @ index 2
  delay(500); //Delay 500 msec
}
