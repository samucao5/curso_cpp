#include <iostream>

int main(){
	// para ativar o operador ternário devemos fazer a estrutura desta forma (condição)?instrução para true:Instrução para false
	//ex n1 > 0?std::cout << n1" > 0" : std::cout << n1 "< 0";
	//para retornar uma variavel podemos fazer da seguinte maneira Maior = num1 > num2? num1 : num2;
	int amor, epa, cao{10};
	std::cout << "digite um valor para a variavel " << std::endl << "-> ";
	std::cin >> amor;
	std::cout << std::endl;
	epa = (amor > cao) ? amor : cao;
	std::cout << epa;
	std::cout << std::endl;
	
	(10 > 6) ? std::cout << "10 > 6" : std::cout << "10 < 6";
	
	return 0;
}