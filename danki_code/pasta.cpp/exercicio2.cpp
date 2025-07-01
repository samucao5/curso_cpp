#include <iostream>
using namespace std;

class raca{
public:
string cao = "vira-lata";

raca(){
    printf("viralatinha\n ");
}
raca(string isa){
    printf("\n\ncachorro de raca \n");
    cao = isa;
}

};

int main(){
    string porquin;
    cout << "digite uma raca de cachorro: \n";
    cin >> porquin;

class raca isa1;
isa1.cao;
cout << "qual a raca do cachorro: \n" << isa1.cao;

class raca isa2(porquin);
isa2.cao;
cout << "qual a raca do cachorro: \n" << isa2.cao;

    return 0;
}