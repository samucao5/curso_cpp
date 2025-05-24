#include <iostream>

int main(){
	//exemplo abaixo e de um array de 2 dimensao ou 2d
	//    linha coluna
	int cao[2]  [3] =
	{
	{4,3,5},
	{5,5,4},
	};
	
	//   linhas colunas
	//caso queira inicializar com os valores 
	//para colocar um valor em algum
	
	for(int mo = 0;mo < 2; mo++){//linha
		
		for(int amar = 0;amar < 3;amar++){//coluna
			std::cout << cao[mo][amar] << " ";
			
		}
		
	}
	
	//tambem e possivel fazer um vetor de 3 dimensoes ou 3d
	//como na forma abaixo
	int amor [3]  [2]  [5];
	//        x    y    l
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}