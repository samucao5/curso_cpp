#include <iostream>
using namespace std;
class usuario{
    private:
    string nome;
    string email;
    public:
    string getNome(){
        return nome;
    }
    string getEmail(){
        return email;
    }
    void setNome(string nome){
        this -> nome = nome;
    }
    void setEmail(string email){
        this -> email = email;
    }
    protected:

};
class personagem: public usuario{
private:
int nivel;
public:
int getNivel(){
    return nivel;
}
void setNivel(int nivel){
    this -> nivel = nivel;
}
void aumentaUmnivel(){
    cout << "voce aumentou um nivel" << "\n";
}
};
