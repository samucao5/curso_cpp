#include <iostream>
using namespace std;
class idioma{
    public:
void saudar(){}
};
class ingles: public idioma{
    public:
    void saudar(){
    cout << " saudar " << " para ingles " << " greet " << endl;
    }
};
class espanhol: public idioma{
    public:
    void saudar(){
    cout << " saudar " << " para espanhol " << " saludar " << endl;
    }
};
class frances:public idioma{
    public:
    void saudar(){
        cout << " saudar " << " para frances " << " saluer " << endl;
    }
};
int main(){
    class ingles idioma1;
    idioma1.saudar();
    class espanhol idioma2;
    idioma2.saudar();
    class frances idioma3;
    idioma3.saudar();







    return 0;
}