#include <DigitShield.h>

void setup() {
  DigitShield.begin();
}

void loop() {
  int d = 1000;

  // clear everything
  for(int i=1;i<=4;i++) {
    DigitShield.setDecimalPoint(i, false);
    DigitShield.setDigit(i, 0xF);
  }

  // display a '3' in first digit (leftmost digit)
  DigitShield.setDigit(1, 3);
  delay(d);

  // display a '9' in 4th digit (rightmost digit)
  DigitShield.setDigit(4, 9);
  delay(d);

  // turn on decimal point of digit 2
  DigitShield.setDecimalPoint(2, true);
  delay(d);

  // display an '8' in 3rd digit
  DigitShield.setDigit(3, 8);
  // turn off decimal point of digit 2
  DigitShield.setDecimalPoint(2, false);
  delay(d);

  // display a '7' in 3rd digit
  DigitShield.setDigit(3, 7);
  // turn on decimal point of digit 3
  DigitShield.setDecimalPoint(3, true);
  // turn off 4th digit 
  DigitShield.setDigit(4, 0xF);
  delay(d);

  // clear everything
  for(int i=1;i<=4;i++) {
    DigitShield.setDecimalPoint(i, false);
    DigitShield.setDigit(i, 0xF);
  }
    
  // cycle through the decimal points quickly
  int k;
  for(int i=0;i<10;i++) {
    for(int j=1;j<=4;j++) {
      DigitShield.setDecimalPoint(j, true);
      k = j-1;
      if (k == 0) {
	k = 4;
      }
      DigitShield.setDecimalPoint(k, false);
      delay(50);
    }
  }



}

