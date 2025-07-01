#include <iostream>
using namespace std;
class isa{
    private:
    string sabor;

    public:
    isa(string sabor){
setSabor(sabor);
    }
string getSabor(){
    return sabor;
}
void setSabor(string sabor){
this -> sabor = sabor;
}

};
int main(){
    class isa s("queijo");
cout << "sabor do salgadinho: \n" << s.getSabor();
s.setSabor("churrasco");
cout << "\nsabor do salgadinho: \n" << s.getSabor();
s.setSabor("cebola");
cout << "\nsabor do salgadinho: \n" << s.getSabor();
return 0;
}