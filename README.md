# ECE484-Final-Individual-Project
A toy car that can move and turn electronically 

# Arduino-Controlled Car Project

This repository contains the source code for an Arduino-controlled car that uses two servo motors to navigate. The car can move forward, turn left, turn right, and stop.

## Features

- **Forward Movement**: The car moves forward for specified intervals.
- **Turning**: The car can perform left and right turns.
- **Stop Function**: Ability to stop the car using software control.

## Hardware Required

- Arduino Nano
- 2 x Servo Motors
- Jumper Wires
- Breadboard (optional for prototyping)
- Power Source (e.g., 9V battery)
- Tamiya - Track & Wheel Set

## Software Dependencies

- Arduino IDE (Download [here](https://www.arduino.cc/en/software))
- AVR Compiler

## Setup

1. **Assemble Hardware**: Connect the servo motors to the Arduino Nano as follows:
   - Left Servo Motor to Pin 3
   - Right Servo Motor to Pin 2
2. **Power Setup**: Connect your 9V battery to the VIN and GND on the Arduino for power.

## Building the Car

- **Choosing Components**: Selected Arduino Nano for its compact size and ease of use, and servo motors for precise movement control.
- **Assembly**: Components were assembled on a breadboard for easy modifications and testing.

## Challenges Faced

- **Motor Control**: Adjusting the servo motors to move at the same speed and calibrating turns.
- **Power Supply Issues**: Dealing with the limitations of a 9V battery in powering both the Arduino and the servo motors efficiently.

## Video Demonstration

Here is a [video](https://youtube.com/shorts/x5yD4eWYbyM) demonstrating the car's movements and capabilities.


## References and Resources

- Arduino Official Documentation: [Arduino Home](https://www.arduino.cc/)
- Servo Motor Control with Arduino: [Arduino Servo Library](https://www.arduino.cc/reference/en/libraries/servo/)
- Idea from PaulMakeThings on Instructables: [Link](https://www.instructables.com/Arduino-Nano-based-Microbot/)


## Acknowledgements
   - Arduino
   - Servo Library for Arduino
   - AVR compiler
   - Idea from PaulMakeThings on Instructables - https://www.instructables.com/Arduino-Nano-based-Microbot/ 
