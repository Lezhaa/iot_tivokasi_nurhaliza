#include <Arduino.h>

// Deklarasi Pin
const int light1 = 14;  // GPIO14
const int light2 = 26;  // GPIO26
const int light3 = 33;  // GPIO33

void setup() {
  // Set Pin Sebagai Output
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(light3, OUTPUT);
}

void loop() {
  // LED 1 Menyala
  digitalWrite(light1, HIGH);
  digitalWrite(light2, LOW);
  digitalWrite(light3, LOW);
  delay(1000);  // Delay 1 detik

  // LED 2 Menyala
  digitalWrite(light1, LOW);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, LOW);
  delay(400);  // Delay 0.4 detik

  // LED 3 Menyala
  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(light3, HIGH);
  delay(1000);  // Delay 1 detik
}
