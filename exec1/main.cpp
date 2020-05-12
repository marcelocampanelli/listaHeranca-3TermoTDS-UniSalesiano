#include "classeConta.cpp"
#include<stdio_ext.h> //para usar o __purge no linux (limpar buffer)


int main(){

  Conta Usuario;

  int op;
  char texto[30];
  float valor;


  cout<<"OLA, INFORME O SEU NOME: ";
  Usuario.setNome(fgets(texto, 30,stdin));
  __fpurge(stdin);

  cout<<"INSIRA O NUMERO DE SUA CONTA: ";
  cin>>valor;
  Usuario.setNumeroConta(valor);

  cout<<"QUAL, O SALDO ATUAL DA SUA CONTA? ";
  cin>>valor;
  Usuario.setSaldo(valor);
  __fpurge(stdin);

 

  

  do{
    system("clear||cls");
    cout<<"****************CONTA CORRENTE****************"<<endl;
    cout<<"\nUSUARIO: "<<Usuario.getNome();
    cout<<"NUMERO CONTA CORRENTE: "<<Usuario.getNumeroConta()<<endl;
    cout<<"SEU SALDO ATUAL: "<<Usuario.getSaldo()<<endl<<endl; 
    cout<<"1 - DEPOSITO"<<endl;
    cout<<"2 - RETIRADA"<<endl;
    cout<<"3 - CONSULTAR SALDO"<<endl;
    cout<<"4 - FINALIZAR"<<endl;
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
      cout<<"PRESSIONE QUALQUER TECLA PARA CONTINUAR....."<<endl;
      getchar();

    }else if(op == 2){
      cout<<"INSIRA O VALOR QUE DESEJA RETIRAR: ";
      cin>>valor;
      __fpurge(stdin);

      if(valor <= Usuario.getSaldo()){
        cout<<valor<<" RETIRADO DA CONTA: "<<Usuario.getNumeroConta()<<endl;
        Usuario.Retirar(valor);
      } else{
        cout<<"VALOR INDISPONIVEL."<<endl;
        cout<<"PRESSIONE QUALQUER TECLA PARA CONTINUAR....."<<endl;
        getchar();
      }
    
    } else if(op == 3){
      cout<<"SEU SALDO NO MOMENTO E DE: R$"<<Usuario.getSaldo()<<endl;
      cout<<"PRESSIONE QUALQUER TECLA PARA CONTINUAR....."<<endl;
      getchar();
    }

    system("clear||cls");
  }while(op != 4);
  
}