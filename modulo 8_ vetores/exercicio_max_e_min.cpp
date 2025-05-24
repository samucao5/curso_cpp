#include <iostream>

int main(){
	int epa, opa = 1;
	int min, max;
	std::cout << "digite o numero de variaveis que tera o array entre 1 - 20: " << std::endl << "-> ";
	std::cin >> epa;
	
	int valor[20];
	
	for(int amor = 0;amor < epa;amor++){
		std::cout << "digite um valor " << opa << " : " << std::endl << "-> ";
		std::cin >> valor[epa];
		std::cout << std::endl;
		opa++;
		
	}
	
	min = valor[0];
	max = valor[0];
	
	for(int s = 0;s < epa;s++ ){
		if(valor[s] > max){
			max = valor[s];
		}
		else if(valor[s] < min){
			min = valor[s];
		}
	}
	
	std::cout << "o menor valor digitado foi: " << min << std::endl;
	
	std::cout << "o maior valor digitado foi: " << max << std::endl;
	
	
	
	return 0;
}