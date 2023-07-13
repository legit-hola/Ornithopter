#include <Servo.h>

const int potPin = A0;     // Potentiometer pin
const int servoPin = 9;    // Servo motor pin

Servo myServo;             // Create a servo object

void setup() {
  myServo.attach(servoPin);   // Attach servo to the specified pin
}

void loop() {
  int potValue = analogRead(potPin);    // Read the potentiometer value
  int angle = map(potValue, 0, 1023, 0, 180);   // Map the potentiometer value to the servo angle range (0-180)

  myServo.write(angle);   // Set the servo position based on the mapped angle value
  delay(15);              // Small delay for smooth movement
}
