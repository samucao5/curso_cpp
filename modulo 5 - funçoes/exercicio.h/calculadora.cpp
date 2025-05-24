#include <iostream>
#include <locale.h>// localizar e conectar com o arquivo de cabeçario ou .h
#include <cmath> // para usar a potencia ou comando pow() e a raiz quadrada sqrt();
#include "amor.h"// arquivo de cabeçario sempre colocar entre "" e sem ;

void dom(){
	std::cout << std::endl <<"digite uma das opcoes abaixo: " << std::endl << "+ para somar " << std::endl << "- para subtrair " << std::endl << "* para multiplicar " << std::endl << "/ para divisao " << std::endl;
	std::cout << "r para raiz quadrada " << std::endl << "p para potencia" << std::endl;
	std::cout << "digite um dos caracteres acima " << std::endl << "-> ";
}


int amor(int cao, int mar){
	return (float(cao + mar));
	
}

int sub(int cao, int mar){
	return (float(cao - mar));
}

int multiplica(int cao, int mar){
	return (float(cao * mar));
}

int divisao(int cao, int mar){
	return (float(cao / mar));//cast e voce pegar um retorno e mudar se tipo de dado ex a função começou em int e teve se retorno um float e um cast, para fazermos um cast e necessario (float), (char)
	//obs se possivel sempre tente pegar tipo de dados que recebem mais dados ex float recebe mais dados que o int;
}

int potencia(int cao, int mar){
	return pow (cao, mar);
}

void raiz(int cao, int mar){
	std::cout << sqrt(cao) << std::endl;
	std::cout << sqrt(mar) << std::endl;
}
