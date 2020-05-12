#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string.h>
#include<stdio_ext.h> //para usar o __purge no linux (limpar buffer)
using namespace std;

class Conta {
  private:
    char  Nome[30];
    int   NumeroConta;
    float Saldo;

  public:
    void setNome(char *texto);
    void setNumeroConta(int valor);
    void setSaldo(float valor);

    char* getNome();
    int getNumeroConta();
    float getSaldo();

    void Depositar(float valor);
    void Retirar(float valor);
    float ConsultarSaldo();  

};

void Conta::setNome(char *texto){
  strcpy(Nome, texto);
  __fpurge(stdin);
};

void Conta::setNumeroConta(int valor){
  NumeroConta = valor;
};

void Conta::setSaldo(float valor){
  Saldo = valor;
};

char* Conta::getNome(){
  return Nome;
};

int Conta::getNumeroConta(){
  return NumeroConta;
};

float Conta::getSaldo(){
  return Saldo;
};


void Conta::Depositar(float valor){
  
  this->Saldo += valor;
};

void Conta::Retirar(float valor){
    this->Saldo -= valor;
};

float Conta::ConsultarSaldo(){
  return this->Saldo;
}




