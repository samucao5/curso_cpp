#include <Iostream>

int main(){
	int cao = 1;
	float amor [] { 4.9 , 9.5 , 5.6 , 2.5 , 9.6 , 6.4 , 7.5 , 9.8, 8.7 , 10.0};
	float mar {0.0};
	
	for(auto moh : amor){
		mar += moh;
		cao++;
	}
	std::cout << "media das notas: " << mar / cao;
	
	
	
	return 0;
}