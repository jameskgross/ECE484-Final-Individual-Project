#include <avr/io.h>
#include <util/delay.h>

#define LEFT_MOTOR_PIN 3   // Assuming PB3 (OC2A)
#define RIGHT_MOTOR_PIN 2  // Assuming PB2 (OC2B)

void initPWM() {
    // Set the pins as outputs
    DDRB |= (1 << LEFT_MOTOR_PIN) | (1 << RIGHT_MOTOR_PIN);

    // Set Timer2 for PWM
    TCCR2A = (1 << COM2A1) | (1 << COM2B1) | (1 << WGM20) | (1 << WGM21); // Fast PWM
    TCCR2B = (1 << CS21); // Set prescaler to 8

    // Initialize PWM duty cycle to 0 (motors stopped)
    OCR2A = 0;
    OCR2B = 0;
}

void setMotorSpeed(uint8_t motor, uint8_t speed) {
    if (motor == LEFT_MOTOR_PIN) {
        OCR2A = speed;
    } else if (motor == RIGHT_MOTOR_PIN) {
        OCR2B = speed;
    }
}

void moveForward() {
    setMotorSpeed(LEFT_MOTOR_PIN, 210); // Scale accordingly
    setMotorSpeed(RIGHT_MOTOR_PIN, 170); 
}

void moveBackward() {
    setMotorSpeed(LEFT_MOTOR_PIN, 170); 
    setMotorSpeed(RIGHT_MOTOR_PIN, 210); 
}

void turnLeft() {
    setMotorSpeed(LEFT_MOTOR_PIN, 150); 
    setMotorSpeed(RIGHT_MOTOR_PIN, 170); 
}

void turnRight() {
    setMotorSpeed(LEFT_MOTOR_PIN, 210);
    setMotorSpeed(RIGHT_MOTOR_PIN, 200); 
}

void stopMotors() {
    setMotorSpeed(LEFT_MOTOR_PIN, 180); // Neutral pulse width, adjust as needed
    setMotorSpeed(RIGHT_MOTOR_PIN, 180); 
}

int main(void) {
    initPWM();

    while (1) {
        moveForward();
        _delay_ms(2000);

        turnLeft();
        _delay_ms(1000);

        moveForward();
        _delay_ms(2000);

        turnRight();
        _delay_ms(1000);

        moveForward();
        _delay_ms(2000);

        stopMotors();
        while (1); // Halt further execution
    }
}
