#include <ESP32Servo.h>
#include <M5Stack.h>

Servo SERVO;

void setup() {
  M5.begin(false, false, false, false);  // LCD, SD, Serial, I2C
  ESP32PWM::allocateTimer(0);
  ESP32PWM::allocateTimer(1);
  ESP32PWM::allocateTimer(2);
  ESP32PWM::allocateTimer(3);
  SERVO.setPeriodHertz(50);
  SERVO.attach(2, 500, 2400);
}

void loop() {
  SERVO.write(0);
  delay(1000);
  SERVO.write(255);
  delay(1000);
}