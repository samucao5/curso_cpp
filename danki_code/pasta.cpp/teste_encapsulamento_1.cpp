#include <iostream>
using namespace std;
class isa{
    private:
    string nome;

    public:
    string getNome(){
    return nome;
    }
    void setNome(string nomeNovo){
        nome = nomeNovo;
    }
};
int main(){
    class isa pessoa1;
    pessoa1.setNome("fernando");
    cout << "seu nome e: " << pessoa1.getNome() << "\n";
    return 0;
}