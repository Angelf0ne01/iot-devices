#ifndef _Motor_BTS_h
#include "Motor.h"

class Motor_BTS : public Motor
{
private:
    int default_speed = 120;
    int pin_PWM, pin;
    int speed;

public:
    Motor_BTS(int pPWM)
    {
        pin_PWM = pPWM;
        speed = default_speed;
        pinMode(pin_pwm, OUTPUT);
    }
    void Avanzar();
    void Retroceder();
    void Frenar();
};

#endif

//by Uriel Otiz, Cervio Joaquín, Piacentini Thiago & Martín Gomez Valle