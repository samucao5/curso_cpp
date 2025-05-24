#include <iostream>

int main(){
int Numero {234};
int * Ponteiro;
int *Outroptr;


Ponteiro = &Numero;
* Ponteiro = 1456;

std::cout << * Ponteiro << std::endl;

std::cout << "endereco de memoria da variavel: " << &Numero << std::endl;
std::cout << "endereco de memoria copiado pelo ponteiro: "  << &Ponteiro << std::endl;

Outroptr = Ponteiro;
*Outroptr = (*Ponteiro + 200);
std::cout << *Outroptr;

	return 0;
}