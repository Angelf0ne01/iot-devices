/*
LDR.cpp - libreria para usar el sensor LDR
creada por ENzo G. Borrelli A. & Matias Rodriguez, OCtubre 29, 2022
*/

#include "Arduino.h"
#include "LDR.h"

LDR::LDR(int pin) 
{
    _pinLDR = pin;
    
}
    
String LDR::GetValue() 
{
    float analogValue = analogRead(_pinLDR);
      float voltage = analogValue / 4096 * 5;
      float resistance = 2000 * voltage / (1 - voltage / 5);
      float lux = pow(RL10 * 1e3 * pow(10, GAMMA) / resistance, (1 / GAMMA));
      return String(lux);
}
