#include "Arduino.h"
#ifndef _MOTOR_h

class Motor
{
private:
    int pines;

public:
    Motor(int pines_dir)
    {
        pines = pines_dir;
        pinMode(pines_dir, OUTPUT);
    }

    virtual void Avanzar();
    virtual void Retroceder();
    virtual void Frenar();
};

#endif

//by Uriel Otiz, Cervio Joaquín, Piacentini Thiago & Martín Gomez Valle
