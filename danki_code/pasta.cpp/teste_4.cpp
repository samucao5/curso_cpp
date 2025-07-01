#include <new>
#include <iostream>
using namespace std;
int main(){
int tamanho;
cout << "digite um tamanho: ";
cin >> tamanho;
int* vetor = new int[tamanho];
vetor[0] = 5;
vetor[1] = 10;

cout << "vetor: " << vetor[0] << "," << vetor[1];
return 0;
}