#include <iostream>

int main(){
	
	int amor {550};
	int * mar;
	int * opa;
	
	mar = &amor;
	
	
	
	std::cout << "endereco da variavel amor: " <<&amor << std::endl;
	std::cout << "endereco do ponteiro 1: " << mar << std::endl;
	
	opa = mar; // para pegar o endereco da variavel pelo ponteiro
	
	std::cout << "endereco do ponteiro 2: " << opa << std::endl;
	
	std::cout << "valor dentro da variavel vista pelo ponteiro 1: " << *mar << std::endl;
	*opa = (*mar + 5);
	
	std::cout << "valor modificado pelo ponteiro 2: " << *opa;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}