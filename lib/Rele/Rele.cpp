#include <Arduino.h>
#include <Rele.h>

RELE::RELE(int pin){
this->pin = pin;
pinMode(this->pin,OUTPUT);
}

void RELE::On(){
    digitalWrite(pin,HIGH);
}

void RELE::Off(){
    digitalWrite(pin,LOW);
}
