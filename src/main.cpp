#include <Arduino.h>

#define LED_PIN 4

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void FuetureJ()
{
  delay(100);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);

  FuetureJ();
}