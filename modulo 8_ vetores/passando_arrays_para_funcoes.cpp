#include <iostream>
//prototipo da funcao
void moda(int amor[7]);





int main(){
	int amor[7] = {2,3,1,4,6,7};//vetor utilizado
	moda(amor);
	
}
//agr so colocar como entrada na funcao
void moda(int amor[7]){
	
	for(int ima = 0;ima < 7;ima++){
		std::cout << amor[ima] << std::endl;
	}
		
	
}