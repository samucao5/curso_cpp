#include <Iostream>

int main(){
	int cam {75};
	char tempo {'s'};
	
	//para declarar o void ponteiro e necessario void * nome_da_variavel;
	//o void ponteiro e muito util, para caso voce tenha vontade de trabalhar com varios tipos de dados
	void *mar;
	
	*(char*) mar;// cast para trocar o tipo de dado de void para char 
	mar = &tempo;
	std::cout << "valor apontado por mar char: " << *(char* ) mar << std::endl;
	// para declarar um void ponteiro para um tipo de dado e necessario coloca *(tipo_de_dado*) nome_da_variavel; no modo completo void *(tipo_de_dado*) nome_da_variavel;
	
	*(int*)mar;
	mar = &cam;
	std::cout << "valor apontado por mar int: " << *(int* ) mar << std::endl;
	
	
	
	
	
	
	
	
	return 0;
}