#include "Store.h"

Store::setDataInt(String key,int value){
  this->preferences->putInt(key,value);
}

Store::setDataFloat(String key,float value){
  this->preferences->putFloat(key,value);
}
Store::setDataString(String key,int value){
  this->preferences->putString(key,value);
}

Store::setDataBool(String key,float value){
  this->preferences->putBool(key,value);
}

Store::getDataInt(String key){
  this->preferences->getInt(key);
}

Store::getDataFloat(String key){
  this->preferences->getFloat(key);
}

Store::getDataString(String key){
  this->preferences->getString(key);
}

Store::getDataBool(String key){
  this->preferences->getBool(key);
}