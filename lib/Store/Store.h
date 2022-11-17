#include <Arduino.h>
#include <Preferences.h>

class Store {
  private:
    Preferences preferences; 
  public:
    void setDataInt(String setKeyInt,int valueInt);
    void setDataFloat(String setKeyFloat,float valueFloat);
    void setDataString(String setKeyString,String valueString);
    void setDataBool(String setKeyBool,bool valueBool);
    int getDataInt(String getKeyInt);
    float getDataFloat(String getKeyFloat);
    String getDataString(String getKeyString);
    bool getDataBool(String getKeyBool);
};
