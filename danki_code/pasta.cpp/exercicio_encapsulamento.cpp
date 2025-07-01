#include <iostream>
using namespace std;
class loja{
    private:
    string marca;
    float preco;

    public:
    loja(string marcaNova, float precoNovo){
        marca = marcaNova;
        preco = precoNovo;
    }
    string getMarca(){
        return marca;
    }
    float getPreco(){
        return preco;
    }
    void setMarca(string marcaNova){
        marca = marcaNova;
    }
    void setPreco(float precoNovo){
        preco = precoNovo;
    }
};
int main(){
    //primeiro valor
    string cao;
    std::cout << "digite uma marca: \n";
    std::cin >> cao;
    float isa;
    std::cout << "digite um valor: \n\n";
    std::cin >> isa;
    //mudança
    string cao1;
    std::cout << "digite uma outra marca: \n";
    std::cin >> cao1;
    float isa1;
    std:: cout << "digite um outro valor: \n";
    std::cin >> isa1;

class loja loja1(cao,isa);
std::cout << "nome da marca: " << loja1.getMarca() << "\n";
std::cout << "valor da loja: " << loja1.getPreco() << "\n";
loja1.setMarca(cao1);
loja1.setPreco(isa1);
std::cout << "nome da nova marca: " << loja1.getMarca() << "\n";
std::cout << "valor da nova loja: " << loja1.getPreco() << "\n";

return 0;
}


















 













