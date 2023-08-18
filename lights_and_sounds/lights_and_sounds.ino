#include "megalovania.h"

// originally from https://www.hackster.io/isaacnolt331/megalovania-on-piezo-fc263a


void setup() {
  for (int thisNote = 0; thisNote < Megalovania::melody_len; thisNote++) {
    Megalovania::playNextNote();
  }
}

void loop() {}