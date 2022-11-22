#include <WiFi.h>
#include <HTTPClient.h>
#include "HTTPIOT.h"


class HTTPIOT {
    HTTPClient HTTP;

    String baseUrl;
    public:
    HTTPIOT(String url, String port) {
      this-> baseUrl = url;
    }
    String gett (String recurso) {
      String url = this-> baseUrl+recurso;
      HTTP.begin(url);      
      HTTP.GET(); 
      return HTTP.getString();

    }

 String post (String recurso,String data) {
      String url = this-> baseUrl+recurso;
      HTTP.begin(url);      
      HTTP.POST(data);
      return HTTP.getString();

    }
    };



String url = "http://example.org";
HTTPIOT *client_http = new HTTPIOT(url,"443");



  const char* ssid = "Wokwi-GUEST";
const char* password = "";
void setup() {

  Serial.begin(115200);
  WiFi.begin(ssid, password);

  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.print("OK! IP=");
  Serial.println(WiFi.localIP());

  Serial.print("Fetching " + url + "... ");
  Serial.println(client_http->gett(""));

  
};

void loop (){
  
}