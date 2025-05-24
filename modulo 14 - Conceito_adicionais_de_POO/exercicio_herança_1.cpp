#include <iostream>

	class Pessoa{
		public:
		std::string nome;
		long int cpf;
		long int matricula;
		void acessar_sistema(){
			std::cout << "digite seu nome: " << std::endl;
			std::cin >> nome;
			std::cout << std::endl << "digite seu cpf: " << std::endl;
			std::cin >> cpf;
			std::cout << "digite sua matricula: " << std::endl;
			std::cin >> matricula;
			std::cout << std::endl;
		
		}
	};

	class professor : public Pessoa{
		public:
		std::string departamento;
		void efetuar_chamada(){
			std::cout << nome << "presente" << std::endl;
		}
		void entregar_pauta(){
			std::cout << "nome do aluno: " << nome << std::endl;
			std::cout << "matricula: " << matricula << std::endl;
		}
	
	};

	class aluno : public Pessoa {
		public:
		std::string curso;
		void realizar_prova(){
			std::cout << "o aluno " << nome << " esta fazendo a prova" << std::endl;
		}
	};

	class bibliotecario : public Pessoa{
		public:
			void cadastrar_livro();
	};



int main(){
	professor wallace;
	wallace.nome = "marcos";
	wallace.acessar_sistema();
	
	return 0;
}