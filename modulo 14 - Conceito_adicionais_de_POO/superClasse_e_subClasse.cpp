#include <iostream>

//classe base tambem chamada de superclasse, classe mae/pai
	class base{
	//as seçoes public, protegida e privada de uma classe devem ser declaradas nesta ordem:
	//a seção public(publica) depois a seção protected(protegida) e depois a seção private(privada)
	//indica que os membros do objeto criado a partir desta classe terao acesso direto a todos os atributos e funções presetes na
	//seção public
		public:
			
			void solicitarNumeros(){
			std::cout << "num1: ";
			std::cin >> num1;
			std::cout << "num2: ";
			std::cin >> num2; 
			//chamada do metodo privado da classe dentro da propria classe o que e permitido ou seja nao e necessario
				//ter todos os metodos publicos. neste caso apenas solicitarNumeros e publico e isso basta, pois este metodo ira
				//chamar os demais metodos da classe
				mostrar_resultado(num1, num2);
			}
		//aqui indica que os membros da seção privada so serao acessiveis dentro do codigo da classe. o objeto naõ podera acessar
		//diretamente estes itens atibutos e funções 
			private:
				float num1, num2;
				float soma(int num1, int num2){
					return (num1 + num2);
				}
			//veja que este metodo so podera ser chamado(invocado) dentro do codigo da classe
			void mostrar_resultado(int num1, int num2){
				std::cout << num1 << " + " << num2 << " = " <<soma(num1,num2) << std::endl;
			}
};



	//agora delaramos uma classe que herda da classe base, porem ela neo tem nada esta vazia
	//a classe derivada tambem e chamada de subclasse, classe filha/ filho
	class derivada : public base{
		
	};
	









int main(){
	//criamos um objeto a partir da classe derivada
	derivada opa;
	opa.solicitarNumeros();
	//isto indica que uma classe herda tudo de sua classe Base(superclasse) mas nao herda os itens privados(private)
	//da superclasse(classe base)
	return 0;
}