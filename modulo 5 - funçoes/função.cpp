#include <iostream>

	std::string amor(){
		std::string mar;
		std::cout << "digite seu nome de usuario: " << std::endl << "-> ";
		std::cin >> mar;
		std::cout << mar << " ,que nome bonito" << std::endl;
		return mar;
	}
	
	int soma(int cao,int era){
		
		int soma_tudo = cao + era;
		std::cout << cao << " + " << era << " = " << soma_tudo << std::endl;
		
		
		
		return soma_tudo;
	}
	
	
	int main(){
	amor();
	
	int cao, era;
	std::cout << " me de um valor: " << std::endl << "-> ";
	std::cin >> cao;
	std::cout << " me de um segundo valor: " << std::endl << "-> ";
	std::cin >> era;
	
	
	soma(cao,era);
	
		return 0;
	}