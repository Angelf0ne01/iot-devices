#include <GetPing.h>
#include <WiFi.h>
#include <ESP32Ping.h>

const char* ssid     = "ssid";
const char* password = "password";

const char* remote_host = "www.google.com";

GetPing *getPing = new GetPing();
void setup() {
  Serial.begin(115200);
  delay(10);
  
  Serial.println();
  Serial.println("Connecting to WiFi");
  
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("WiFi connected with ip ");  
  Serial.println(WiFi.localIP());

  Serial.print("Pinging host ");
  Serial.println(remote_host);
  if(getPing->pingState(remote_host)) Serial.println("Success!!");
  else Serial.println("Error :(");
}

void loop() { }
