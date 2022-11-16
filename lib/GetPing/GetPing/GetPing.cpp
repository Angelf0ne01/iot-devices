#include "GetPing.h"

bool GetPing::pingState(const char* host)
{
    return Ping.ping(host);
}
