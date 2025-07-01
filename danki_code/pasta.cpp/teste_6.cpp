#include <iostream>
using namespace std;

class pessoa{
public:
int idade;
float salario;
string nome;
};
int main(){
class pessoa pessoa[2];
pessoa[0].idade = 15;
pessoa[0].nome = "Jonh";
pessoa[0].salario = 500.50;

pessoa[1].idade = 18;
pessoa[1].nome = "Isa";
pessoa[1].salario = 500.80;

cout << pessoa[0].nome << " tem " << pessoa[0].idade << " anos " << "ele recebe R$ " << pessoa[0].salario << "\n";
cout << pessoa[1].nome << " tem " << pessoa[1].idade << " anos " << "ela recebe R$ " << pessoa[1].salario << "\n";

return 0;
}