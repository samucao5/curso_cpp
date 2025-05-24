#include <iostream>

	class Pessoa{
		public:
		//como agora os atributos sao privados, voce precisa criar metodos publicos que poderao ser usado para obter(get)
		//ou alterar(set) estes atributos.
		std::string get_nome();
		int get_cpf();
		int get_Matricula();
		void set_nome();
		void set_cpf(int cpf);
		void set_Matricula(int matricula);
		
		void acessar_sistema(){
			std::cout << "digite seu nome: " << std::endl;
			std::cin >> nome;
			std::cout << std::endl << "digite seu cpf: " << std::endl;
			std::cin >> cpf;
			std::cout << "digite sua matricula: " << std::endl;
			std::cin >> matricula;
			std::cout << std::endl;
		
		}
		private:
			std::string nome;
			long int cpf;
			long int matricula;
	};

	void Pessoa::set_nome(){
		std::cout << "digite seu nome: " << std::endl;
		std::cin >> nome;
		nome = nome;
	}
	
	void Pessoa::set_cpf(int cpf){
		std::cout << "digite seu cpf: " << std::endl;
		std::cin >> cpf;
		cpf = cpf;
	}
	
	void set_Matricula(int matricula){
		std::cout << "digite sua matricula: " << std::endl;
		std::cin >> matricula;
		matricula = matricula;
	}






	class professor : public Pessoa{
		public:
		std::string departamento;
		void efetuar_chamada();
		void entregar_pauta();
	
	};










	class aluno : public Pessoa {
		public:
		std::string curso;
		void realizar_prova();
	};

	class bibliotecario : public Pessoa{
		public:
			void cadastrar_livro();
	};



int main(){
	professor wallace;
	wallace.set_nome();
	
	return 0;
}