#include <iostream>
#include <array>


	void amor(int mar[]);
	
	void alterar(int *amar);

	void ima(int *amar);



	int main(){
		int mar [] { 1,2,3,4,5,6,7,8,9,10};
		
		amor(mar);
		std::cout << std::endl;
		ima (amar);
		
	
	
	
	
	
	
	
	return 0;
}

	void amor(int mar[]){
		for(int s = 0;s < 11; s++){
			
			std::cout << mar[s] << " - ";
			
		}
	}
	
	void alterar(int *amar){
		for(int c = 0; c < 11; c++){
		    amar[c] = amar[c] * 2; 
			//amar[c] e o mesmo que *(ptr_array + i)
			
		}
	}
	//então int mar[] indica que isso na verdade e um ponteiro
	//podemos inclusive por um ponteiro
	void ima(int *amar){
		for(int s = 0;s < 11; s++){
			
			std::cout << amar[s] << " - ";
			
		}
	}
	//o nome de um vetor em c e c++ e o mesmo que &nome_do_vetor[0]
	//ou seja,ao escrever o nome de um vetor sem os colchetes
	//na realidade é o mesmo que o endereço de memoria do primeiro elemento do vetor ou um valor do array
	
	
	
	
	