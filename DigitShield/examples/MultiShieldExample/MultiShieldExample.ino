#include <DigitShield.h>

int loopCounter = 0;
float counter = 0.0;
int counter2 = 30;
int d = 10;

// Create a second Digit Shield connected to Arduino pins 6,7,8,9
// Connected to pins 2,3,4,5 on the shield, respectively.
DigitShieldClass digitShield2(6, 7, 8, 9);

// Create a third Digit Shield connected to Arduino pins 17,16,15,14 (A3,A2,A1,A0)
// Connected to pins 2,3,4,5 on the shield, respectively.
DigitShieldClass digitShield3(17, 16, 15, 14);

void setup() {
  // The static variable DigitShield refers to the default
  // Digit Shield that is directly on top of the Arduino
  DigitShield.begin();
  DigitShield.setPrecision(2);

  // Initialize the other two shields
  digitShield2.begin();
  digitShield3.begin();

  DigitShield.setValue(0);
  digitShield2.setValue(0);
  digitShield3.setValue(0);

}

void loop() {
  loopCounter++;
  DigitShield.setValue(counter);
  if (loopCounter % 100 == 0) {
    digitShield2.setValue((int)counter);
  }
  if (loopCounter % 10 == 0) {
    digitShield3.setValue((int)counter*30);
  }

  counter = counter + 0.01;
  if (counter >= 100) {
    counter = 0.0;
  }

  delay(d);



}

