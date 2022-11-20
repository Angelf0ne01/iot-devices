#include <Arduino.h>
#include <Led.h>

LED::LED(int pin){
this->pin = pin;
pinMode(this->pin,OUTPUT);
}

void LED::On(){
    digitalWrite(pin,HIGH);
}

void LED::Off(){
    digitalWrite(pin,LOW);
}