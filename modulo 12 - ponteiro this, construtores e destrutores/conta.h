#pragma once //para rodar somente uma vez
#include <iostream>

//este e o arquivo .h e onde existem apenas as declarações dos metodos e atributos da classe.
//aqui não existem as definições, implementações das funçoes, pois isso sera feito no arquivo .cpp.
//e a separação do O QUE (.h) do COMO (.cpp)
class conta{
	//indica que o acesso a este membros abaixo de private:
	//so sera permitido de dentro do codigo da classe
	private:
	std::string  Banco;
	int agencia;
	int NumConta;
	std::string Titular;
	double saldo {0.0};
	//indica que os membros abaixo podem ser acessados pelo objeto da classe conta fora do codigo
	//da classe conta.
	public:
		//construtores sao funçoes de mesmo com parametros diferentes, normalmente do mesmo nome da classe
		conta(std::string Banco, int agencia, int NumConta, std::string Titular, double saldo);
		bool sacar(double valor, double saldo);
		void Depositar(double valor, double saldo);
		double consultar_saldo(double saldo);
		std::string GetBanco(std::string Banco);
		int GetAgencia(int agencia);
		int GetNumConta(int NumConta);
		std::string GetTitular(std::string Titular);
		void SetBanco(std::string Banco);
		void SetAgencia(int agencia);
		void SetNumConta(int NumConta);
};