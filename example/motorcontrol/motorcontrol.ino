#include <IPST-SE_Motor.h>
void setup() {
  IPST_SE_Motorsetup();
}

void loop() {
  motor2F(128, 128);
  delay(500);
  motorcontrol(1, 255);
  motorcontrol(2, -255);
  delay(500);
  motor2F(0, 0);
  delay(500);
}
