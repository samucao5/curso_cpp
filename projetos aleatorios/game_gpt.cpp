#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>

	int vida {100},
	fome{70}
	,sede {50};

	class personagem{
		public:
		std::string nome;
		int vida;
		int dano;
	
	};
	
	

	void name(std::string &opa){//para modificar uma variavel por void coloque por referencia
		std::cout << "qual seu nome: " << std::endl << "-> ";
		std::cin >> opa;
	}
	
	//escolha de inimigo com base da fase
	int inimigos(int aleatorio[11], int s, personagem){
		if(aleatorio[3] < 5){
			if(s == 1){
			switch(aleatorio[0]){
				
	 		case 1:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "cavalheiro";
	 			inimigo1.dano = aleatorio[4];
	 			inimigo1.vida = 40;
	 			std::cout << "seu oponente e o  "<< inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 	}
	 		case 2:
	 			{
	 			class::personagem inimigo1;
	 			inimigo1.nome = "cavalheiro";
	 			inimigo1.dano = aleatorio[4];
	 			inimigo1.vida = 40;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 			
	 		break;
				 }
				 
	 		case 3:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "morcego";
	 			inimigo1.dano = aleatorio[4] - 5;
	 			inimigo1.vida = 20;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
	 		case 4:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "goblins";
	 			inimigo1.dano = aleatorio[4] - 3;
	 			inimigo1.vida = 25;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
	 		case 5:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "iron golem";
	 			inimigo1.dano = aleatorio[4] + 5;
	 			inimigo1.vida = 20;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
	 		case 6:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "ladrao";
	 			inimigo1.dano = aleatorio[4] - 5;
	 			inimigo1.vida = 30;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
	 		
	 		case 7:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "lobo";
	 			inimigo1.dano = aleatorio[4] - 1;
	 			inimigo1.vida = 15;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
	 		
			case 8:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "elfo";
	 			inimigo1.dano = aleatorio[4] + 3;
	 			inimigo1.vida = 20;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}	
	 			
	 		case 9:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "mendigo";
	 			inimigo1.dano = aleatorio[4] - 5;
	 			inimigo1.vida = 10;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}	
	 		
	 		case 10:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "ratos";
	 			inimigo1.dano = aleatorio[4] - 2;
	 			inimigo1.vida = 20;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
		 }
	}
		 
