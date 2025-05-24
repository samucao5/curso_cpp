#include <iostream>

struct livro{
	int id;
	std::string titulo;
	std::string autor;
	std::string editora;
	int ano;
	livro (): id {51}, titulo {"the"} , autor {"samuel"}, editora { "uma"}, ano {2005}{};
	void leitor_livro(livro livro1);
};
	void leitor_livro(livro livro1){
		std::cout << "id do livro: " << livro1.id << std::endl << "autor do livro: " << livro1.autor << std::endl << "editora do livro: " << livro1.editora;
		std::cout << std::endl << "ano do livro: " << livro1.ano << std::endl;
	}



int set_id(int id);


int main(){
	livro livro1;
	leitor_livro(livro1);
	return 0;
}

