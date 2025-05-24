#include <iostream>
#include <iomanip>

int main(){
	int epa = 1;
	float mar [] { 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7 };
	float ima = 0.0;
	for(auto cao : mar){
		ima += cao;
		//somar e acumular os valores de mar obs:uma boa ideia para o futuro ;)
		epa++;
	}
	std::cout << "velocidade media: " << ima / epa;
	
	return 0;
}