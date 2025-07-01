#include <iostream>
using namespace std;
class cookie{
public:
string sabor;
float preco;
string formato;
};
int main(){
    class cookie cookie[3];
    cookie[0].sabor = "chocolate";
    cookie[0].preco = 14;
    cookie[0].formato = "arvore";

    cookie[1].sabor = "flocos";
    cookie[1].preco = 15.25;
    cookie[1].formato = "veado";

    cookie[2].sabor = "morango";
    cookie[2].preco = 14.20;
    cookie[2].formato = "coracao";

    cout << "cookie1: " << cookie[0].sabor ;
    cout << "\nele custa R$ " << cookie[0].preco;
    cout << "\no formato dele e: " << cookie[0].formato;
    
    cout << "\ncookie2: " << cookie[1].sabor;
    cout << "\nele custa R$ " << cookie[1].preco;
    cout << "\no formato dele e:" << cookie[1].formato;
    
    cout << "\ncookie2: " << cookie[2].sabor;
    cout << "\nele custa R$ " << cookie[2].preco;
    cout << "\no formato dele e: " << cookie[2].formato;
    
    return 0;
}