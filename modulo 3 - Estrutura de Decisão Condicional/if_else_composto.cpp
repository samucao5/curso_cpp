#include <iostream>


int main(){
	
	int senha, senha_correta {5555};
	std::string usuario, usuario_correto {"samuel"};
	std::cout << "digite o nome do usuario " << std::endl << "-> ";
	std::cin >> usuario;
	
	std::cout << "digite a senha " << std::endl << "-> ";
	std::cin >> senha;
	
	if(senha == senha_correta && usuario == usuario_correto){
		std::cout << "acesso permitido" << std::endl;
		
		
	}
	else if(usuario != usuario_correto){
		std::cout << "usuario incorreto" << std::endl;
		
		
		
	}
	
	else if(senha != senha_correta){
		std::cout << "senha incorreta" << std::endl;
		
	}
	
	else{
		std::cout << "acesso negado";
		
	}
	
	
	return 0;
}