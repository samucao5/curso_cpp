#include <iostream>

int main(){
	int amor = 5;
		std::cout << "....................." << std::endl;
		std::cout << "amor = "  << amor << std::endl;
		std::cout << "endereco de memoria da variavel amor: " << &amor;
		std::cout << "mudança da variavel: " << std::endl;
		amor = amor + 10;
		std::cout << "valor da variavel amor apos a soma por 10: " << amor << std::endl;
	// o & serve para mostrar qual e o codigo do endereço na memoria ram
	// deve ser colocado desta maneira &nome_da_variavel 
	
		std::cout << "tamanho da variavel amor : " << sizeof(amor) << std::endl;
	//para pegar o tamanho da variavel devemos colocar o comando sizeof()
	// desta maneira sizeof(nome_da_variavel);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}