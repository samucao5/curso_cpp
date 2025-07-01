#include <iostream>
using namespace std;
//classe pai.h
class pai{
    private:
    string marca;
    public:
    string getMarca(){
        return marca;
    }
    void setMarca(string marca){
        this -> marca = marca;
    }
    protected:
    void souEletronico(){
        printf("\nsou eletronico\n");
    }
};
class Cao:public pai{
    private:
    int tela;
    public:
    Cao(){
        souEletronico();
    }
    int getTela(){
        return tela;
    }
    void setTela(int tela){
        this -> tela = tela;
    }
};