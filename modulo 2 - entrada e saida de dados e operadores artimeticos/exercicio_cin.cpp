#include <iostream>

int main(){
	float cao, angel, devil, mod;
	std::cout << "digite o primeiro valor: " << std::endl << "-> ";
	std::cin >> cao;
	std::cout << "digite o segundo valor: " << std::endl << "-> ";
	std::cin >> angel;
	std::cout << "digite o terceiro valor: " << std::endl << "-> ";
	std::cin >> devil;
	
	mod = ((cao+angel+devil)/3);
	std::cout << "a conta da media sera desta maneira" << std::endl << "( " << cao << " + " << angel << " + " << devil << " )" << " / " << " 3 " << " = " << mod;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}