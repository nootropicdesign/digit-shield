#include <DigitShield.h>

void setup() {
  DigitShield.begin();
}

void loop() {

  int d = 500;

  // display "123"
  DigitShield.setValue(123);
  delay(d);

  // display "123.0"
  DigitShield.setPrecision(1);
  delay(d);


  // attempt to display "123.00"
  // this is invalid and the 4 decimal points will be on.
  DigitShield.setPrecision(2);
  delay(d);

  // displays "123" again
  DigitShield.setPrecision(0);
  delay(d);

  // display "0"
  DigitShield.setValue(0);
  delay(d);

  // display "0.0"
  DigitShield.setPrecision(1);
  delay(d);

  // display "0.00"
  DigitShield.setPrecision(2);
  delay(d);

  // display "043.0"
  DigitShield.setPrecision(1);
  DigitShield.setValue(43);
  DigitShield.setLeadingZeros(true);
  delay(d);

  // display "0.001"
  DigitShield.setLeadingZeros(false);
  DigitShield.setPrecision(3);
  DigitShield.setValue(.001);
  delay(d);
  

  // display "3.14"
  DigitShield.setPrecision(2);
  DigitShield.setValue(3.14159);
  delay(d);

  // display "3.142"
  DigitShield.setPrecision(3);
  delay(d);

  // display "3"
  DigitShield.setPrecision(0);
  delay(d);

  // attemp to display negative number
  // this is invalid and the 4 decimal points will be on.
  DigitShield.setValue(-32);
  DigitShield.setPrecision(0);
  delay(d);

}

