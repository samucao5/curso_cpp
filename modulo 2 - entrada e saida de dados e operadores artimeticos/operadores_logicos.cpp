#include <iostream>

int main(){
	int amor, mar;
	bool sam;
	
	std::cout << "digite o valor da primeira variavel " << std::endl << "-> ";
	std::cin >> amor;
	
	std::cout << "digite o valor da segunda variavel " << std::endl << "-> ";
	std::cin >> mar;
	
	
	std::cout << "hoje iremos aprender os operadores logicos: " << std::endl << std::endl;
	std::cout << "AND ou && " << std::endl << " o && ele retorna true funciona caso os valores dois valores booleano sejam iguais" << std::endl << "ex: " << std::endl;
	std::cout << "sam = " << amor << " > 3 " << "&& " << mar << " < 10" << std::endl;
	if(sam = amor > 3 && mar < 10){
		std::cout << sam;
	}
	else{
		std::cout << sam;
	}
	std::cout << std::endl << std::endl;
	
	std::cout << "OR ou || " << std::endl << " o || ele retorna true caso qualquer um dos valores booleanos seja igual a true" << std::endl << "ex: " << std::endl;
	std::cout << "sam = " << amor << " > 3 " << "|| " << mar << " < 10" << std::endl;
	if(sam = amor > 3 || mar < 10){
		std::cout << sam;
	}
	else{
		std::cout << sam;
	}
	std::cout << std::endl << std::endl;
	
	std::cout << "not ou ! " << std::endl << " o ! caso alguma condicao iria retornar true, caso voce colocar ele antes da variavel ele muda o sentido " << std::endl << "tipo se a condicao iria retornar true com o not vai retornar false "  << std::endl <<"ex: " << std::endl;
	std::cout << "sam = " << amor << " > 3 " << "&& " << mar << " < 10" << std::endl;
	if(sam = !(amor > 3) && !(mar < 10)){
		std::cout << sam;
	}
	else{
		std::cout << sam;
	}
	std::cout << std::endl << std::endl;
	
	
	
	
	return 0;
}