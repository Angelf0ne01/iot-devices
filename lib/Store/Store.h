class Store {
  private:
    Preferences preference; 
  public:
    void setDataInt(String key,int value);
    void setDataFloat(String key,float value);
    void setDataString(String key,String value);
    void setDataBool(String key,bool value);
    int getDataInt(String key);
    float getDataFloat(String key);
    String getDataString(String key);
    bool getDataBool(String key);
}