#include <locale.h>
#include <iostream>
#include "amor.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char pig;
	int cao, mar, epa;
	std::cout << "digite um valor " << std::endl << "-> ";
	std::cin >> cao;
	
	std::cout << "digite o segundo valor " << std::endl << "-> ";
	std::cin >> mar;
	
	dom();
	std::cin >> pig;
	
	switch(pig){
		case '+':
			std::cout << "o resultado e: "  <<amor(cao, mar);
			break;
		
		case '-':
			std::cout << "o resultado e: " << sub(cao, mar);
			break;
			
		case '*':
			std::cout << "o resultado e: " << multiplica(cao, mar);
			break;
			
		case '/':
			std::cout << "o resultado e: "  << divisao(cao, mar);
			break;
			
		case 'r':
			std::cout << "o resultado e: "	<< raiz(cao, mar);
			break;
			
		case 'p':
			std::cout << "o resultado e: " << potencia(cao, mar);
			break;
			
		default:
			std::cout << "valor digitado errado";
			break;
	}
	
	
	
	
	
	
	
	return 0;
}