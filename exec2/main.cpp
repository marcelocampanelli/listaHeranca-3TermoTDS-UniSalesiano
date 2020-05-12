#include "classeConta.cpp"
#include "classeEspecial.cpp"
#include<stdio_ext.h> //para usar o __purge no linux (limpar buffer)


int main(){

  LimiteCredito Usuario;

  int op;
  char texto[30];
  float valor;
  float saldoTotal;


  cout<<"OLA, INFORME O SEU NOME: ";
  Usuario.setNome(fgets(texto, 30,stdin));
  __fpurge(stdin);

  cout<<"INSIRA O NUMERO DE SUA CONTA: ";
  cin>>valor;
  Usuario.setNumeroConta(valor);

  cout<<"QUAL O SALDO ATUAL DA SUA CONTA? ";
  cin>>valor;
  Usuario.setSaldo(valor);
  __fpurge(stdin);

  cout<<"QUAL O SEU LIMITE DE CREDITO ESPECIAL: ";
  cin>>valor;
  Usuario.setLimiteCredito(valor);
  saldoTotal = Usuario.SaldoTotal();

  do{
    system("clear||cls");
    cout<<"****************CONTA CORRENTE****************"<<endl;
    cout<<"\nUSUARIO: "<<Usuario.getNome();
    cout<<"NUMERO CONTA CORRENTE: "<<Usuario.getNumeroConta()<<endl;
    cout<<"SEU SALDO É DE: R$"<<Usuario.getSaldo()<<endl;
    cout<<"CREDITO ESPECIAL: R$"<<Usuario.getLimiteCredito()<<endl;
    cout<<"SALDO + CREDITO ESPECIAL : R$"<<saldoTotal<<endl<<endl;;
    cout<<"1 - DEPOSITO"<<endl;
    cout<<"2 - RETIRADA"<<endl;
    cout<<"3 - CONSULTAR SALDO"<<endl;
    cout<<"4 - FINALIZAR"<<endl<<endl;;
    cout<<"**********************************************"<<endl;
    cout<<"\nINSIRA SUA OPCAO: ";
    cin>>op;
    __fpurge(stdin);

    if (op == 1){
      cout<<"INSIRA O VALOR QUE DESEJA DEPOSITAR: ";
      cin>>valor;
      __fpurge(stdin);
      cout<<valor<<" INSERIDOS NA CONTA: "<<Usuario.getNumeroConta()<<endl;
      Usuario.Depositar(valor);
      saldoTotal = Usuario.SaldoTotal();
      cout<<"\n\nPRESSIONE QUALQUER TECLA PARA CONTINUAR....."<<endl;
      getchar();

    }else if(op == 2){
      cout<<"INSIRA O VALOR QUE DESEJA RETIRAR: ";
      cin>>valor;
       __fpurge(stdin);
      if (valor <= Usuario.getSaldo()){
        Usuario.Retirar(valor);
        saldoTotal = Usuario.SaldoTotal();
      }else if(valor <= saldoTotal){
        Usuario.DebitoTotal(valor);
        Usuario.Retirar(valor);
        saldoTotal = Usuario.SaldoTotal();
      }else if( valor > Usuario.SaldoTotal()){
        cout<<"\n\nVALOR INDISPONIVEL NO MOMENTO."<<endl;
        cout<<"\nPRESSIONE QUALQUER TECLA PARA CONTINUAR....."<<endl;
        getchar();
        __fpurge(stdin);
      }
      
      __fpurge(stdin);


    
    } else if(op == 3){
      cout<<"\n\nSEU SALDO NO MOMENTO E DE: R$"<<Usuario.getSaldo()<<endl;
      cout<<"\n\nPRESSIONE QUALQUER TECLA PARA CONTINUAR....."<<endl;
      getchar();
    }

    system("clear||cls");
  }while(op != 4);
  
}