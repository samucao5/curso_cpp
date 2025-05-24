#include <iostream>
//na construção do #define sera #define nome_da_variavel valor
#define samuel 5
//#define diferente do const, o #define não possui endereção de memoria então não pode ser acessado
//por ponteiros
int main(){
	//a estrutura da construção do const e const [tipo] [nome] = [valor];
	const float pi = 3.14;
	std::cout << "valores de constante não podem ser modificado" << std::endl << "ex: ";
	std::cout << pi << std::endl;
	std::cout << "endereco de const pi: " << &pi << std::endl;
	std::cout << "#define samuel :  " << samuel;
	
	
	
	return 0;
}