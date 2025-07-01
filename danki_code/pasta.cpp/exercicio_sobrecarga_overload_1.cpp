#include <iostream>
using namespace std;
class calculadora{
    public:
    int calculo1(int isa,int cao, int ana){
        int resultado = isa + cao + ana;
        cout << isa << " + " << cao << " + " << ana << " = " << resultado << endl;
    }
    int calculo2(int isa1, int cao1){
        int resultado = isa1 + cao1;
        cout << isa1 << " + " << cao1 << " = " << resultado << endl;
    }
};
int main(){
    class calculadora pedro;
    pedro.calculo2(7,5);
    pedro.calculo1(5,6,4);

    return 0;
}