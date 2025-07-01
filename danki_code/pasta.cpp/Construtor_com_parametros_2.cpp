#include <iostream>
using namespace std;
class isa{
    public:
    string nome;
 isa(){
    printf("pessoa criada sem nome\n");
 }
 isa(string nomeNovo){
    printf("pessoa criada com esse nome: \n");
    nome = nomeNovo;
 }
};
int main(){
class isa pessoa1;
cout << "pessoa1: " << pessoa1.nome << "\n";
pessoa1.nome = "Isa";
cout << "pessoa1: " << pessoa1.nome << "\n\n";
class isa pessoa2("cao");
cout << "pessoa2: " << pessoa2.nome << "\n";

    return 0;
}