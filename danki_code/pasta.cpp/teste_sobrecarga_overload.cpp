#include <iostream>
using namespace std;

class isa{
    public:
     void imprimir(float reais){
        cout << "R$" << reais << endl;
     }
     void imprimir(string frase){
        cout << "-" << frase << endl;
     }
};
int main(){
    class isa impressora1;
    impressora1.imprimir(7.25);
    impressora1.imprimir("te amo");
    return 0;
}