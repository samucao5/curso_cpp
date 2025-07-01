#include <iostream>
using namespace std;
class amor{
    private:
    string nome;
   public:
   amor(string nomeNovo){
    nome = nomeNovo;
   }
   string getNome(){
    return nome;
   }
   void setNome(string nomeNovo){
    nome = nomeNovo;
   }
};
int main(){
    string name;
    cout << "digite um nome: ";
   cin >> name;
   string eman;
    cout << "digite um outro nome: ";
    cin >> eman;
    

class amor pessoa1(name); 
cout << "seu nome e: " <<pessoa1.getNome() << "\n";
pessoa1.setNome(eman);
cout << "seu nome e: " << pessoa1.getNome() << "\n";


    return 0;
}