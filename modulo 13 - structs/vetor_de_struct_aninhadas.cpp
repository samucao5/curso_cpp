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
		bool epa = true;
		Pessoa pessoa[5];
		
		for(int cao = 0; cao < 5 && epa == true;cao++){
			static int moon;
			
		std::cout << "nome: ";
		std::cin >> pessoa[cao].Nome ;
		std::cout << std::endl;
		std::cout << "qual o dia do seu nascimento: ";
		std::cin >> pessoa[cao].DtNascimento.dia;
		std::cout << std::endl;
		std::cout << "qual o mes do seu nascimento: ";
		std::cin >> pessoa[cao].DtNascimento.mes;
		std::cout << std::endl;
		std::cout << "qual o ano do seu nascimento: ";
		std::cin >> pessoa[cao].DtNascimento.ano;
		std::cout << std::endl;
		std::cout << "qual sua rua: ";
		std::cin >> pessoa[cao].endereco.rua;
		std::cout << std::endl;
		std::cout << "qual sua cidade:  ";
		std::cin >> pessoa[cao].endereco.cidade;
		std::cout << std::endl;
		std::cout << "qual seu estado: ";
		std::cin >> pessoa[cao].endereco.estado;
		std::cout << std::endl;
		std::cout << "qual seu pais: ";
		std::cin >> pessoa[cao].endereco.pais;
		std::cout << std::endl;
		std::cout << "deseja adicionar mais alguem, 1 para sim ou 2 para nao " << std::endl << "-> ";
		std::cin >> moon;
		
		if(moon == 1){
			std::cout << "pessoa " << cao << std::endl;
		}
		else{
			epa = false;
		}
	}
	
	for(int oma = 0; oma < 5; oma++){
		int moon;
		leitor(pessoa[oma]);
		
		std::cout << "deseja adicionar mais alguem, 1 para sim ou 2 para nao " << std::endl << "-> ";
		std::cin >> moon;
		
		if(moon == 1){
			std::cout << "pessoa " << oma << std::endl;
		}
		else{
			epa = false;
		}
	}
	
	
	
	
		return 0;
	}