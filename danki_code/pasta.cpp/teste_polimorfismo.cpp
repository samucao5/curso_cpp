#include <iostream>
using namespace std;
class animal{
    public:
    void emitir(){}
};
class cachorro: public animal{
  public:
  void emitir(){
    cout << "au au" << endl;
  }
};
class gato: public animal{
  public:
  void emitir(){
    cout << "miau miau" << endl;
}
};
int main(){
    class cachorro cachorro1;
    cachorro1.emitir();
    class gato gato1;
    gato1.emitir();
    return 0;
}