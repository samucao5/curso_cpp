#include <iostream>
using namespace std;

class isa{
public:
string nome;
int idade;

isa(){
    printf("pessoa criada sem nome e idade");
}
isa(int idadeNova){
    printf("pessoa criada com idade\n");
    idade = idadeNova;
}
isa(string nomeNovo){
    printf("pessoa criada com nome\n");
    nome = nomeNovo;
}
isa(string nomeNovo, int idadeNova){
    printf("pessoa criada com idade e nome\n");
    idade = idadeNova;
    nome = nomeNovo;
}
};

int main(){
class isa pessoa1;
pessoa1.nome = "fernando";
pessoa1.idade = 19;
cout << "pessoa1: " << pessoa1.nome << "\n" << pessoa1.idade << " anos" << "\n";

class isa pessoa2(12);
pessoa2.nome = "cao";
cout << "pessoa2: " << pessoa2.nome << "\n" << pessoa2.idade << " anos" << "\n";

class isa pessoa3("Cao");
pessoa3.idade = 12; 
cout << "pessoa3: " << pessoa3.nome << "\n" << pessoa3.idade << " anos" << "\n";

class isa pessoa4("cao", 12);
cout << "pessoa4: " << pessoa4.nome << "\n" << pessoa4.idade << " anos" << "\n";



return 0;
}