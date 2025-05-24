#include <iostream>

struct pontos3d{
	public:
	int x;
	int y;
	int z;
	pontos3d(): x(5),y(3), z(5){};
	
};

void DesenharPontos3D(pontos3d pontos){
	std::cout << "x: " << pontos.x << " " << " Y: " << pontos.y << " Z: " << pontos.z;
}






int main(){
	pontos3d pontos;
	DesenharPontos3D(pontos);
	
	
	
	return 0;
}