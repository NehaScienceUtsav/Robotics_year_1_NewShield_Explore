const int pot = A2;  // Analog pin connected to the potentiometer
const int LED = 3;   // Digital pin connected to the LED

int value, mappedValue;  // Variables to store potentiometer value and mapped value

void setup() {
  pinMode(LED, OUTPUT);   // Set LED pin as output
  Serial.begin(9600);     // Initialize serial communication at 9600 baud
}

void loop() {
  value = analogRead(pot);  // Read potentiometer value
  mappedValue = map(value, 0, 1023, 0, 255);  // Map potentiometer value to LED brightness
  Serial.println(value);    // Print potentiometer value to serial monitor
  analogWrite(LED, mappedValue);  // Set LED brightness based on potentiometer value
}
