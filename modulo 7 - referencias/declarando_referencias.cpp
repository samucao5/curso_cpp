#include <iostream>

int main(){
	int mar {552};
	//para declarar uma variavel tipo_de_dado & nome_da_generico;
	int & mod { mar };// referencias não possuem endereçamento proprio so quando esta associado a uma variavel
	std::cout << "enderecamento da variavel mar: " << &mar << std::endl;
	std::cout << "valor da variavel mar: " << mar << std::endl;
	mod = 890;// para modificar o valor da variavel
	std::cout << "enderecamento atual da referencia: " << &mod << std::endl; // para mostrar a variavel que foi pega da variavel. e so colocar &mod
	std::cout << "valor modificado da variavel " << mod << std::endl;// para mostrar o valor modificado ou o valor da variavel ao qual esta copiando so precisa colocar o nome da referencia
	
	
	return 0;
}