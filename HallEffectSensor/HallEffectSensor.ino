const int hallSensorPin = 7; // Hall Effect sensor input pin
const int ledPin = 2;       // LED output pin

void setup() {
  pinMode(hallSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(hallSensorPin);
  
  if (sensorValue == LOW) {
    // Magnet is detected, turn on the LED
    digitalWrite(ledPin, HIGH);
  } else {
    // No magnet detected, turn off the LED
    digitalWrite(ledPin, LOW);
  }
}