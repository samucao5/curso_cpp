#include <iostream>
	void cao(){
		//como cao(), e uma funcao a variavel lop é local a funcao cao(), portanto esta variavel
	//sera armazenada na regiao de memoria destinada a variaveis locais e chamadas de funcões (stack - pilha)
		static int lop {5};//variaveis static sera armazenada no mesmo lugar que as variaveis globais
		std::cout << "variavel cao: " << lop;
		cao++;
	}

	void mar(){
		//como mar(), e uma funcao a variavel epa é local a funcao mar(), portanto esta variavel
	//sera armazenada na regiao de memoria destinada a variaveis locais e chamadas de funcões (stack - pilha)
		int epa {7};
		std::cout << "variavel epa: " << epa;
	}
	
	void amor(){
	//como amor(), e uma funcao a variavel ema é local a funcao amor(), portanto esta variavel
	//sera armazenada na regiao de memoria destinada a variaveis locais e chamadas de funcões (stack - pilha)
		int ema {6};
		std::cout << "variavel ema: " << ema;
	}
	
	void ima(){
	//como ima(), e uma funcao a variavel opa é local a funcao ima(), portanto esta variavel
	//sera armazenada na regiao de memoria destinada a variaveis locais e chamadas de funcões (stack - pilha)
		int opa {3};
		std::cout << "variavel opa: " << opa;
	}
	
	
	//variavel global, sera armazenada na regiao de memoria ram destinadas as variaveis globais e static
	int pig {8};
int main(){
	//como main(), e uma funcao a variavel moon é local a funcao main(, portanto esta variavel
	//sera armazenada na regiao de memoria destnada a variaveis locais e chamadas de funcões (stack - pilha)
	int moon {2};
	std::cout << "variavel main: " <<moon << std::endl;
		cao();
	std::cout << std::endl;
		mar();
	std::cout << std::endl;
		amor();
	std::cout << std::endl;
		ima();
	std::cout << std::endl;
	std::cout <<"variavel global: " << pig;
	
	
	
	
	
	
	
	
	
	
	return 0;
}