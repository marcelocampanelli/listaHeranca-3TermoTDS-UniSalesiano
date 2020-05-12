
class Vendedor: public Empregado{
  private:
    float SalarioBase;
    float ValorVendasMes;
    float Comissao;
    
  public:
  void setSalarioBase(float valor);
  void setValorVendasMes(float valor);
  void setComissao(float valor);

  float getSalarioBase();
  float getValorVendasMes();
  float getComissao();

  float ValorSalarioBruto();

};


void Vendedor::setSalarioBase(float valor){
  SalarioBase = valor;
};

void Vendedor::setValorVendasMes(float valor){
  ValorVendasMes = valor;
};

void Vendedor::setComissao(float valor){
  Comissao = valor;
};

float Vendedor::getSalarioBase(){
  return SalarioBase;
};

float Vendedor::getValorVendasMes(){
  return ValorVendasMes;
};

float Vendedor::getComissao(){
  return Comissao;
};

float Vendedor::ValorSalarioBruto(){
  return ((getComissao() / 100) * getValorVendasMes()) * getSalarioBase();
}