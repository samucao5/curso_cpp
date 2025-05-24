#include <iostream>

int main(){
	//caso queira adicionar um dado voce deve colocar std::cin >>, o motivo de >>, e porque o comando esta adicionando algo ha variavel
	//ex: std::cin >> amor
	std::string amar;
	
	std::cout << "escreva ser primeiro nome: " << std::endl << "-> ";
	std::cin >> amar;
	
	std::cout << "ola " << amar;
	
	
	
	
	
	return 0;
}