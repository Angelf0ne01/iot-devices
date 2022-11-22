
//#define LOCAL_DATA_BASE_H

class wifiCredentials
{
    private:
String wifiSsid;
String wifiPsw;
Store *store; 

    public:
    wifiCredentials();

    void setPws(String pw);
    void setSsid(String ssid);
    String getSsid();
    String getPsw();


}