#ifndef "BME280.h"
#include "Arduino.h"

class BME280{
  private:
   int pin_21;
   int pin_22;
   
  public:
   float Presion;
   
   BME280(int nuevo_pin_1, int nuevo_pin_2){
    pin_21 = nuevo_pin_1;
    pin_22 = nuevo_pin_2;
    }
    
    String BME280::getValue(){
      
       Serial.print ("/t Presion: ");
       Serial.print (Presion);
       Serial.println (" hPa");
       return String (" hPa");
      }

  };

  #endif
