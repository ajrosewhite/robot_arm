#include <Servo.h>

#define SERVO_HEAD_PIN 9  // PWM 9

Servo head;

void setup() {
  head.attach(SERVO_HEAD_PIN);
}

void loop() {
  head.write(90);  // see where the middle of the servo is
}
