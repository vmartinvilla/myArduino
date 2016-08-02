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

/*  arm_servo1 moves base 180 degrees
 *  arm_servo2 moves in parallel with arm_servo3 on the right side
 *  arm_servo3 moves in parallel with arm_servo2 on the right side
 *  arm_servo4 move the claw for grip
 *  
 */

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

// Start moving base by 90 degrees
    for ( pos1=0; pos1 <= 90; pos1 +=1) {  // loop 90 degrees
      myservo1.write(pos1);  // apply motion by degree
      delay(15);  //delay 15ms for each degree
      }

    // return to initial position.  Note: this is only for initial testing
 
    for ( pos1=90; pos1 >= 0; pos1 -=1) {  // loop 90 degrees
      myservo1.write(pos1);  // apply motion by degree
      delay(15);  //delay 15ms for each degree
      }
      
}
