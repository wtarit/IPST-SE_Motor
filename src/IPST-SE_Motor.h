#include <Arduino.h>

#ifndef TARIT_IPST_SE_Motor_H_
#define TARIT_IPST_SE_Motor_H_

#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))

void IPST_SE_Motorsetup();
void motorcontrol(byte ch, int speed);
void motor2F(byte speed1, byte speed2);

#endif