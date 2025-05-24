#include <iostream>

int main(){
	
	int ima[5], amor;
	
	for(int cao = 0;cao <= 4;cao++){
		ima[cao];
		std::cout << "digite a nota do aluno: " << std::endl << "-> ";
		std::cin >> ima[cao];
		std::cout << std::endl;
	}
	
	for(int cao = 0;cao <= 4;cao++){
		std::cout << "nota " << cao  << ": "<< ima[cao] << std::endl;
	}
	std::cout << std::endl;
	
	amor = ( ima[0] + ima[1] + ima[2] + ima[3] + ima[4])/5;
	
	if(amor > 6){
		std::cout << amor << " > " << "6" << std::endl;
		std::cout << "aprovado" << std::endl;
		
	}
	else if(amor == 6){
		std::cout << amor << " == " << "6" << std::endl;
		std::cout << "na media" << std::endl;
	}
	else{
		std::cout << amor << " < " << "6" << std::endl;
		std::cout << "reprovado";
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}