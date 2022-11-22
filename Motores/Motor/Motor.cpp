#include <Arduino.h>
#include "Motor.h"

Motor::Motor(int pines_dir)
{
    pines = pines_dir;
}

void Motor::Avanzar()
{
    // como es void virtual lo puedo destinar a cada una de las clases.
    // de esta manera lo adapto a cada motor.
}

void Motor::Retroceder()
{
    // como es void virtual lo puedo destinar a cada una de las clases.
    // de esta manera lo adapto a cada motor.
}

void Motor::Frenar()
{
    // como es void virtual lo puedo destinar a cada una de las clases.
    // de esta manera lo adapto a cada motor.
}

//by Uriel Otiz, Cervio Joaquín, Piacentini Thiago & Martín Gomez Valle