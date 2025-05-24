#include <iostream>

int main(){
	int mar[] {1,23,63,900,253};
	int * amor;
	amor = mar;
	amor++;//este ++ e o deslocamento do ponteiro dentro da vetor
	std::cout << *amor << std::endl;
	std::cout << *(amor + 2) << std::endl;//exemplo de como avançar mais variaveis
	amor--;// caso queira retroceder a variavel 
	std::cout << *amor;
	
	std::cout << std::endl << "[ ";
	for ( int s = 0; s < 5; s++ ){
		std::cout << *(amor + s) << " - ";// tambem pode ser feito, std::cout << amor[s]; faz a mesma coisa.
	}
	std::cout << " ]";
	
	//tambem podemos fazer desta maneira abaixo
	
	std::cout << std::endl << "[ ";
	for ( int p = 0; p < 5; p++){
		std::cout << amor[p] << " - ";
	}
	std::cout << " ]" ;
	
	
	std::cout << std::endl << "[ ";
	//outra forma de fazer a leitura dos vetores pelo ponteiro
	for( int v = 0; v < 5;v++ ){
		std::cout << *amor << " - ";
		amor++;
	}
	
	std::cout << " ]";
	return 0;
}