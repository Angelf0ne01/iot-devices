#include <PubSubClient.h>
#include <WiFi.h>
#ifndef "MQTT.h"

class MQTTIot
{
private:{      
const char*SSID;
const char *BROKERMQTT;
int BROKER_PORT = 1883;
}

public:{ 
    void Pub(string topic, string value);
    void Sub(String topic);
}
};

#endif