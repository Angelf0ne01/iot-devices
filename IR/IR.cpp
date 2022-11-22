#include "arduino.h"
#include "IR.h"

IR::IR(int pin){
_pin =pin
pinMode(pin,INPUT);
}
IR::get_valor(){
long valor = analog read(pin);
return String(valor);
}