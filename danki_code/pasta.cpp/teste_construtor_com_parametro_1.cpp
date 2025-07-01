#include <iostream>
using namespace std;

class isa{
public:
string nome;
int idade;

isa(string nomeNovo){
printf("pessoa criada com nome \n");
nome = nomeNovo;
}
};
int main(){
class isa pessoa1("jorge");
pessoa1.nome;
pessoa1.idade = 15;
class isa pessoa2("samuel");
pessoa2.nome;
pessoa2.idade = 12;

cout << "pessoa1: " << pessoa1.nome << "\n";
cout << pessoa1.idade << " anos\n ";
cout << "\npessoa2: " << pessoa2.nome << "\n";
cout << pessoa2.idade << " anos ";
    return 0;
}