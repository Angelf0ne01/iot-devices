#include "Arduino.h"
#include "LM35.h"

LM35::LM35(int pin)
{
  _pinlm35 = pin;
}

String LM35::getValue()
{
  float value = analogRead(_pinlm35);
  float volts = (value * 5) / 4096;  // es 4096 por la resolucion en bit
  float celsius = volts * 100;
  return String(celsius);
}