#include <Servo.h>

Servo leftMotor;  // Create servo object for the left motor
Servo rightMotor; // Create servo object for the right motor

void setup() {
  leftMotor.attach(3);   // Attaches the left motor on pin 3 to the servo object
  rightMotor.attach(2);  // Attaches the right motor on pin 2 to the servo object
  
  // Initially stop motors
  stopMotors();
}

void loop() {
  moveForward();
  delay(2000); // Move forward for 2 seconds

  turnLeft();
  delay(1000); // Turn left for 1 second

  moveForward();
  delay(2000); // Move forward for 2 seconds

  turnRight();
 delay(1000); // Turn right for 1 second

 moveForward();
  delay(2000); // Move forward for 2 seconds


 // moveBackward();
 //   delay(2000);
  

  stopMotors();
  while(true); // Stop the program after the sequence
}

void moveForward() {
  // Assuming forward requires both to move at these speeds
  leftMotor.write(105);
  rightMotor.write(80);
}

void turnLeft() {
  // Slow down or reverse the left motor and speed up the right motor
  leftMotor.write(75);  // Adjust this value to make a sharper or gentler turn
  rightMotor.write(85); // Keep the right motor speed constant or adjust as needed
}

void turnRight() {
  // Speed up the left motor and slow down or reverse the right motor
  leftMotor.write(105);
  rightMotor.write(100); // Adjust this value to make a sharper or gentler turn
}

void moveBackward() {
  // Assuming forward requires both to move at these speeds
  leftMotor.write(75);
  rightMotor.write(100);
}

void stopMotors() {
  leftMotor.write(90);  // Stop left motor
  rightMotor.write(90); // Stop right motor
}
