#ifndef Led_h
#include <Arduino.h>

class LED
{
private:
int pin;

public:
LED(int pin);
On();
Off();
}

#endif
