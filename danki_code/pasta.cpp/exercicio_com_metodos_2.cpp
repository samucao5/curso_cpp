#include <iostream>
#include <ios>
#include <limits>
using namespace std;
class calculadora{
    public:
    calculadora(){
        printf("calculadora criada\n");
    }
    int soma(int isa, int cao){
        int rsoma = isa + cao;
         return rsoma;  
    }
    int subs(int isa,int cao){
        int rsubs = isa - cao;
        return rsubs;
    }
    int mult(int isa,int cao){
        int rmult = isa* cao;
        return rmult;
    }
    int div(int isa,int cao){
        int rdiv = isa/cao;
        return rdiv;
    }
};
int main(){
    int isa;
 cout << "digite um valor: \n";
 cin >> isa;

 int cao;
 cout << "digite um segundo valor: \n";
 cin >>  cao;

class calculadora porquin;
porquin.soma(isa,cao);
porquin.subs(isa,cao);
porquin.mult(isa,cao);
porquin.div(isa,cao);

cout << isa << " + " << cao << " = " << porquin.soma(isa,cao)  << "\n";
cout << isa << " - " << cao << " = " << porquin.subs(isa,cao)  << "\n";
cout << isa << " X " << cao << " = " << porquin.mult(isa,cao) << "\n";
cout << isa << " / " << cao << " = " << porquin.div(isa,cao)  << "\n";

    return 0;
}