#ifndef IR.h

#include "arduino.h"

Class IR{
public:
IR(int pin);
String get_valor();
private:
int pin;
}

#endif 