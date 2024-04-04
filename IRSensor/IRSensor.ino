const int IR_Sensor = 3;
const int buzzer = 6;

void setup() {
  pinMode(IR_Sensor, INPUT); // Set IR sensor pin as input
  pinMode(buzzer, OUTPUT); // Set buzzer pin as output
}

// the loop function runs over and over again forever
void loop() {
  if (digitalRead(IR_Sensor) == HIGH) {
    digitalWrite(buzzer, HIGH); // Turn on the buzzer if IR sensor is activated
  } else {
    digitalWrite(buzzer, LOW); // Turn off the buzzer if IR sensor is not activated
  }
}
