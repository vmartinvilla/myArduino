
/* Robot Arm project with 4 servos  */
//Author: Martin Villasenor
// Date: 8/2/16

#include <Servo.h>


// For servo objects
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

// Assigned pins driving servos
const int arm_servo1 = 3;
const int arm_servo2 = 10;
const int arm_servo3 = 5;
const int arm_servo4 = 11;


//   Angle positions for each servo
int pos1 = 0;   // For servo position 1
int pos2 = 0;   // For servo position 2 
int pos3 = 0;   // For servo position 3
int pos4 = 0;   // For servo position 4

void setup() {
  // put your setup code here, to run once:
  myservo1.attach(arm_servo1);  //pin 3 drives servo1
  myservo2.attach(arm_servo2);  //pin 10 drives servo2
  myservo3.attach(arm_servo3);  //pin 5 drives servo3
  myservo4.attach(arm_servo4);  //pin 11 drives servo4

  
}

void loop() {
  // put your main code here, to run repeatedly:

    for ( pos1=0; pos1 <= 180; pos1 +=1) {  // loop 180 degrees
      myservo1.write(pos1);  // apply motion by degree
      delay(15);  //delay 15ms for each degree
      }
    
    for ( pos1 = 180; pos1 >= 0; pos1 -= 1 ) {

      myservo1.write(pos1);
      delay(15);

      
    }


}
