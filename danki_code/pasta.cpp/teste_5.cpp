#include <iostream>
#include <new>
using namespace std;
int main(){
 int isaLinha, isaColuna;
 cout << "digite o numero de linhas: ";
 cin >> isaLinha;
 cout << "digite o numero de colunas: ";
 cin >> isaColuna;
 int**matriz = new int*[isaLinha];
 for(int i = 0;i < isaLinha;i++){
    matriz[i] = new int[isaColuna];
 }
for(int i = 0; i < isaLinha;i++){
 for(int j = 0; j < isaColuna; j++){
  matriz[i][j] = i + j;
 }
}
for(int i = 0; i < isaLinha; i++){
    for(int j = 0; j < isaColuna; j++){
     cout << matriz[i][j];




    }
    cout << "\n";
}











    return 0;
}