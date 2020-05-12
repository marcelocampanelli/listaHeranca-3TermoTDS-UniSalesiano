
class Horista: public Empregado{
  private:
    float ValorHora;
    float HorasTrabalhadas;

  public:
    void setValorHora(float valor);
    void setHorasTrabalhadas(float valor);

    float getValorHora();
    float getHorasTrabalhadas();

    float ValorDoSalario();
};

void Horista::setValorHora(float valor){
  ValorHora = valor;
};

void Horista::setHorasTrabalhadas(float valor){
  HorasTrabalhadas = valor;
};

float Horista::getValorHora(){
  return ValorHora;
};

float Horista::getHorasTrabalhadas(){
  return HorasTrabalhadas;
};

float Horista::ValorDoSalario(){
  return this->ValorHora * this->HorasTrabalhadas;
}


