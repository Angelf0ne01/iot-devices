#ifndef LM35.h
#include "Arduino.h"

class lm35
{
  public:
    lm35(int pin);
    String getValue();
  private:
    int _pinlm35;
};

#endif