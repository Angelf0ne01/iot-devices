#include "Store.h"

void Store::setDataInt(String setKeyInt,int valueInt){
  this->preferences.putInt(setKeyInt.c_str(),valueInt);
}

void Store::setDataFloat(String setKeyFloat,float valueFloat){
  this->preferences.putFloat(setKeyFloat.c_str(),valueFloat);
}
void Store::setDataString(String setKeyString,String valueString){
  this->preferences.putString(setKeyString.c_str(),valueString);
}

void Store::setDataBool(String setKeyBool,bool valueBool){
  this->preferences.putBool(setKeyBool.c_str(),valueBool);
}

int Store::getDataInt(String getKeyInt){
  return this->preferences.getInt(getKeyInt.c_str());
}

float Store::getDataFloat(String getKeyFloat){
  return this->preferences.getFloat(getKeyFloat.c_str());
}

String Store::getDataString(String getKeyString){
  return this->preferences.getString(getKeyString.c_str());
}

bool Store::getDataBool(String getKeyBool){
  return this->preferences.getBool(getKeyBool.c_str());
}
