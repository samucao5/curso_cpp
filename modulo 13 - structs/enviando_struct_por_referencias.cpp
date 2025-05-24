#include <iostream>

	struct Aluno{
		long int Matricula;
		std::string Nome;
		std::string Curso;
		int semestre;
		double Mensalidade;	
	};//aluno1 = {111111, "samuel", "Eng_software", 5, 0};
	//acima ja podemos criar um objeto do tipo desta struct colocando entre } e ;
	//abaixo sao prototipos de funções que possuem um parametro do tipo struct Aluno.
	//ou seja estas funções sao capazes de receber na chamada das mesmas
	//argumentos que sejam do tipo struct Aluno
	
	void mostrar_dados(Aluno Dado){
		std::cout << " Dados do aluno " << std::endl;
		std::cout << Dado.Nome << std::endl;
		std::cout << Dado.Curso << std::endl;
		std::cout << Dado.semestre << std::endl;
		std::cout << Dado.Mensalidade << std::endl;
	};
	//agora criamos uma referencia em alterar dados nao ira mais receber uma simples copia da struct. &dado sera um novo alias,
	//uma nova forma de manipular a struct aluno1
	//agora altera pois dado nao recebe mais uma copia, um valor da struct aluno1, dado agora e uma referencia para quem for
	//enviada para a funçao alterar_dados. se e uma referencia. dado sera capaz de alterar a aluno1, pois e uma referencia do mesmo
	
	//ou seja aluno1 passa ser referencia por dado
	//e como se tivessemos a setença
	//Aluno &Dado = aluno1;
	void alterar_dados(Aluno &Dado){
		std::cout << "qual seu nome: ";
	std::cin >> Dado.Nome;
		std::cout << "qual seu curso: ";
	std::cin >> Dado.Curso;
		std::cout << "qual seu semestre: ";
	std::cin >> Dado.semestre;
		std::cout << "valor da mensalidade: ";
	std::cin >> Dado.Mensalidade;
	}; //podemos retirar struct, ja no c não podemos





int main(){
	//aqui usamos a forma tradicional de instaciar/criar uma variavel(objeto) do tipo struct
	Aluno aluno1 = {111111, "samuel", "Eng_software", 5, 0};
	//aluno1 je e um objeto do tipo struct criado e instanciado a partir do atalho. logo estamos enviando para a função mostrar_dados
	//a variavel aluno1 ( que neste caso e um objeto do tipo struct Aluno)
	mostrar_dados(aluno1);
	std::cout << std::endl << "valor modificado" << std::endl;
	alterar_dados(aluno1);
	mostrar_dados(aluno1);
	
	
	return 0;
}