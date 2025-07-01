#include <iostream>
using namespace std;

class isa{
public:
string nome;

isa(string nomeNovo){
    printf(" pessoa criada com nome\n");
    nome = nomeNovo;
}
void fala(string frase){
    cout << nome << " diz: " << frase;
}
void gritar(){
    cout << " AAHHHHHHH";
}
};
int main(){
    class isa cao("cao");
    cao.fala("suave ae");
    cao.gritar();






    return 0;
}




