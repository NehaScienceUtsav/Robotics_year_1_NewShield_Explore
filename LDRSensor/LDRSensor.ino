// Define the sensor and LED pin numbers
const int SENSOR = 2;
const int LED = 5;

void setup() {
    // Setup the sensor pin as input and the LED pin as output
    pinMode(SENSOR, INPUT);
    pinMode(LED, OUTPUT);
}

void loop() {
    // Continuously check the sensor reading and control the LED accordingly
    if (digitalRead(SENSOR) == HIGH) {
        digitalWrite(LED, HIGH); // Turn on the LED
    } else {
        digitalWrite(LED, LOW); // Turn off the LED
    }
}