#include "localDataBase.h"

wifiCredentials::wifiCredentials()
{
    store = new Store();
}

void wifiCredentials::setSsid(Stirng ssid)
{
    store->setDataString("ssid", ssid);
    return;
}

void wifiCredentials::setPws(String pw)
{
    store->setDataString("pws",pw );
    return;
}

String wifiCredentials::getSsid()
{
    store->getData("ssid");
    return;
}

String wifiCredentials::getPsw()
{
    store->getData("pws");
    return;
}
