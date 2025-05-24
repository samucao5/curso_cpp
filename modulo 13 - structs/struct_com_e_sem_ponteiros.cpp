#include <iostream>

struct mar{
	//como não especifiquei o modificador de acesso
	//na struct ele sera por padrao public:
	static int contador;
	int id;
	int dia;
	int mes;
	int ano;
	mar(){id = contador++;
	std::cout << std::endl << "construtor indo ( " << id <<" ) executado" << std::endl;}
	~mar(){std::cout << std::endl << "destrutor indo ( " << id << " )" <<std::endl;}
	
	
};

	//desta forma acima voce pode iniciar os valores ao instanciar e usar chaves
	int mar::contador = 1;






int main(){
	{
	mar agenda;
	//aqui criei um novo escopo pois lembre que entre chaves e um escopo
	//e vai determinar o ciclo de vida das variaveis
	//quando codigo ultrapassar a chave final as variaveis declaradas dentro
	//do escopo serao destruidas
	{
		mar agenda2;
		//agora este objeto Agenda3 esta na Heap e não sera destruido ao fu=inal do escopo
		//ele sera destruido se for utilizada a função delete 
		mar *agenda3 = new mar;
		delete(agenda3);
	}
	mar agenda3;
	}
	
	
	
	
	
	
	
	return 0;
}