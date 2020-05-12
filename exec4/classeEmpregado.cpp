#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdio_ext.h> //para usar o __purge no linux (limpar buffer)
using namespace std;

class Empregado{
  private:
    int  Numero;
    char Nome[30];

  public:
    void setNumero(int valor);
    void setNome(char *texto);

    int   getNumero();
    char* getNome();

};

void Empregado::setNome(char *texto){
  strcpy(Nome, texto);
  __fpurge(stdin);
};

void Empregado::setNumero(int valor){
  Numero = valor;
};

int Empregado::getNumero(){
  return Numero;
};

char* Empregado::getNome(){
  return Nome;
};
