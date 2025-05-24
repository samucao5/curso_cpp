#include <iostream>
//prototipo da função tipo_de_dado(entrada_de_dados);
int cao(int epa);




int main(){
	int epa;
	epa = cao(epa);
	std::cout << "valor: " << std::endl << epa;
	
	return 0;
}


int cao(int epa){
	std::cout << "digite um valor: " << std::endl << "-> ";
	std::cin >> epa;
	
	return epa;
}