#include <iostream>
#include <iomanip>
// voce deve usar o comando <iomanip>, caso voce queira deixar o double ou float, mais preciso
int main(){
	int cao = 5;
	float amor = 4.33;
	bool epa = true;
	char rapaz = 's';
	std::string ema = "amor";
	double campo = 6.66666666666666666666666666666666;
	short ira = 65;
	
	std::cout << "int : valores inteiros com ao qual nao possuem valores fracionados" << std::endl << "ex: ";
	std::cout << cao << std::endl;
	
	std::cout << "float : valores tanto inteiros como fracionados " << std::endl << "ex: ";
	std::cout << amor << std::endl;
	
	std::cout << "bool : valores ao qual representa 1 para true e 0 para false" << std::endl << "ex: ";
	std::cout << epa << std::endl;
	
	std::cout << "char : somente um caractere do teclado " << std::endl << "ex: ";
	std::cout << rapaz << std::endl;
	
	std::cout << "std::string : conjunto de caracteres do teclado " << std::endl << "ex: ";
	std::cout << ema << std::endl;
	
	std::cout << "double : valores armazena numeros com fracionados com precisao dupla " << std::endl << "ex: ";
	std::cout << campo << std::endl;
	
	std::cout << "short : valores pequenos pode ser tanto inteiro ou float depende do que voce ira querer " << std::endl << "ex: ";
	std::cout << ira << std::endl;
	
	//caso voce queria um int com sinal sempre positivo coloque unsigned int nome_da_variavel
	unsigned int capa = 1;
	
	std::cout << capa << std::endl;
	
	//exemplo de como deixar o double mais preciso
	std::cout << "double com mais precisao: ";
	std::cout << std::setprecision(12) << campo << std::endl;
	
	//devemos colocar std::cout << std::setprecision(valor_ao_qual_voce_deseja) << nome_da_variavel;
	
	//para colocamos um endereço de um char devemos fazer desta maneira
	std::cout << "endereco carregado na memoria de rapaz: " << (void *)&rapaz << std::endl;
	

	
	
	
	return 0;
}