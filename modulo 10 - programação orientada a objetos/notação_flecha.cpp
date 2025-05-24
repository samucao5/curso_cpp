#include <iostream>


class amor{
	
	private:
		
	int idade {19};
	float altura {1.53};
	bool real { true };
	public:
	int personalidade;
	void mostrar_altura();
	int mostrar_idade();
	bool e_real();
};

	void amor::mostrar_altura(){
	std::cout << "altura: " << altura;
	}
	
	int amor::mostrar_idade(){
		return idade;
	}
	
	bool amor::e_real(){
		return real;
	}
	

int main(){
	//para declarar uma classe desta maneira e necessario fazer desta maneira
	//NomeClasse * NomeObjeto = New Nome_Classe();
	//e recomendado usar esta forma caso voce tenha que reutilizar a classe varias vezes durante o codigo
	amor *ha_um_amor = new amor();
	
	//agora voce esta criando, instanciando um objeto via alocação dinamica de memoria,utilizando
	//ponteiros*. Basicamente é o mesmo que declarar da forma que voce declarou na aula passada.
	//ou seja sera criado um objeto
	//contudo trata-se de um ponteiro. lembre... como acessar o apontado pelo ponteiro? isso mesmo
	//com desrefenciamento*
	//Logo ha_um_amor.mostrar_altura() devemos usar
	//*ptr mas neste caso o ponteiro é ha_um_amor
	//logo para desreferenciar ele voce faz *ha_um_amor
	//Mas agora voce esta diante de uma nova estrutura de variavel
	//ele contem diversos atributos e metodos(funções)
	//que sao acessiveis via ponto.
	//mas se fizer isso apenas estaria errado
	//ha_um_amor.mostrar_altura();
	//o correto e assim
	//(*Endereço_que_ponteiro_aponta).atributo;
	//(*Endereço_que_ponteiro_aponta).funcao();
	//(*ha_um_amor).mostrar_altura();
	//mas ficar digitando toda hora dois parenteses, um asterisco e um ponto ficou cansativo
	//os criadores da linguagem criaram então um atalho para esta notação
	//(*ha_um_amor). e o mesmo que ha_um_amor->
	//é a chamada notação flecha
	//(*). trocou-se 4 caracteres por apenas 2 ->
	//Mas e importante que voce saiba que tudo é notação ponto.
	
	//Logo quando voce digitar:
	ha_um_amor -> mostrar_altura();
	//e o mesmo que:
	//(*ha_um_amor).mostrar_altura();
	
	std::cout << std::endl << "idade: " << ha_um_amor -> mostrar_idade();
	std::cout << std::endl << "ela e real: " << ha_um_amor -> e_real() ? std::cout << " sim " : std::cout << " nao ";
	
	return 0;
	
}





