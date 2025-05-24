#include <iostream>

int main(){
	//for(int i = 0; i < 10; i++){instrucao}
	for(int epa = 1;epa <= 100; epa++){
		int rapaz = epa++;
		std::cout << epa << " + " <<  rapaz << " = " << epa+rapaz << std::endl;
		
	}
	
	
	
	
	
	
	
	
	return 0;
}