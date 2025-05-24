#include <iostream>



//criando um alisas(apelido) para int chamado inteiro
//desta forma quando o codigo for compilado o pre-processador vai substituir todas as ocorrencias de inteiro por int e depois 
//de finalizar tudo isso o pre-processador entrega o codigo ao compilador
// um apelido para algo, resumidamente
typedef int inteiro;
//idem criar um alias para char de nome caractere, assim voce podera declarar uma variavel do tipo char utilizando o nome caractere
typedef char caractere;
//o mesmo para float que agora tem um apelido real. Importante destacar que voce ainda podera utilizar os tipos padroes do c++.
//isso não e uma substituição
typedef float real;

int main(){
	inteiro numero {12};
	caractere letra {'s'};
	real amor {4.2};
	std::cout << numero << std::endl;
	std::cout << letra << std::endl;
	std::cout << amor << std::endl;
	
	
	
	
	
	
	
	return 0;
}