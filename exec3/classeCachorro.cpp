

class Cachorro: public Animal{
  private:
  char Nome[30];
  char Raca[30];

  public:
 
  void setNome(char *texto);
  void setRaca(char *texto);

  char* getNome();
  char* getRaca();

  void ExibirNomeRaca();
};


void Cachorro::setNome(char *texto){
  strcpy(Nome, texto);
  __fpurge(stdin);
};

void Cachorro::setRaca(char *texto){
  strcpy(Raca, texto);
  __fpurge(stdin);
};

 char* Cachorro::getNome(){
   return Nome;
 };

 char* Cachorro::getRaca(){
   return Raca;
 };

 void Cachorro::ExibirNomeRaca(){
   cout<<"************CACHORRO CADASTRADO************"<<endl;
   cout<<"NOME: "<<getNome();
   cout<<"RACA: "<<getRaca();
   cout<<"*******************************************"<<endl;;
 };


