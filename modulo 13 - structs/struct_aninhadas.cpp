#include <iostream>

	struct Data
	{
	
		int dia;
		int mes;
		int ano;
	
	};

	struct Endereco{
	
		std::string rua;
		std::string cidade;
		std::string estado;
		std::string pais;
	};

	struct Pessoa{
		std::string Nome;
		
		Data DtNascimento;
		Endereco endereco;
	};




	void leitor(Pessoa pessoa){
		std::cout << pessoa.Nome << std::endl;
		std::cout << pessoa.DtNascimento.dia << std::endl;
		std::cout << pessoa.DtNascimento.mes << std::endl;
		std::cout << pessoa.DtNascimento.ano << std::endl;
		std::cout << pessoa.endereco.rua << std::endl;
		std::cout << pessoa.endereco.cidade << std::endl;
		std::cout << pessoa.endereco.estado << std::endl;
		std::cout << pessoa.endereco.pais << std::endl;
	}

	int main(){
		Pessoa pessoa1;
		std::cout << "nome: ";
		std::cin >> pessoa1.Nome ;
		std::cout << std::endl;
		std::cout << "qual o dia do seu nascimento: ";
		std::cin >> pessoa1.DtNascimento.dia;
		std::cout << std::endl;
		std::cout << "qual o mes do seu nascimento: ";
		std::cin >> pessoa1.DtNascimento.mes;
		std::cout << std::endl;
		std::cout << "qual o ano do seu nascimento: ";
		std::cin >> pessoa1.DtNascimento.ano;
		std::cout << std::endl;
		std::cout << "qual sua rua: ";
		std::cin >> pessoa1.endereco.rua;
		std::cout << std::endl;
		std::cout << "qual sua cidade:  ";
		std::cin >> pessoa1.endereco.cidade;
		std::cout << std::endl;
		std::cout << "qual seu estado: ";
		std::cin >> pessoa1.endereco.estado;
		std::cout << std::endl;
		std::cout << "qual seu pais: ";
		std::cin >> pessoa1.endereco.pais;
		std::cout << std::endl;
		leitor(pessoa1);
	
	
	
	
	
		return 0;
	}