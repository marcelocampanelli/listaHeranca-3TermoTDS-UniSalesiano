
class LimiteCredito: public Conta{

  private:
    float CreditoEspecial;

  public:
    void setLimiteCredito(float valor);

    float getLimiteCredito();
    float getSaldoTotal();


    float SaldoTotal();
    float DebitoTotal(float valor);

};

void LimiteCredito::setLimiteCredito(float valor){
  CreditoEspecial = valor;
};



float LimiteCredito::getLimiteCredito(){
  return CreditoEspecial;
};



float LimiteCredito::SaldoTotal(){
  return getSaldo()+getLimiteCredito();
};

float LimiteCredito::DebitoTotal(float valor){
  return SaldoTotal()-valor;
};
