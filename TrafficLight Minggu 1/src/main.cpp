#include <Arduino.h>

int light1 =14;
int light2 =26;
int light3 =33;

void setup() {
 pinMode(light1, OUTPUT);
 pinMode(light2, OUTPUT);
 pinMode(light3, OUTPUT);
}

void loop() {
 digitalWrite(light1, HIGH);
 digitalWrite(light2, LOW);
 digitalWrite(light3, LOW);
delay(1000);
digitalWrite(light1, LOW);
digitalWrite(light2, HIGH);
digitalWrite(light3, LOW);
delay(400);
digitalWrite(light1, LOW);
digitalWrite(light2, LOW);
digitalWrite(light3, HIGH);
delay(1000);
}
