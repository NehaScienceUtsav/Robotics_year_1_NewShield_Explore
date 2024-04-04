// Pin assignments
const int touch_sensor = 3;
const int led = 6;

// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(touch_sensor, INPUT); // Set touch sensor pin as input
    pinMode(led, OUTPUT); // Set LED pin as output
}

// the loop function runs over and over again forever
void loop() {
    if (digitalRead(touch_sensor) == HIGH) {
        digitalWrite(led, HIGH); // Turn on the LED if touch sensor is activated
    } else {
        digitalWrite(led, LOW); // Turn off the LED if touch sensor is not activated
    }
}