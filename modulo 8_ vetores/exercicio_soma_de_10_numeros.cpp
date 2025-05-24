#include <iostream>

int main(){
	int mar[10], soma;
	
	for(int amor = 0;amor <= 9;amor++){
		std::cout << "digite o " << amor << ": " << std::endl;
		std::cin >> mar[amor];
	}
	
		soma = mar[0] + mar[1] + mar[2] + mar[3] + mar[4] + mar[5] + mar[6] + mar[7] + mar[9];
		std::cout << "a soma dos valores escolhidos: " << soma;


	return 0;
}