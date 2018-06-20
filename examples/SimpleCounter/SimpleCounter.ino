#include <DigitShield.h>
float counter = 0;
int d = 10;


void setup() {
  DigitShield.begin();
  DigitShield.setPrecision(2);
}

void loop() {
  DigitShield.setValue(counter);
  counter = counter + 0.01;
  delay(d);
  if (counter >= 100) {
    counter = 0.0;
  }
}
