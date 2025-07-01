#include <iostream>
using namespace std;
#include <ios>
#include <limits>

int main(){
    char isa[80];
    cout << "digite uma frase: ";
    cin.sync();
    cin.getline(isa,80);
    cout << "\n nova frase: " << isa << "\n";
    char cao[80];
    cout << "digite uma segunda frase: ";
    cin.sync();
    cin.getline(cao,80);
    cout << "\n nova frase: " << cao << "\n";
    return 0;
}