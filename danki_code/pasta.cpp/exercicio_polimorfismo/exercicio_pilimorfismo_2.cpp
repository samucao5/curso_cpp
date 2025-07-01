#include <iostream>
using namespace std;
class menu{
    protected:
   public:
   void mostrar(){};
};
class menuCliente:public menu{
    public:
    void mostrar(){
    std::cout << "digite entre as opcoes abaixo" << endl;
    std::cout << "1 - fazer login" << endl;
    std::cout << "2 - colocar no carrinho " << endl;
    std::cout << "3 - finalizar compra " << endl;
    std::cout << "4 - redefinir senha " << endl;
    }
};
class menuAdministrador:public menu{
    public:
    void mostrar(){
    std::cout << "digite entre as opcoes abaixo" << endl;
    std::cout << "1 - fazer login" << endl;
    std::cout << "2 - redefinir senha " << endl; 
    std::cout << "3 - cadastrar produto " << endl;
    std::cout << "4 - deletar produto " << endl;
    }
};
int main(){
class menuCliente menu1;
menu1.mostrar();
std::cout << "digite um numero dentre as opcoes acima: ";
int isa;
    std::cin >> isa;
    switch(isa){
        case 1:
        cout << "digite seu email e sua senha: " << endl;
        break;
        case 2:
        cout << "voce coloca suas compras no carrinho: " << endl;
        break;
        case 3:
        cout << "digite o meio de pagamento" << endl;
        break;
        case 4:
        cout << "digite o codigo enviado pelo seu email e mude a senha: ";
        break;
    }
    cout << "\n";
class menuAdministrador menu2;
menu2.mostrar();
std::cout << "digite um numero dentre as opcoes acima: ";
int cao;
    std::cin >> cao;
    switch(cao){
        case 1:
        cout << "digite seu email e sua senha " << endl;
        break;
        case 2:
        cout << "digite o codigo enviado para seu email e mude sua senha " << endl;
        break;
        case 3:
        cout << "o produto foi adicionado com sucesso " << endl;
        break;
        case 4:
        cout << "o produto foi deletado com sucesso ";
        break;
    }



    return 0;
}
