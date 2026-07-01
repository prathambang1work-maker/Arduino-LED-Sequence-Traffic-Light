# Arduino LED Sequence Controller

## 📌 Overview

This project demonstrates how to control multiple LEDs using an Arduino board. Three LEDs are connected to different digital pins and are turned ON one after another, creating a simple sequence pattern.

---

## 🚀 What I Learned

* Controlling multiple digital output pins
* Writing cleaner and reusable Arduino code
* Creating LED patterns using timing delays
* Understanding basic hardware connections

---

## 🛠️ Components Used

* Arduino Board (Uno / Nano / etc.)
* 3 LEDs
* 3 Resistors (220Ω recommended)
* Breadboard
* Jumper wires

---

## ⚙️ Circuit Connection

* LED 1 → Pin 13
* LED 2 → Pin 11
* LED 3 → Pin 9
* All LEDs connected through resistors to GND

---

## 💻 Code

```cpp id="u2rj6c"
const int led1 = 13;
const int led2 = 11;
const int led3 = 9;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500);

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(500);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(500);
}
```

---

## 📷 Output

(Add your project image here)

---

## 📈 Future Improvements

* Create LED patterns (chasing, fading)
* Add button control for switching modes
* Use PWM for brightness control
* Expand to 5+ LEDs

---

## 📚 Author

**Pratham Bang**
Electrical & Computer Engineering

---

## ⭐ Note

This project is part of my hands-on journey into Arduino and embedded systems. More advanced projects will be added soon.
