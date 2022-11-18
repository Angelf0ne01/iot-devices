#ifndef _Motor_DC_h
#include "Motor.h"

class Motor_DC : public Motor
{
private:
    int pines;

public:
    // todo lo comentado está heredado de la clase padre "Motor".
    /*
     Motor_DC(int _pin)
     {
         pines = _pin;
         pinMode(_pin, OUTPUT);
     }
     */

    void Avanzar();
    void Retroceder();
    void Frenar();
};

//by Uriel Otiz, Cervio Joaquín, Piacentini Thiago & Martín Gomez Valle