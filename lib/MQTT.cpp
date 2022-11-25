#include <PubSubClient.h>
#include <WiFi.h>
#include <MQTT.h>

const char*SSID=" ";
const char *BROKERMQTT = ""; 
int BROKER_PORT = 1883;

client.subscribe(Sub);
clientpublish(Pub);

class MQTTIot{

    WiFiClient espClient; PubSubClient MQTTIot
    (espClient);

    MQTTIot(){
        MQTT.setServer(BROKER MQTT, BROKER_PORT);
        MQTT.setCallback(callbackMQTT);
    }
       void Pub(string topic, string value){
        MQTT.publish(topic,value);
       }

       void Sub(String topic){
        MQTT.Suscribe(topic);
       }
}

void setup(){
    Serial.begin(115200);
}
void loop(){}