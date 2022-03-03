# IPST-SE_Motor

Using port manipulation to control motor on INEX IPST-SE.  
To install this library, download the [ZIP file](https://github.com/wtarit/IPST-SE_Motor/releases/download/v1.0.0/IPST-SE_Motor.zip) and use "Add .ZIP library" to install to ArduinoIDE or add to lib folder in PlatformIO project.

To use this library, you have to include library and inititlize it first.

```c++
#include <IPST-SE_Motor.h>

// Inititlize library.
void setup() {
  IPST_SE_Motorsetup();
}
```

To control motor use

```c++
motorcontrol(byte ch, int speed);
```

If you only move forward, use motor2F function instead since it's faster (No condition checking for reverse rotation.)

```c++
motor2F(byte speed1, byte speed2);
```

If you found any problem using this library, feel free to open an issue.
