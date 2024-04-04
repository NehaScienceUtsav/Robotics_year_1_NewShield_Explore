const int soundSensorPin = A2; // Analog pin to which the sound sensor is connected

void setup() {
  Serial.begin(9600); // Initialize the Serial Monitor with a baud rate of 9600
}

void loop() {
  int soundValue = analogRead(soundSensorPin); // Read the analog value from the sensor

  Serial.print("Sound Sensor Value: ");
  Serial.println(soundValue); // Print the sensor value to the Serial Monitor

  delay(500); // Wait for a short moment to prevent flooding the Serial Monitor
}
