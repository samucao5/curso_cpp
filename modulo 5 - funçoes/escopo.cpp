#include <iostream>



int main(){

	//É possível criar uma variável global em um arquivo e acessá-la de outro arquivo. Para fazer isso, a variável deve ser declarada em ambos os arquivos, mas a palavra-chave extern deve preceder a "segunda" declaração.
	// Se for esta o seu objetivo de criar uma variável global em arquivo e poder acessar ela em outro arquivo use extern
	
	extern int mar;
	
	
	const int ima = 9;// variaveis ao qual não podem mudar 
	int amor = 5; // amor e uma variavel global, pois não esta em nenhum funcao ou comando ao qual apos ser finalizado o valor da variavel some;
	
	
	if(amor < 6){
		int epa = 7;// variaveis locais, so existem enquanto o a funcao estiver sendo executada, quando terminada ele desaparece ate que a funcao seja chamada novamente
		
	}
	else{
		static int amar = 7;// é uma variável que pode manter seu valor de uma chamada de função para outra e existirá até que o programa termine.
	}
	
	
	std::cout << amor << std::endl;
	std::cout << ima << std::endl;
	
	return 0;
}