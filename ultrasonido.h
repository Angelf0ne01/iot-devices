class UltraSonido {
  private:
    float DISTANCIA = 0;
    char NOMBRE;
    bool ESTADO;
    int pinEco;
    int pinGatillo;
  public:
    UltraSonido(int gatillo, int eco) {
      pinEco = eco;
      pinGatillo = gatillo;
      pinMode(pinGatillo, OUTPUT);
      pinMode(pinEco, INPUT);
    }
    long LeerSensor()
    {
      digitalWrite(pinGatillo, LOW);
      delayMicroseconds(2);
      digitalWrite(pinGatillo, HIGH);
      delayMicroseconds(10);
      digitalWrite(pinGatillo, LOW);
      return pulseIn(pinEco, HIGH);
    }
    void getDistancia() {
      DISTANCIA = 0.0001723 * LeerSensor();
      Serial.println(DISTANCIA "Metros");
      delay(10);
    }
};