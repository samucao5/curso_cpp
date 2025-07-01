#include<iostream>
using namespace std;
class animal{
    private:
    string terreno;
    public:
    string getTerreno(){
        return terreno;
    }
    void setTerreno(string terreno){
        this -> terreno = terreno;
    }
    protected:
    void localTerreno(){
    printf("\n voce possui um terreno\n");
    }
};
class mamifero: public animal{
    private:
    int mesgestacao;
    public:
    mamifero(){
    localTerreno();
    }
    int getMesgestacao(){
        return mesgestacao;
    }
    void setMesgestacao(int mesgestacao){
        this -> mesgestacao = mesgestacao;
    }
    protected:
    void mesGestacao(){
        printf("\nvoce possui mesgestacao\n");
    }
};
class cachorro:public mamifero{
    private:
    string raca;
    public:
    cachorro(){
        mesGestacao();
    }
    cachorro(string racaNova){
        printf("\no cachorro começa a latir\n");
        raca = racaNova;
    }
    string getRaca(){
        return raca;
    }
    void setRaca(string raca){
    this -> raca = raca;
    }
    void latir(){
        cout << "olha o au au" << endl;
    }
};
int main(){
    class animal isa;
    isa.setTerreno("floresta");
    cout << "o terreno sera do tipo: " << isa.getTerreno() << "\n";

    class mamifero isa1;
    isa1.setTerreno("floresta");
    isa1.setMesgestacao(12);
    cout << "o terreno sera do tipo: " << isa1.getTerreno() << "\n";
    cout << "a mesgestacao deste mamifero e de: " << isa1.getMesgestacao() << "\n";

    class cachorro isa2;
    isa2.setTerreno("praca");
    isa2.setMesgestacao(2);
    isa2.setRaca("caramelo");
    cout << "o terreno sera do tipo: " << isa2.getTerreno() << "\n";
    cout << "a mesgestacao do cachorro sera de:" << isa2.getMesgestacao() << "\n";
    cout << "este cachorro e da raca: " << isa2.getRaca() << "\n";
    cout << isa2.latir();
    return 0;
}