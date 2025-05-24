#include <iostream>

bool epa(int cao);



int main(){
	int cao;
	std::cout << "digite um numero " << std::endl << "-> ";
	std::cin >> cao;
	
	if(epa(cao) == true){
		std::cout << "e par";
	}
	else{
		std::cout << "e impar";
	}
	
	
	return 0;
}

bool epa(int cao){
	if(cao % 2 == 0){
		return true;
	}
	else{
		return false;
	}
	
}

