#include <iostream>

int main(){
	int amar;
	bool mar {0};
	
	
	do{
		std::cout << "escolha um jogo:" << std::endl << "1 - street fighter 6 " << std::endl << "2 - kof 15" << std::endl << "3 - roblox" << std::endl;
		std::cout << "escolha o numero do jogo " << std::endl << "-> ";
		std::cin >> amar;
	
	switch(amar){
		case 1:
			std::cout << "street fighter 6 " << std::endl;
			mar = 0;
			break;
			
		case 2:
			std::cout << "kof 15 " << std::endl;
			mar = 0;
			break;
		
		case 3:
			std::cout << "roblox " << std::endl;
			mar = 0;
			break;
			
		default:
			std::cout << "sistema voltando....." << std::endl;
			mar = 1;
	}
}while(mar == 1);
	
		std::cout << "boa jogatina :)" << std::endl;
	
	
	
	
	
	return 0;
}