#include "GetPing.h"

GetPing::GetPing()
{
}
bool GetPing::pingState(const char* host)
{
    if(Ping.ping(host)) ValueReturn = HIGH;
    else ValueReturn = LOW;
    return ValueReturn;
}