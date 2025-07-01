#include <iostream>
#include "pai.h"
using namespace std;
int main(){
   class pai isa1;
   isa1.setMarca("microsoft");
   cout << "a marca e: " << isa1.getMarca();
   
   class Cao isa2;
   isa2.setMarca("motorola");
   isa2.setTela(5);
   cout << "a marca do celular e: " << isa2.getMarca() << "\n";
   cout << "o tamanho da tela sera de: " << isa2.getTela() << "\n";
   
   
   
   
   
   
   
   
   
   
    return 0;
}