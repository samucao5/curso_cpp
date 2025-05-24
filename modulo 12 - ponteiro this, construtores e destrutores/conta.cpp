#include <iostream>
#include "conta.h"//precisamos incluir o arquivo .h relativo a classe conta para que este arquivo
//conta.cpp possa "enxergar" as declarações da classe conta.
	double consultar_saldo(double saldo);
	bool sacar(double valor, double saldo){
	//se o valor do saldo no objeto for menor que o valor a ser sacado, ele não podera sacar
		if(saldo < valor){
			std::cout << std::endl << "saldo insuficiente! " << std::endl;
			std::cout << "seu saldo atual: R$ " << consultar_saldo(saldo) << std::endl;
				return false;
	}
	//senão ele podera sacar
	//temos que diminuir o saldo
		saldo = saldo - valor;
		std::cout << "seu saldo atual: R$ " << consultar_saldo(saldo);
			return true;
}

	void Depositar(double valor, double saldo){
		saldo += valor; // o mesmo que saldo = saldo + valor;
			std::cout << std::endl << "deposito de R$ " << valor << "efetuado com sucesso! " << std::endl;
}
//a funcao recebe como argumento para seus parametros um objeto do tipo casa e um valor double

	double consultar_saldo(double saldo){
		return saldo;
}

	std::string GetBanco(std::string Banco){
		return Banco;
}

	int GetAgencia(int agencia){
		return agencia;
}

	int GetNumConta(int NumConta){
		return NumConta;
}

	void conta::SetBanco(std::string Banco){
	//como o compilador vai saber se banco e variavel local ou o atributo da classe conta?
	//se this e um ´ponteiro para chegar no apontado pelo ponteiro temos
	//*this, mas como this e um ponteiro para um objeto ele precisa usar a notação ponto. para 
	//acessar atributos e executar funções do objeto
	//agora o compilador sabe que banco e a variavel local que recebeu o argumento string
	//e que deve ser colocada no atributo banco do objeto apontado por this
	//(*this).banco = banco;
	//contudo no geral usa-se a notação flecha
		this -> Banco = Banco;
}
	conta::conta(std::string Banco, int agencia, int NumConta, std::string Titular, double saldo){
		this -> Banco = Banco;
		this -> agencia = agencia;
		this -> NumConta = NumConta;
		this -> Titular = Titular;
		this -> saldo = saldo;
		
	}