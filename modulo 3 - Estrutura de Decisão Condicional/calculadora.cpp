#include <iostream>

int main(){
	int cao, amor, ip;
	char epa;
	
		std::cout << "digite o primeiro valor: " << std::endl << "-> ";
		std::cin >> cao;
		std::cout << std::endl << "digite o segundo valor: " << std::endl << "-> ";
		std::cin >> amor;
		std::cout << std::endl;
		std::cout << "digite + para somar" << std::endl << "digite - para subtrair " << std::endl << "digite * para multiplicar" << std::endl << "digite / para dividir ";
		std::cout << std::endl << "-> ";
		std::cin >> epa;
	
	switch(epa){
		
		case '+':
			ip = cao + amor;
			std::cout << cao << " + " << amor << " = " << ip;
			std::cout << std::endl;
			break;
			
		case '-':
			ip = cao - amor;
			std::cout << cao << " - " << amor << " = " << ip;
			std::cout << std::endl;
			break;
			
			
		case '*':
			ip = cao * amor;
			std::cout << cao << " * " << amor << " = " << ip;
			std::cout << std::endl;
		break;
		
		case '/':
			ip = cao / amor;
			std::cout << cao << " / " << amor << " = " << ip;
			std::cout << std::endl;
		break;
		
		default:
		std::cout << "caractere nao encontrado ";
		break;
		
	}
	
	
	
	
	
	
	
	return 0;
}