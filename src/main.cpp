#include <Arduino.h>

#define BUTTON_PIN 1

bool isButtonDown = false;


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  isButtonDown= digitalRead (BUTTON_PIN);
  digitalWrite (LED_BUILTIN, isButtonDown);
}