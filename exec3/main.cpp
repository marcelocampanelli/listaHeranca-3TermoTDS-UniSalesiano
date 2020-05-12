#include"classeAnimal.cpp"
#include"classeCachorro.cpp"


int main(){
  Cachorro Animal;
  
   char texto[30];
  cout<<"************REGISTRO CACHORRO************"<<endl;
  cout<<"QUAL O NOME DO SEU CACHORRO: ";
  Animal.setNome(fgets(texto,30,stdin));
  __fpurge(stdin);
  cout<<"QUAL A RACA DO SEU CACHORRO: ";
  Animal.setRaca(fgets(texto,30,stdin));
  __fpurge(stdin);
  cout<<"QUAL A COR DO SEU CACHORRO: ";
  Animal.setCor(fgets(texto,30,stdin));
  __fpurge(stdin);
  cout<<"QUAL O TIPO DO SEU CACHORRO: ";
  Animal.setTipo(fgets(texto,30,stdin));
  __fpurge(stdin);
  cout<<"******************************************"<<endl;
  system("clear||cls");
  Animal.ExibirNomeRaca();
  cout<<endl;
  Animal.ExibirTipoCor();
  



};
