#include "WiFi.h"
#include "GetIdentifier.h"
#include "Arduino.h"

String DeviceInfo::GetIdentifier()
{
  return this->MacAdress = WiFi.macAddress();
}
