#include <iostream>

int main(){
	//para declarar um ponteiro e o tipo_de_dado * <NomePonteiro>;
	int * cao { nullptr };
	int mar {101};
	std::cout << "Endereco de numero: " << &mar << std::endl;// endereço de memoria da variavel de mar
	std::cout << "Endereco de ptr: " << &cao << std::endl;// endereço de memoria do ponteiro cao
	
	std::cout << "valor da variavel: " << mar << std::endl;//valor armazenado dentro da variavel mar
	cao = &mar; //para acessar a variavel devemos pegar o endereço da mesma e passar para o ponteiro para que ele possa acessar
	* cao = 105; //para modificarmos a variavel pelo ponteiro precisamos colocar ou tipo_de_da * nome_do_ponteiro = valor_desejado ou somente caso o ponteiro ja tenha sido declarado * nome_do_ponteiro = valor_desejado
	std::cout << "endereco do ponteiro: " << cao << std::endl;//endereço copiado da variavel mar
	
	std::cout << "novo valor da variavel mar: " << mar << std::endl; // valor modificado pelo ponteiro
	
	std::cout << "valor da variavel lido pelo ponteiro: " << *cao << std::endl;	
	
	
	
	
	
	
	return 0;
}