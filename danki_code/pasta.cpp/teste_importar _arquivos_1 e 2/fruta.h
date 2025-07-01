#include <iostream>

using namespace std;
class Fruta{
    private:
    string fruta;
    float preco;
    public:
    Fruta(string frutaNova, float precoNovo){
        fruta = frutaNova;
        preco = precoNovo;
    }
    string getfruta(){
        return fruta;
    }
    float getpreco(){
     return preco;
    }
    void setfruta(string frutaNova){
        fruta = frutaNova;
    }
    void setpreco(float precoNovo){
        preco = precoNovo;
    }
};