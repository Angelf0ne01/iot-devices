#include "ultrasonido.h"

UltraSonido::UltraSonido(){

}

float UltraSonido::getDistancia()
{
    digitalWrite(pinGatillo, LOW);
    delayMicroseconds(2);
    digitalWrite(pinGatillo, HIGH);
    delayMicroseconds(10);
    digitalWrite(pinGatillo, LOW);
float TIEMPO = pulseIn(pinEco, HIGH);
  return  DISTANCIA = TIEMPO / 5, 8;
}
