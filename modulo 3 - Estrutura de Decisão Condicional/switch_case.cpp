#include <iostream>
int main(){
	int cao;
	std::cout << "escolha um numero entre 1 e 5" << std::endl << "-> ";
	std::cin >> cao;
	
	switch(cao)
	{
		case 1:
			std::cout << std::endl;
			std::cout << "o numero escolhido foi " << cao;
			break;
		case 2:
			std::cout << std::endl;
			std::cout << "o numero escolhido foi " << cao;
			break;
		case 3:
			std::cout << std::endl;
			std::cout << "o numero escolhido foi " << cao;
			break;
		case 4:
			std::cout << std::endl;
			std::cout << "o numero escolhido foi " << cao;
			break;
		case 5:
			std::cout << std::endl;
			std::cout << "o numero escolhido foi " << cao;
			break;
		default:
			std::cout << std::endl;
			std::cout << "nenhum dos numeros acima foi escolhido";
			break;
	}
	
	
	
	
	
	
	return 0;
}