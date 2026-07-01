// Arduino LED Sequence Controller
// Author: Pratham Bang
// Description: Controls three LEDs in a sequential pattern using digital output pins.

const int led1 = 13;
const int led2 = 11;
const int led3 = 9;

// runs once when the board is powered on or reset
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

// runs continuously
void loop() {
  // Step 1: Turn ON LED 1
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500);

  // Step 2: Turn ON LED 2
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(500);

  // Step 3: Turn ON LED 3
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(500);
}
