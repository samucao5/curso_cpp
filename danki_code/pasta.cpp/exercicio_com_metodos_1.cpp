#include <iostream>
#include <ios>
#include <limits>
using namespace std;
class pessoa{
public:
int idade;
float salario;
string nome;

pessoa(string nomeNovo, int idadeNova, float salarioNovo){
    printf("nome da pessoa criado\n");
    nome = nomeNovo;
    printf("idade da pessoa criada\n");
    idade = idadeNova;
     printf("salario criado\n");
    salario = salarioNovo;
}
void pedro(){
    cout << "seu nome e:" << nome << "\nseu salario e R$" << salario << "\nsua idade e: " << idade << " anos";
}
};
int main(){
    string porquin;
    cout << "digite seu nome: \n";
    cin >> porquin;
    int idade1;
    cout << "digite sua idade: \n";
    cin >> idade1;
    float salario1;
    cout << "digite seu salario: \n";
    cin >> salario1;

class pessoa pessoa1(porquin,idade1,salario1);
pessoa1.pedro();
  

  
  
  
  
  
  return 0;  
}