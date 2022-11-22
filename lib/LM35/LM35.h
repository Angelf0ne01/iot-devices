#ifndef LM35.h
#include "Arduino.h"

class LM35
{
  public:
    LM35(int pin);
    String getValue();
  private:
    int _pinlm35;
};

#endif