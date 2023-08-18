#include "megalovania.h"

// originally from https://www.hackster.io/isaacnolt331/megalovania-on-piezo-fc263a

const int reedSwitchPin = 17;

void setup() {
  pinMode(reedSwitchPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(reedSwitchPin) == LOW) {
    Megalovania::playNextNote();
  }
}