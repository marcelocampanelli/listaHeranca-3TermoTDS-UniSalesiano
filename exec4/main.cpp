#include"classeEmpregado.cpp"
#include"classeGerente.cpp"
#include"classeHorista.cpp"
#include"classeVendedor.cpp"

using namespace std;
int main(){
  Gerente Gerentte;
  Horista Horistta;
  Vendedor Vendeddor;
  
  float valor;
  char texto[30];

  cout<<"**********REGISTRO Gerentte**********"<<endl;
  cout<<"INSIRA O SEU NOME: ";
  Gerentte.setNome(fgets(texto, 30, stdin));
  __fpurge(stdin);
  cout<<"INSIRA O SEU NUMERO FUNCIONAL: ";
  cin>>valor;
  Gerentte.setNumero(valor);
  cout<<"INSIRA O VALOR DA SUA HORA DE TRABALHO: ";
  cin>>valor;
  Gerentte.setValorHora(valor);
  cout<<"INSIRA A QUANTIDADE DE HORAS QUE VOCÊ TEM: ";
  cin>>valor;
  Gerentte.setHorasTrabalhadas(valor);
  cout<<"************************************"<<endl<<endl;
   __fpurge(stdin);

  cout<<"**********REGISTRO Horistta**********"<<endl;
  cout<<"INSIRA O SEU NOME: ";
  Horistta.setNome(fgets(texto, 30, stdin));
  __fpurge(stdin);
  cout<<"INSIRA O SEU NUMERO FUNCIONAL: ";
  cin>>valor;
  Horistta.setNumero(valor);
  cout<<"INSIRA O VALOR DA SUA HORA DE TRABALHO: ";
  cin>>valor;
  Horistta.setValorHora(valor);
  cout<<"INSIRA A QUANTIDADE DE HORAS QUE VOCÊ TEM: ";
  cin>>valor;
  Horistta.setHorasTrabalhadas(valor);
  cout<<"************************************"<<endl<<endl;

   __fpurge(stdin);
  cout<<"**********REGISTRO Vendeddor**********"<<endl;
  cout<<"INSIRA O SEU NOME: ";
  Vendeddor.setNome(fgets(texto, 30, stdin));
   __fpurge(stdin);
  cout<<"INSIRA O SEU NUMERO FUNCIONAL: ";
  cin>>valor;
  Vendeddor.setNumero(valor);
  cout<<"INSIRA O VALOR DO SEU SALARIO BASE: ";
  cin>>valor;
  Vendeddor.setSalarioBase(valor);
  cout<<"VALOR TOTAL DE SUAS VENDAS DO MES: ";
  cin>>valor;
  Vendeddor.setValorVendasMes(valor);
  cout<<"PORCENTAGEM DE COMISSAO EM CIMA DAS VENDAS: ";
  cin>>valor;
  Vendeddor.setComissao(valor);
  cout<<"************************************"<<endl<<endl;
  
  __fpurge(stdin);
  cout<<"\n\nPRESSIONE QUALQUER TECLA PARA CONTINUAR......"<<endl;
   __fpurge(stdin);
    getchar();
    __fpurge(stdin);
  Vendeddor.ValorSalarioBruto();
  Horistta.ValorDoSalario();
  Gerentte.ValorDoSalario();

   __fpurge(stdin);
  if (
     Vendeddor.ValorSalarioBruto() > Horistta.ValorDoSalario() > Gerentte.ValorDoSalario()
     ){
       __fpurge(stdin);
     cout<<"VOCE: "<<Vendeddor.getNome();
     cout<<"TEM O MAIOR SALARIO. NO VALOR DE: "<<Vendeddor.ValorSalarioBruto();  
  } else if (
              Vendeddor.ValorSalarioBruto() < Horistta.ValorDoSalario() > Gerentte.ValorDoSalario()
            ){
              __fpurge(stdin);
            cout<<"VOCE: "<<Horistta.getNome();
            cout<<"TEM O MAIOR SALARIO. NO VALOR DE: "<<Horistta.ValorDoSalario();
            }else if(
                       Vendeddor.ValorSalarioBruto() < Horistta.ValorDoSalario() < Gerentte.ValorDoSalario()
                    ){
                      __fpurge(stdin);
                    cout<<"VOCE: "<<Gerentte.getNome();
                    cout<<"TEM O MAIOR SALARIO. NO VALOR DE: R$"<<Gerentte.ValorDoSalario();
         }

}