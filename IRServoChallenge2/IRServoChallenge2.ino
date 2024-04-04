#include <Servo.h>

// Define the pins
const int irPin = 2;      // IR sensor pin
const int servoPin = 7;   // Servo motor control pin

Servo myservo;  // Create a servo object

void setup() {
  myservo.attach(servoPin); // Attach servo to its pin
  pinMode(irPin, INPUT);    // Set IR sensor pin as input
  myservo.write(0);         // Initialize servo position
}

void loop() {
  // Read IR sensor value
  int irValue = digitalRead(irPin);

  // If IR sensor detects an object
  if (irValue == HIGH) {
    myservo.write(100);     // Move servo to position 100
    delay(1000);            // Wait for 1 second
  } else { // If no object is detected
    myservo.write(0);       // Move servo to position 0
    delay(3000);            // Wait for 3 seconds
  }
}
