#include <iostream>

int main(){
	int cao = 5;
	double man = 513.73;
	
	std::cout << "tamanho da varivel cao: " << sizeof(cao)<< " bytes" << std::endl;
	
	std::cout << "tamanho da variavel man: " << sizeof(man) << " bytes" <<std::endl;
	
	std::cout << "endereco de memoria da variavel cao: " << &cao << std::endl;
	
	std::cout << "endereco de memoria da variavel man: " << &man << std::endl;
	
	
	return 0;
}