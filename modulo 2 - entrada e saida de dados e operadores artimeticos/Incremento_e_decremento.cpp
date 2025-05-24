#include <iostream>

int main(){
	int Num1{ 10 }, Num2{20}, resultado;
	//Num1 = Num2++;
	//Num2 ++ é o mesmo que Num2 = Num2 + 1
	/*NO entanto se ++ vier depois da variavel devemos ler da seguinte forma
	Num2++ pegue logo o valor da variavel Num2 e somente depois da instrução incremente em 1
	o valor de Num2
	Logo Num1 = Num2++ e equivalente as seguntes instruções:
	Num1 = Num2;
	Num2 = Num2 + 1;
	chamamos isso de pós-fixado
	Assim se o ++ ou -- estiver após a variavel
	ela somente será incrementada após a execução da instrução
	*/
	
	//Num2 = ++Num1;
	//Agora temos outra situação.  O operador ++ está Pré-fixado
	/*Assim a instrução seria equivalente a:
	Num1= Num1 + 1;
	Num2 = Num1;
	Ou seja se o operador estiver pré-fixado primeiro a variavel sera incrementada de 1 para depois ser atribuida 
	a outra variavel
	*/
	std::cout << "valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << std::endl;
	Num1 = Num2++;
	
	std::cout << "valor depois de Num1: " << Num1 << " e " << "Num2: " << Num2 << std::endl;
	
	Num2 = ++Num1;
	std::cout << "valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << std::endl;
	
	Num1 = 10; 
	Num2 = 20;
	std::cout << std::endl;
	std::cout << "valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << std::endl;
	Num1 = Num2--;
	
	std::cout << "valor depois de Num1: " << Num1 << " e " << "Num2: " << Num2 << std::endl;
	
	Num2 = --Num1;
	std::cout << "valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << std::endl;
	
	return 0;
}