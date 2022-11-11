#ifndef _GET_PING_H
#define _GET_PING_H
#include "Arduino.h"
#include <ESP32Ping.h>

class GetPing{
private:
bool ValueReturn;
public:
GetPing();
bool pingState(const char*);
};

#endif