//**************************************************************************************************************************************
		 
		 if( s == 2){
		 switch(aleatorio[1]){
				
	 		case 1:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "cavalheiro";
	 			inimigo1.dano = aleatorio[4];
	 			inimigo1.vida = 40;
	 			std::cout << "seu oponente e o  "<< inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 	}
	 		case 2:
	 			{
	 			class::personagem inimigo1;
	 			inimigo1.nome = "cavalheiro";
	 			inimigo1.dano = aleatorio[4];
	 			inimigo1.vida = 40;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 			
	 		break;
				 }
				 
	 		case 3:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "morcego";
	 			inimigo1.dano = aleatorio[4] - 5;
	 			inimigo1.vida = 20;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
	 		case 4:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "goblins";
	 			inimigo1.dano = aleatorio[4] - 3;
	 			inimigo1.vida = 25;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
	 		case 5:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "iron golem";
	 			inimigo1.dano = aleatorio[4] + 5;
	 			inimigo1.vida = 20;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
	 		case 6:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "ladrao";
	 			inimigo1.dano = aleatorio[4] - 5;
	 			inimigo1.vida = 30;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
	 		
	 		case 7:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "lobo";
	 			inimigo1.dano = aleatorio[4] - 1;
	 			inimigo1.vida = 15;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
	 		
			case 8:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "elfo";
	 			inimigo1.dano = aleatorio[4] + 3;
	 			inimigo1.vida = 20;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 	}
	 			
	 		case 9:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "mendigo";
	 			inimigo1.dano = aleatorio[4] - 5;
	 			inimigo1.vida = 10;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}	
	 		
	 		case 10:
	 			{
	 			personagem inimigo1;
	 			inimigo1.nome = "ratos";
	 			inimigo1.dano = aleatorio[4] - 2;
	 			inimigo1.vida = 20;
	 			std::cout << "seu oponente e " << inimigo1.nome << std::endl;
	 			return inimigo1.dano , inimigo1.vida;
	 		break;
	 		}
		 }
		 }
		}
	}
	
	//*************************************************************************************************************************
	//sistema de comida e agua
	std::string comida_e_agua(std::string inv[6], int aleatorio[11]){
		std::string epa = "comida";
		std::string opa = "agua";
		
		if(aleatorio[3] >= 5 || aleatorio[3] <= 7){
			int l;
			std::cout << "onde deseja armazenar a comida: " << std::endl;
			for(int o = 0; o < 6;o++){
					std::cout << std::endl << "espaco " << o;
					if(inv[o].size() == 0){
						std::cout << " inventario vazio" << std::endl;
					}
			}
			std::cout << "digite entre os numeros acima: " << std::endl << "-> ";
			std::cin >> l;
			switch(l){
				case 0:
					{
					if(inv[0].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[0] = epa;
					std::cout << inv[0] << std::endl;
					return inv[0];
				}
					
					break;
				}
				case 1:
					{
					if(inv[1].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[1] = epa;
					std::cout << inv[1] << std::endl;
					return inv[1];
				}
					break;
				}
				
				case 2:
					{
					if(inv[2].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[2] = epa;
					std::cout << inv[2] << std::endl;
					return inv[2];
				}
					break;
				}
				case 3:
					{
					if(inv[3].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[3] = epa;
					std::cout << inv[3] << std::endl;
					return inv[3];
				}
					break;
				}
				
				case 4:
					{
					if(inv[4].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[4] = epa;
					std::cout << inv[4] << std::endl;
					return inv[4];
				}
					break;
				}
				
				case 5:
					{
					if(inv[5].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[5] = epa;
					std::cout << inv[5] << std::endl;
					return inv[5];
				}
					break;
				}
				default:
					std::cout << "este inventario nao existe" << std::endl;
					break;
			}
			 
			}
		else if(aleatorio[3] >= 7 || aleatorio[3] <= 10){
		int k;
		std::cout << "onde deseja armazenar a agua: " << std::endl;
			for(int o = 0; o < 6;o++){
					std::cout << std::endl << "espaco " << o;
					if(inv[o].size() == 0){
						std::cout << " inventario vazio" << std::endl;
					if(inv[0].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[0] = opa;
					std::cout << inv[0] << std::endl;
					return inv[0];
				}
					break;
				}
				}
			std::cout << "digite entre os numeros acima: " << std::endl << "-> ";
			std::cin >> k;
			switch(k){
				
				case 1:
					{
					if(inv[1].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[1] = opa;
					std::cout << inv[1] << std::endl;
					return inv[1];
				}
					break;
				}
				
				case 2:
					{
					if(inv[2].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[2] = opa;
					std::cout << inv[2] << std::endl;
					return inv[2];
				}
					break;
				}
				case 3:
					{
					if(inv[3].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[3] = opa;
					std::cout << inv[3] << std::endl;
					return inv[3];
				}
					break;
				}
				
				case 4:
					{
					if(inv[4].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[4] = opa;
					std::cout << inv[4] << std::endl;
					return inv[4];
				}
					break;
				}
				
				case 5:
					{
					if(inv[5].size() != 0){
						std::cout << "espaco cheio" << std::endl;
					}
					else{
					inv[5] = opa;
					std::cout << inv[5] << std::endl;
					return inv[5];
				}
					break;
				}
				default:
					std::cout << "este inventario nao existe" << std::endl;
					break;
			}
			 system("cls");
		}
		return &inv[6], epa, opa;
	}
	
	
	
	
	
	void ver_inventario(int s, std::string inv[6],std::string comida_e_agua(std::string inv[6], int aleatorio[11]) ){
		int g;
		if(s == 3){
			std::cout << "deseja entrar no inventario: " << std::endl << "1 para sim e 2 para nao " << std::endl << "-> ";
			std::cin >> g;
			if(g == 1){
				for(int o = 0; o < 6;o++){
					std::cout << std::endl << "espaco " << o;
					if(inv[o].size() == 0){
					std::cout << " vazio ";	
				}
				else if(inv[o].size() != 0){
					std::cout << inv[o];
				}
			}
			
			}
			
		}
		system("cls");
}
	
	
	
	
	void inimigo_ou_item(int aleatorio[11], int s){
		if(s == 1 || s == 2){
		if(aleatorio[3] < 5 ){
			std::cout << "um inimigo te avistou: " << std::endl;
		}
		else if(aleatorio[3] >= 5 || aleatorio[3] <= 7){
			std::cout << std::endl <<"voce encontrou comida " << std::endl;
			
					}
					
			
		
		else{
			std::cout << "voce encontrou agua: " << std::endl;
			
			
		}
	}
	}
	
	
	
	
	//valor aleatorio
	int cao(int aleatorio[11]){
		int oua = 0;
		srand((unsigned)time(0));
		for(int epa = 0;epa < 11; epa++){
			for(int ia = 0; ia <= 2 ; ia++){
			aleatorio[oua] = (rand() % 11);
		}
			oua++;
		}
		return aleatorio[11];
	}
	
	
	
	//qual local do mapa voce vai cair
	 void mapa(int aleatorio[11]){
	 	
	 	switch(aleatorio[0]){
	 		case 1:
	 		std::cout << std::endl <<"1 - ir para o castelo " << std::endl;
	 		break;
	 		
	 		case 2: 
	 			std::cout << std::endl <<"1 - ir para o castelo " << std::endl;
	 			break;
	 		
	 		case 3:
	 			std::cout << std::endl <<"1 - ir para a caverna " << std::endl;
	 			break;
	 			
	 		case 4:
	 			std::cout << std::endl <<"1 - ir para a caverna " << std::endl;
	 			break;
	 			
	 		case 5:
	 			std::cout << std::endl <<"1 - ir para a aldeia " << std::endl;
	 			break;
	 			
	 		case 6:
	 			std::cout << std::endl <<"1 - ir para a floresta " << std::endl;
	 			break;
	 			
	 		case 7:
	 			std::cout << std::endl <<"1 - ir para a floresta " << std::endl;
	 			break;
	 		
	 		case 8:
	 			std::cout << std::endl <<"1 - cabana misteriosa " << std::endl;
	 			break;
	 			
	 		case 9:
	 			std::cout << std::endl <<"1 - cabana misteriosa " << std::endl;
	 			break;
	 			
	 		case 10:
	 			std::cout << std::endl <<"1 - bosque de uva " << std::endl;
	 			break;
	 			
	 			
	 		default:
	 			break;
	 			
		 }
		 
	 	
	 	switch(aleatorio[1]){
	 		case 1:
	 		std::cout << std::endl <<"2 - ir para o castelo " << std::endl;
	 		break;
	 		
	 		case 2: 
	 			std::cout << std::endl <<"2 - ir para o castelo " << std::endl;
	 			break;
	 		
	 		case 3:
	 			std::cout << std::endl <<"2 - ir para a caverna " << std::endl;
	 			break;
	 			
	 		case 4:
	 			std::cout << std::endl <<"2 - ir para a caverna " << std::endl;
	 			break;
	 			
	 		case 5:
	 			std::cout << std::endl <<"2 - ir para a aldeia " << std::endl;
	 			break;
	 			
	 		case 6:
	 			std::cout << std::endl <<"2 - ir para a floresta " << std::endl;
	 			break;
	 			
	 		case 7:
	 			std::cout << std::endl <<"2 - ir para a floresta " << std::endl;
	 			break;
	 		
	 		case 8:
	 			std::cout << std::endl <<"2 - cabana misteriosa " << std::endl;
	 			break;
	 			
	 		case 9:
	 			std::cout << std::endl <<"2 - cabana misteriosa " << std::endl;
	 			break;
	 			
	 		case 10:
	 			std::cout << std::endl <<"2 - bosque de uva " << std::endl;
	 			break;
	 			
	 		default:
	 			break;
	 			
		 }
	 	
	 	std::cout << "3 - voltar para a base " << std::endl;
	 	
	 	
	 }
	
	//escolha do mapa 
	void escolha_mapa(int aleatorio[11], int &s){
		vacilao:
		std::cout << std::endl <<"escolha para onde voce deseja ir: " << std::endl << "-> ";
		std::cin >> s;
		
		if(s == 1){
			switch(aleatorio[0]){
	 		case 1:
	 		std::cout << "indo para o castelo " << std::endl;
	 		
	 		break;
	 		
	 		case 2: 
	 			std::cout << "indo para o castelo " << std::endl;
	 			break;
	 		
	 		case 3:
	 			std::cout << "indo para a caverna " << std::endl;
	 			break;
	 			
	 		case 4:
	 			std::cout << "indo para a caverna " << std::endl;
	 			break;
	 			
	 		case 5:
	 			std::cout << "indo para a aldeia " << std::endl;
	 			break;
	 			
	 		case 6:
	 			std::cout << "indo para a floresta " << std::endl;
	 			break;
	 			
	 		case 7:
	 			std::cout << "indo para a floresta " << std::endl;
	 			break;
	 		
	 		case 8:
	 			std::cout << "indo para a cabana misteriosa " << std::endl;
	 			break;
	 			
	 		case 9:
	 			std::cout << "indo para acabana misteriosa " << std::endl;
	 			break;
	 			
	 		case 10:
	 			std::cout << "indo para o bosque de uva " << std::endl;
	 			break;
	 			
	 			
		}
	}
		else if(s == 2){
			switch(aleatorio[1]){
	 		case 1:
	 		std::cout << "indo para o castelo " << std::endl;
	 		
	 		break;
	 		
	 		case 2: 
	 			std::cout << "indo para o castelo " << std::endl;
	 			break;
	 		
	 		case 3:
	 			std::cout << "indo para a caverna " << std::endl;
	 			break;
	 			
	 		case 4:
	 			std::cout << "indo para a caverna " << std::endl;
	 			break;
	 			
	 		case 5:
	 			std::cout << "indo para a aldeia " << std::endl;
	 			break;
	 			
	 		case 6:
	 			std::cout << "indo para a floresta " << std::endl;
	 			break;
	 			
	 		case 7:
	 			std::cout << "indo para a floresta " << std::endl;
	 			break;
	 		
	 		case 8:
	 			std::cout << "indo para a cabana misteriosa " << std::endl;
	 			break;
	 			
	 		case 9:
	 			std::cout << "indo para acabana misteriosa " << std::endl;
	 			break;
	 			
	 		case 10:
	 			std::cout << "indo para o bosque de uva " << std::endl;
	 			break;
	 			
	 			
		}
		}
		else if(s == 3){
			std::cout << "voltando para a base" << std::endl;
		}
		else{
			goto vacilao;
		}
	}
	
	
	
	
	
	int main(){
		std::string inv[6];
		personagem inimigo1;
		//coletando nome do jogador - ok
		int s;
		static int dia = 0;
		std::string opa;
		name(opa);
		system("cls");
		
		
		
		
		//sistema de valores aleatorios - ok
		do{
		int aleatorio[11];
		std::cout << "boa sorte para sobreviver nesta ilha " << opa;
		cao(aleatorio);
		//std::cout << std::endl << aleatorio[0] << std::endl << aleatorio[1] << std::endl;
		mapa(aleatorio);
		escolha_mapa(aleatorio, s);
		inimigo_ou_item(aleatorio, s);
		std::cout << inimigos(aleatorio, s,inimigo1);
		comida_e_agua(inv, aleatorio);
		ver_inventario(s, inv, comida_e_agua);
		int epa;
		std::cout << vida;
		system("cls");
	
		
		sede -= 5;           
		fome -= 5;
		}while(vida > 0 || sede > 0 || fome > 0  );
		
	std::cout << opa << " voce sobreviveu por " << dia << " dias";
		
	}