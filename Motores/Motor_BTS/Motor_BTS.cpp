#include "Motor_BTS.h"

Motor_BTS::Motor_BTS(int pin)
{
    pines = pin;
}

Motor_BTS::Avanzar()
{
    digitalWrite(pin, LOW);
    analogWrite(pin_PWM, default_speed);
}

Motor_BTS::Retroceder()
{
    digitalWrite(pin, default_speed);
    analogWrite(pin_PWM, LOW);
}

Motor_BTS::Frenar()
{
    digitalWrite(pin, HIGH);
    analogWrite(pin_PWM, HIGH);
}

//by Uriel Otiz, Cervio Joaquín, Piacentini Thiago & Martín Gomez Valle