/* Sweep
 
 modified Mina Rafiee Dec 2015
 http://www.arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 
 
Servo myservo1;
Servo myservo2;
Servo myservo3;


// create servo object to control a servo 
                // twelve servo objects can be created on most boards
 
//int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo1.attach(8);  // attaches the servo on pin 9 to the servo object 
  myservo2.attach(9);
  myservo3.attach(10);
} 
 
void loop() {  
  
  delay(4000);
  
  // Loop through motion tests
  forward();             // Example: move forward
  delay(4000);           // Wait 2000 milliseconds (2 seconds)
  reverse();
  delay(2000);
  turnRight();
  delay(2000);
  turnLeft();
  delay(2000);
  stopRobot();
  delay(4000);
}

// Motion routines for forward, reverse, turns, and stop
void forward() {
  myservo1.write(0);
  delay(4000);
 myservo2.write(0);
 delay(4000);
 myservo3.write(0);
 delay(4000);
}

void reverse() {
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(180);
}

void turnRight() {
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
}
void turnLeft() {
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(180);
}

void stopRobot() {
  myservo1.write(0);
  delay(4000);
  myservo2.write(0);
  delay(4000);
  myservo3.write(0);
  delay(4000);
}
