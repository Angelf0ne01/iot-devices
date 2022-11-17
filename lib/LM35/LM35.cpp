#include "Arduino.h"
#include "LM35.h"

lm35::lm35(int pin)
{
  _pinlm35 = pin;
}

String lm35::getValue()
{
  float value = analogRead(_pinlm35);
  float volts = (value * 5) / 4096;  // es 4096 por la resolucion en bit
  float celsius = volts * 100;
  return String(celsius);
}