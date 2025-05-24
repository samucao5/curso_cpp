#include <iostream>



//aqui voce criou um alias, um apelido para struct livro. este apelido se chama Registro_livro
//porem o mais usual e assim
typedef struct livro{
	int id;
	float preco;
	std::string titulo;
	std::string editora;
}Registro_livro;

//acima e apenas um atalho uma forma de fazer o seguinte 
//typedef struct livro Registro_livro

//Cuidado!!!! isso abaixo cria uma variavel!!!!


int main(){
	//aqui e criada uma variavel do tipo struct livro mas sem usar o alias o apelido criado via typedef
	struct livro aluno1;
	//aqui criamos uma variavel do tipo Registro_livro
	//porem Registro_livro e apenas um apelido uma alias para struct livro
	//o pre-processador vai trocar este nome por struct livro antes da compilação, simples assim
	//porem muitos usam para simplicar o codigo e digitar menos
	Registro_livro aluno2;
	aluno2.id = 0001;
	aluno2.preco = 5.43;
	aluno2.titulo = "eleanor e park";
	aluno2.editora = "skala";
	
	
	
	

	return 0;
}