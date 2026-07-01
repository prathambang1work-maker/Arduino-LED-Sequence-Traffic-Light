// Arduino LED Pattern (Custom Timing)
// Author: Pratham Bang
// Description: Controls three LEDs with a mixed timing sequence.

const int led1 = 13;
const int led2 = 11;
const int led3 = 9;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // Step 1: LED1 ON
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500);

  // Step 2: LED2 blinking pattern
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);

  digitalWrite(led2, LOW);
  delay(1000);

  digitalWrite(led2, HIGH);

  // Ensure LED3 is OFF before next step
  digitalWrite(led3, LOW);
  delay(500);

  // Step 3: LED3 ON
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(500);
}
