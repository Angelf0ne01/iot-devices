#include "Motor_DC.h"

Motor_DC::Motor_DC(int pin)
{
    pines = pin;
}

Motor_DC::Avanzar()
{
    digitalWrite(pin, HIGH);
    digitalWrite(pin, LOW);
}

Motor_DC::Retroceder()
{
    digitalWrite(pin, LOW);
    digitalWrite(pin, HIGH);
}

Motor_DC::Frenar()
{
    digitalWrite(pin, LOW);
    digitalWrite(pin, LOW);
}

//by Uriel Otiz, Cervio Joaquín, Piacentini Thiago & Martín Gomez Valle