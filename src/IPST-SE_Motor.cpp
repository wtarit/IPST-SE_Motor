#include "IPST-SE_Motor.h"
#include <Arduino.h>

void IPST_SE_Motorsetup() {
  DDRD |= B11110000;
  PORTD &= ~B00110000;
  TCCR2B = (TCCR2B & B11111000) | B00000001;
  sbi(TCCR2A, COM2B1);
  sbi(TCCR2A, COM2A1);
}
void motorcontrol(byte ch, int speed) {
  if (ch == 1) {
    if (speed > 0) {
      PORTD &= ~B00010000;
      // digitalWrite(12, 0);
      // analogWrite(14, speed);
      OCR2B = speed;
    } else if (speed < 0) {
      PORTD |= B00010000;
      // digitalWrite(12, 1);
      // analogWrite(14, -speed);
      OCR2B = -speed;
    } else if (speed == 0) {
      OCR2B = 0;
    }
  } else if (ch == 2) {
    if (speed > 0) {
      PORTD &= ~B00100000;
      // digitalWrite(13, 0);
      // analogWrite(15, speed);
      OCR2A = speed;
    } else if (speed < 0) {
      PORTD |= B00100000;
      // digitalWrite(13, 1);
      // analogWrite(15, -speed);
      OCR2A = -speed;
    } else if (speed == 0) {
      OCR2A = 0;
    }
  }
}
void motor2F(byte speed1, byte speed2) {
  PORTD &= ~B00110000;
  OCR2A = speed2;
  OCR2B = speed1;
}