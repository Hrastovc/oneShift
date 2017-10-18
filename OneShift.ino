#include "OneShift.h"

#define PIN 3

OneShift Shift(PIN);

void setup() {
  Shift.Out(0b01010101);
}

void loop() {
  
}
