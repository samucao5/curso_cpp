#include <iostream>


int nad ( int cao, int mar );

int epa ( int cao, int mar );

int rap ( int cao, int mar );

int moh ( int cao, int mar );




int main(){
	int cao, mar, morada, pig;
		std::cout << "digite um valor " << std::endl << "-> ";
		std::cin >> cao;
		std::cout << "digite um segundo valor " << std::endl << "-> ";
		std::cin >> mar;
	
		std::cout << "escolha uma das opcoes abaixo" << std::endl << "1 - para soma" << std::endl << "2 - substracao" << std::endl << "3 - multiplicacao" << std::endl << "4 - divisao" << std::endl << "-> ";
		std::cin >> morada;
	
	switch(morada){
		case 1:
			pig =  nad( cao, mar );
			std::cout << cao << " + " << mar << " = " << pig;
			break;
		
		case 2:
			pig = epa( cao,  mar);
			std::cout << cao << " - " << mar << " = " << pig;
			break;
			
		case 3:
			pig = rap( cao, mar );
			std::cout << cao << " * " << mar << " = " << pig;
			break;
		
		case 4:
			pig = moh( cao, mar );
			std::cout << cao << " / " << mar << " = " << pig;
			break;
		
		default:
			std::cout << "valor digitado errado";
			break;
		
		
	}
	
	
	return 0;
}





int nad(int cao, int mar){
	return (cao + mar);
	
}

int epa(int cao, int mar){
	return (cao - mar);
}

int rap(int cao, int mar){
	return (cao * mar);
}
int moh(int cao, int mar){
	return (cao / mar);
}
