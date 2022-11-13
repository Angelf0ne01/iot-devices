/*
LDR.h - libreria para usar el sensor LDR
creada por ENzo G. Borrelli A. & Matias Rodriguez, OCtubre 29, 2022
*/

#ifndef LDR.h

 
#include "Arduino.h"
 
class LDR 
{
  public:
    LDR(int pin);
    String GetValue();
  private:
    int _pinLDR;
    const float GAMMA = 0.7;
    const int RL10 = 50;
};
 
#endif

