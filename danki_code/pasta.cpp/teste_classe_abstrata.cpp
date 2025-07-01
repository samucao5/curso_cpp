#include <iostream>
using namespace std;
class formaGeometrica{
public:
virtual int area() = 0;
void setLargura(int largura){
    this -> largura = largura;
}

void setAltura(int altura){
    this -> altura = altura;
}
protected:
int largura;
int altura;
};
class retangulo:public formaGeometrica{
public:
virtual area(){
    return(largura*altura);
}
};
class triangulo:public formaGeometrica{
public:
virtual area(){
    return (largura*altura)/2;
}
};
int main(){
class retangulo isa;
class triangulo cao;

isa.setAltura(6);
isa.setLargura(5);

cao.setLargura(6);
cao.setAltura(3);

std::cout << "area do retangulo: " << isa.area() << endl;
std::cout << "area do triangulo: " << cao.area() << endl;





    return 0;
}