

class Gerente: public Empregado{
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


void Gerente::setValorHora(float valor){
  ValorHora = valor;
};

void Gerente::setHorasTrabalhadas(float valor){
  HorasTrabalhadas = valor;
};

float Gerente::getValorHora(){
  return ValorHora;
};

float Gerente::getHorasTrabalhadas(){
  return HorasTrabalhadas;
};

float Gerente::ValorDoSalario(){
  return this->ValorHora * this->HorasTrabalhadas;
}


