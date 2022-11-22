#include "Arduino.h"
#include "localDataBase.h"




wifiCredentials::wifiCredentials()
{
    store = new Store();
}

void wifiCredentials::setSsid(Stirng ssid)
{
    store->setDataString(SSID, ssid);
    
}

void wifiCredentials::setPws(String pw)
{
    store->setDataString(PWS, pw);
    
}

String wifiCredentials::getSsid()
{
     return store->getData(SSID);
        
    
}

String wifiCredentials::getPsw()
{
    return store->getData(PWS);
    
}
