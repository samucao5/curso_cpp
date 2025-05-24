#include <iostream>

//para criar um struct e desta forma:
//stuct Nome_da_struct{
//tipo Nome_do_membro_1;
//tipo Nome_do_membro_2;
//tipo Nome_do_membro_3;
//...
//}Nome_objeto_1,Nome_objeto_2,....;
//caso queira colocar o nome do objeto e possivel tbm
//Nome_da_stuct obejeto1, objeto2,...;
//obs caso voce não separe os dados do struct eles estarao por padrao no publico
//obs caso voce não separe os dados da classe eles estarao por padrao no privado

struct amor{
	int idade;
	std::string nome;
	float altura;
	
	//uma forma de ultilizar o construtor:
	//amor() : nome("samuel"), idade (19), altura (1.56){};
	//ao qual desta maneira não ha necessidade de ultilizar o this
};

int main(){
	//caso queira iniciar as variaveis de outra maneira.
	//amor epa = {19,"samuel",1.56};
	amor epa;
	std::cout << "digite o nome da pessoa: " << std::endl << "-> ";
	std::cin >> epa.nome;
	std::cout << std::endl;
	std::cout << "digite a idade da pessoa: " << std::endl << "-> ";
	std::cin >> epa.idade;
	std::cout << std::endl;
	std::cout << "digite a altura da pessoa: " << std::endl << "-> ";
	std::cin >> epa.altura;
	std::cout << std::endl;
	
	std::cout << "nome: " << epa.nome << " - " << "idade: " << epa.idade << " - " << "altura: " << epa.altura;
	
	
	
	
	
	
	return 0;
}
 
	

	
	
	
	
	