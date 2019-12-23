/*
  SparkFun Inventor's Kit
  Example sketch 10

  SINGLE SERVO

  Sweep a servo back and forth through its full range of motion.

  This sketch was written by SparkFun Electronics,
  with lots of help from the Arduino community.
  This code is completely free for any use.
  Visit http://learn.sparkfun.com/products/2 for SIK information.
  Visit http://www.arduino.cc to learn about the Arduino.
*/

//include the servo library
#include <Servo.h>

//create a servo object called servo1
Servo servo1;
Servo servo2;
Servo servo3;
int incomingByte = 0;


void setup()
{
  //attach servo1 to pin 9 on the Arduino 101
  servo1.attach(9);
  servo2.attach(6);
  servo3.attach(10);
  Serial.begin(9600);
  Serial.println("Hi from Arduino");

}


void loop()
{
  //create a local variable to store the servos position.
  int position;

  // To control a servo, you give it the angle you'd like it
  // to turn to. Servos cannot turn a full 360 degrees, but you
  // can tell it to move anywhere between 0 and 180 degrees.

  // Change position at full speed:

  // Tell servo to go to 90 degrees
  //servo1.write(90);
  //servo2.write(90);

  // Pause to get it time to move
  //delay(1000);

  // Tell servo to go to 180 degrees
  //servo1.write(125);
  //servo2.write(135);

  // Pause to get it time to move
  //delay(1000);

  // Tell servo to go to 0 degrees
  //servo1.write(75);
  //servo2.write(90);

  // Pause to get it time to move
  //delay(1000);
  /*
  servo1.write(40);
  delay(5000);
  servo1.write(85);
  delay(5000);
  servo1.write(130);
  delay(5000);*/



  //servo1.write(0);
  /*char inByte = ' ';
  servo3.write(1230);
  servo1.write(50);
  delay(1000);
    servo1.write(100);
  delay(3000);
    servo1.write(75);
  delay(1000);
  servo1.write(50);
  delay(3000);
   servo2.write(90);
  delay(1000);
    servo2.write(100);
  delay(7000);
    servo2.write(55);
  delay(1000);*/
  if (Serial.available() > 0) {
    // read the incoming byte:
    //char inByte = Serial.read(); // read the incoming data
    //Serial.println(inByte);
    
    incomingByte = Serial.read();
    //print(incomingByte)
    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
    
    if(incomingByte==35){
      Serial.print("happpppppppppppppppppppp ");
      servo1.write(50);
    }
    else if(incomingByte==30){
      Serial.print("sad ");
      servo1.write(100);
    }
    else{
      servo1.write(75);
    }
 if(incomingByte==25){
      Serial.print("soup ");
      servo2.write(115);
    }
    if(incomingByte==20){
      Serial.print("angry ");
      servo2.write(65);
    }else{
      servo2.write(90);
    }

 
    }
  delay(500);



  
  /*
  // Tell servo to go to 180 degrees, stepping by two degrees
  
  for (position = 0; position < 180; position += 2)
  {
    // Move to next position
    servo1.write(position);
    // Short pause to allow it to move
    delay(20);
  }

  // Tell servo to go to 0 degrees, stepping by one degree
  for (position = 180; position >= 0; position -= 1)
  {
    // Move to next position
    servo1.write(position);
    // Short pause to allow it to move
    delay(20);
  }
  */
}
