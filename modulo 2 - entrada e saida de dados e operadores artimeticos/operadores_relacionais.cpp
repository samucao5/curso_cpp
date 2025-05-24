#include <iostream>

int main(){
	int valor, cao;
	bool amor;
	std::cout << "digite um numero para a primeira variavel " << std::endl << " -> ";
	std::cin >> valor;
	std::cout << std::endl << "digite um numero para a segunda variavel " << std::endl << " -> ";
	std::cin >> cao;
	
	std::cout << std::endl << std::endl << "agora iremos comecar a explicar os operadores relacionais " << std::endl;
	std::cout << "maior ou > " << std::endl << "ele trata se um valor e maior que outro, exemplo: " << std::endl << valor << " > " << cao << std::endl;
	std::cout << "se isso for verdade o valor boleano ira para 1, se for falso ira para 0 " << std::endl;
	
	if(amor = valor > cao){
		std::cout << amor;
	}
	else{
		std::cout << amor;
	}
	std::cout << std::endl << std::endl;
	
	std::cout << "menor ou < " << std::endl << "ele trata se um valor e menor que outro, exemplo: " << std::endl << valor << " < " << cao << std::endl;
	std::cout << "se isso for verdade o valor boleano ira para 1, se for falso ira para 0 " << std::endl;
	
	if(amor = valor < cao){
		std::cout << amor;
	}
	else{
		std::cout << amor;
		
		
	}
	std::cout << std::endl << std::endl;
	
	std::cout << "maior ou >= " << std::endl << "ele trata se um valor e maior ou igual que outro, exemplo: " << std::endl << valor << " >= " << cao << std::endl;
	std::cout << "se isso for verdade o valor boleano ira para 1, se for falso ira para 0 " << std::endl;
	
	if(amor = valor >= cao){
		std::cout << amor;
	}
	else{
		std::cout << amor;
		
		
	}
	
	std::cout << std::endl << std::endl;
	
	std::cout << "maior ou <= " << std::endl << "ele trata se um valor e menor ou igual ao outro, exemplo: " << std::endl << valor << " <= " << cao << std::endl;
	std::cout << "se isso for verdade o valor boleano ira para 1, se for falso ira para 0 " << std::endl;
	
	if(amor = valor <= cao){
		std::cout << amor;
	}
	else{
		std::cout << amor;
		
		
	}
	
	std::cout << std::endl << std::endl;
	
	std::cout << " igual ou == " << std::endl << "ele trata se um valor e igual ao outro, exemplo: " << std::endl << valor << " == " << cao << std::endl;
	std::cout << "se isso for verdade o valor boleano ira para 1, se for falso ira para 0 " << std::endl;
	
	if(amor = valor == cao){
		std::cout << amor;
	}
	else{
		std::cout << amor;
		
		
	}
	
	std::cout << std::endl << std::endl;
	
	std::cout << " diferente ou != " << std::endl << "ele trata se um valor e diferente que o outro, exemplo: " << std::endl << valor << " != " << cao << std::endl;
	std::cout << "se isso for verdade o valor boleano ira para 1, se for falso ira para 0 " << std::endl;
	
	if(amor = valor != cao){
		std::cout << amor;
	}
	else{
		std::cout << amor;
		
		
	}
	
	std::cout << std::endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}