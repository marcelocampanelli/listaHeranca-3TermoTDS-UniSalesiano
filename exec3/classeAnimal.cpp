#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdio_ext.h> //para usar o __purge no linux (limpar buffer)
using namespace std;

class Animal{
  private:
    char Tipo[30];
    char Cor[20];
    
  public:
  //setters
    void setTipo(char *texto);
    void setCor(char *texto);

  //getters
    char* getTipo();
    char* getCor();

  //metodos
    void ExibirTipoCor();
};


void Animal::setTipo(char *texto){
  strcpy(Tipo, texto);
  __fpurge(stdin);
};

void Animal::setCor(char *texto){
  strcpy(Cor, texto);
  __fpurge(stdin);
};

char* Animal::getTipo(){
  return Tipo;
};

char* Animal::getCor(){
  return Cor;
};

void Animal::ExibirTipoCor(){
  cout<<"************ANIMAL REGISTRADO*************"<<endl;
  cout<<"ESTÁ ENTRE A CADEIRA E O PC, BRINKSSSSSSSS"<<endl;
  cout<<"EU SOU: "<<getTipo();
  cout<<"DA COR: "<<getCor();
  cout<<"******************************************";

};

