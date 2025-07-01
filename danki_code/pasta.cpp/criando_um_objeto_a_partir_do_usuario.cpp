#include <iostream>
#include <ios>
#include <limits>
using namespace std;

class isa{
public:
float preco;
string sabor;
};

int main(){
 class isa cookie1;
 cout << "digite o preco do cookie: ";
 cin >> cookie1.preco;

 cout << "digite o sabor que voce deseja: ";
 cin.sync();
 getline(cin, cookie1.sabor);

 cout << "\ncookie1: " << cookie1.sabor;
 cout << "\ncusta R$ " << cookie1.preco;













    return 0;
}