#include <iostream>
using namespace std;
class pessoa{
   private:
   string nome;
   int cpf;
   public:
   string getNome(){
    return nome;
   }
   int getCpf(){
    return cpf;
   }
   void setNome(string nome){
   this -> nome = nome;
   }
   void setCpf(int cpf){
    this -> cpf = cpf;
   }
   protected:

};
class professor: public pessoa{
    private:
    float salario;
    public:
    professor(string nome,int cpf,float salario){
        printf("voce e um cidadao completo");
        nome = nome;
        cpf = cpf;
        salario = salario;
    }
    float getSalario(){
        return salario;
    }
    void setSalario(float salario){
        this -> salario = salario;
    }
    void existe(){
        
    }
};
int main(){
class pessoa isa;
isa.setNome("geraldo");
isa.setCpf(19584395732);

cout << "seu nome e: " << isa.getNome() << "\n";
cout << "seu cpf e: "  << isa.getCpf() << "\n";

class professor isa1("ana",29090390,1905.7);
isa1.setNome("ana");
isa1.setCpf(19029320421);
isa1.setSalario(1903.53);

cout << "\nseu nome e: " << isa1.getNome() << endl;
cout << "seu cpf e: "  << isa1.getCpf() << endl;
cout << "seu salario e de R$ " << isa1.getSalario() << endl;





    return 0;
}