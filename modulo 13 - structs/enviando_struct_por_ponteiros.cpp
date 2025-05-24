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

	//Neste caso criamos uma versao sobrecarregada da função alternar_dados. agora nesta assinatura da função alternar_dados
	//e recebido um parametro do tipo ponteiro capaz de apontar para uma variavel(objeto) do tipo struct Aluno 
	//lembre-se: se Dado e um ponteiro ele recebe e pode ter dentro dele um endereço de memoria.. Logo ao chamar a funcao alternar_dados
	//nesta versao com ponteiros, deve-se enviar o endereço do objeto
	void alternar_dados(Aluno* Dado ){
		//desferenciamento de ponteiros
		//va ate o local que voce aponta e no campo nome coloque "Monteiro";
		//(*). pode ser substituido por ->
		(*Dado).Nome = "Monteiro";
		Dado->Curso = "padeiro";
		Dado->semestre = 7;
		Dado->Matricula = 77575;
	};
	//entao dado abaixo e um ponteiro do tipo Aluno
	//*Ele ira receber dentro dele o endereço contido em aluno2
	//e portando cai conseguir modificar o valor de aluno2
	void mostrar_dados(Aluno* Dado){
		std::cout << " Dados do aluno " << std::endl;
		std::cout << Dado->Nome << std::endl;
		std::cout << Dado->Curso << std::endl;
		std::cout << Dado->semestre << std::endl;
		std::cout << Dado->Mensalidade << std::endl;
	};



int main(){
	//aqui usamos a forma tradicional de instaciar/criar uma variavel(objeto) do tipo struct
	Aluno aluno1 = {111111, "samuel", "Eng_software", 5, 0};
	//aluno1 je e um objeto do tipo struct criado e instanciado a partir do atalho. logo estamos enviando para a função mostrar_dados
	//a variavel aluno1 ( que neste caso e um objeto do tipo struct Aluno)
	
	//agora criamos via ponteiros um outro objeto
	//agora este objeto estara na heap da RAM
	//e a forma de acesso dos membros do objetos nao sera mais pela notação ponto e sim pela notação flecha
	Aluno * aluno2 = new Aluno;
	
	Aluno aluno3;// criamos outro objeto, mas aluno3 não e um ponteiro 
	//para chamar a função alterar_dados que modifica este objeto via ponteiro precimos enviar o endereço de memoria de aluno3
	
	
	mostrar_dados(aluno1);
	std::cout << std::endl << "valor modificado" << std::endl;
	alterar_dados(aluno1);
	std::cout << "........................" << std::endl;
	mostrar_dados(aluno1);
	std::cout << "........................." << std::endl;
	mostrar_dados(aluno2);
	std::cout << "........................." << std::endl;
	//aqui estamos enviando aluno2 para a função alternar_dados...
	//ocorre que aluno2 e um ponteiro que recebeu dentro dele o endereço do objeto criado a partir da struct Aluno
	//logo enviar aluno2 significa que estamos enviando o endereço de memoria do objeto Aluno criado em new Aluno
	alternar_dados(aluno2);
	std::cout << "........................." << std::endl;
	mostrar_dados(aluno2);
	std::cout << "........................." << std::endl;
	mostrar_dados(&aluno3);
	std::cout << "........................." << std::endl;
	alternar_dados(&aluno3);
	return 0;
}