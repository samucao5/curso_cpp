#include <iostream>
#include "isa.h"
using namespace std;
int main(){
    class usuario isa1;
    isa1.setNome("fernando");
    isa1.setEmail("felipe.com");
    cout << "qual o seu nome: " << isa1.getNome() << endl;
    cout << "qual o seu email: " << isa1.getEmail() << endl;

    class personagem isa2;
    isa2.setNome("junir");
    isa2.setEmail("junir.com");
    isa2.setNivel(15);
    cout << "qual o seu nome: " << isa2.getNome() << endl;
    cout << "qual o seu email: " << isa2.getEmail() << endl;
    cout << "qual o nivel: " << isa2.getNivel() << endl;
    cout << "voce aumentou um nivel";
    



    return 0;
}