#include <iostream>
using namespace std;

class isa{
    public:
    float preco;
    string sabor;
    string formato;

    isa(){
printf("cookie criado \n");
formato = "redondo";
    }
};

int main(){
class isa cookie[2];
cookie[0].preco = 15.25;
cookie[0].sabor = "morango";

cookie[1].preco = 17;
cookie[1].sabor = "chocolate";
cookie[1].formato = "quadrado";
 
cout << "\ncookie1: " << cookie[0].sabor;
cout << "\ncusta R$ " << cookie[0].preco;
cout << "\no formato e: " << cookie[0].formato;

cout << "\n\ncookie2: " << cookie[1].sabor;
cout << "\ncusta R$ " << cookie[1].preco;
cout << "\no formato e: " << cookie[1].formato;

}