#include <iostream>

	struct livro{
	int id;
	std::string titulo;
	std::string autor;
	std::string editora;
	int ano;
	void cao( livro livro[5] );
	
};

	void cao(livro livro[5]){
		std::cout << "id: " << livro[0].id << std::endl;
		std::cout << "autor: " << livro[0].autor << std::endl;
		std::cout << "titulo do livro: " << livro[0].titulo << std::endl;
		std::cout << "editora: " << livro[0].editora << std::endl;
		std::cout << "ano: " << livro[0].ano << std::endl;
	};
	



int main(){
		livro livro[5];
	bool mar = 0;
	
	do{
		int escolha;
		std::cout << "deseja cadastrar um livro: " << std::endl << "digite 1 para sim e 0 para nao " << std::endl << "-> ";
		std::cin >> escolha;
		
		if(escolha == 1){
			int amor = 0;
			int pig = 0;
		for(int moh = 0;moh < 5; moh++){
			std::cout << "livro " << pig << std::endl;
			std::cout << std::endl << "digite o id do livro: " << std::endl << "-> "; 
			std::cin >> livro[pig].id;
			std::cout << "digite o nome do autor: " << std::endl << "-> ";
			std::cin >> livro[pig].autor;
			std::cout << "digite o titulo do livro: " << std::endl << "-> ";
			std::cin >> livro[pig].titulo;
			std::cout << "digite o nome da editora: " << std::endl << "-> ";
			std::cin >> livro[pig].editora;
			std::cout << "digite o ano do livro: " << std::endl << "-> ";
			std::cin >> livro[pig].ano;
			std::cout << std::endl;
			pig++;
		}
		
		for(int ham = 0;ham < 5;ham++){
		std::cout << std::endl << "mostrando o livro" << amor << std::endl;
		std::cout << "id: " << livro[amor].id << std::endl;
		std::cout << "autor: " << livro[amor].autor << std::endl;
		std::cout << "titulo do livro: " << livro[amor].titulo << std::endl;
		std::cout << "editora: " << livro[amor].editora << std::endl;
		std::cout << "ano: " << livro[amor].ano << std::endl;
		amor++;
		}
		
			
		}
		else{
			std::cout << "fechando a aba";
			mar = 1;
		}
		
		
		
	}while(mar == 0);

	
	
	
	return 0;
}