#include <iostream>


int main(){
	//voce pode usar o () para iniciar variaveis com valores literais
	//{} é inicializacao uniforme, permite iniciar tanto valores literais(int, float, caractere, quanto valores escalares, vetores, enums etc.
	int amor {5};
	float mar {7.77};
	char epa {'s'};
	std::string garota {"ela"};
	
	// %d para valores inteiros, %f para float, %c para caractere e %s para string
	std::printf("o valor de amor: %d \n", amor);
	
	std::printf("o valor de mar: %f \n", mar);
	
	std::printf("o caractere de mar: %c \n", epa);
	
	std::printf("a palavra escolhida para garota: %s \n", garota.c_str());
	
	std::printf("podemos colocar varias variaveis numa so frase tipo ex: \n");
	
	std::printf("hoje eu comi umas %d tortas, ao qual o preco era de R$ %0.2f, todas elas tinham uma marca que era a letra %c, conheci uma garota que se chamava %s \n ", amor, mar , epa , garota.c_str() );
	
	// para aparecer uma palavra no std::printf(" %s ", nome_da_variavel.c_str());, e necessario colocar uma funcao apos a variavel.c_str()
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}