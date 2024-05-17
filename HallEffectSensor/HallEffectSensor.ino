// Define the analog input pin for the sound sensor
const int soundSensorPin = A2;

// Define the digital pin for the LED
const int ledPin = 3;

void setup() {
  // Start serial communication at a baud rate of 9600
  Serial.begin(9600);

  // Set the sound sensor pin as an input
  pinMode(soundSensorPin, INPUT);
  
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the analog value from the sound sensor
  int soundValue = analogRead(soundSensorPin);

  // Print the analog value to the Serial Monitor
  Serial.println(soundValue);

  // Check if the sound value is above a threshold (500)
  if (soundValue > 500) {
    // Turn the LED on
    digitalWrite(ledPin, LOW);
  } else {
    // Turn the LED off
    digitalWrite(ledPin, HIGH);
  }

  // Add a small delay to avoid flooding the serial monitor
  delay(100);
}
