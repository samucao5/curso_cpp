#include <iostream>

//para declararmos um classe e necessario o que haja;
//<Nome_Da_classe_Que_Deseja_instanciar> <Nome_Do_Objeto>;
//ex: Casa Casa_de_praia;


class amor{
	//estes sao os atributos, as propriedades da classe que sao representados por variaveis
	//estes atributos serao as caracteristicas de cada objeto criado a partir desta classe
	//quando o programa estiver sendo executado e queremos saber qual e a situação
	//do objeto em relação ao valor de seus atributos dizemos que queremos saber o ESTADO do objeto.
	
	//por padrão em uma classe a visibilidade é do tipo private, logo se não for indicado
	//nenhuma visibilidade o padrão é ser private(privado)
	
	private://private: esta indicando que estes atributos só poderão ser acessados diretamente no
	//codigo da classe amor
	//caso os atributos estejam publicos todos poderam ser modificados em qualquer parte do codigo
	//o recomendado e que eles estejam privados
	int idade {19};
	float altura {1.53};
	bool real { true };
	//estas são as operações da classe, ou metodos ou as funçoes que o objeto podera executar
	//quando for criado(instanciado) a partir desta classe.
	public://public significa que estara acessivel fora do codigo da classe
	void mostrar_altura();
	int monstrar_idade();
	bool e_real();
};// este e o codigo da classe... e voce pode indicar que tipo de visibilidade tera partes deste
//codigo 
	
// o operador escopo neste caso indica que o metodo(a função) Monstrar_altura() pertence a classe amor
//estes codigos pertecem a classe amor e portanto podem acessar diretamente os seus atributos privados

	void amor::mostrar_altura(){
	std::cout << "altura: " << altura;
	}
	
	int amor::monstrar_idade(){
		return idade;
	}
	
	bool amor::e_real(){
		return real;
	}
	

int main(){
	//ou seja assim como voce declara variaveis do tipo int, chat, float, double, etc
	//voce tambem pode declarar variaveis tendo como um tipo uma classe
	//se for do tipo int o complilador vai criar na memoria um local capaz e desenhado
	//para receber um inteiro. como agora voce pediu para criar uma regiao da memoria
	//do tipo classe amor, o compilador vai criar uma regiao na memoria de nome ha_um_amor
	//e que contem: 
	//os atributos e funçoes
	
	amor ha_um_amor;
	//como a função main esta fora do codigo da classe, dentro dela não
	//sera possivel acessar membros privados da classe case!
	//contudo podera ser acessado os membros public(publico)
	ha_um_amor.mostrar_altura();
	std::cout << std::endl << "idade: " << ha_um_amor.monstrar_idade();
	std::cout << std::endl << "ela e real: " << ha_um_amor.e_real() ? std::cout << " sim " : std::cout << " nao ";
	//para acessar os membros da classe casa usamos neste caso a notação ponto.
	//Nome_do_objeto.Nome_do_atributo ou Nome_Do_objeto.Nome_do_metodo ou função
	
	return 0;
	
}