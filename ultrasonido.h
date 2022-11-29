class UltraSonido {
  private:
    float DISTANCIA = 0;
    int TIEMPO = 0;
    int pinEco;
    int pinGatillo;
  public:
    UltraSonido(int gatillo, int eco) {
      pinEco = eco;
      pinGatillo = gatillo;
      pinMode(pinGatillo, OUTPUT);
      pinMode(pinEco, INPUT);
    }
    float LeerSensor();
};