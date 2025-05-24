#include <iostream>
int ame (int cao[10]);
void man (int cao [10]);
void moh (int cao[10]);

int main(){
	int cao [10];
	std::cout << ame(cao);
	std::cout << std::endl;
	man(cao);
	std::cout << std::endl << " array invertido " << std::endl;
	moh(cao);
	
	
	
	
	return 0;
}

int ame(int cao[10]){
	int amar = 1;
	int ima = 0;
	for(ima; ima < 10;ima++){
		std::cout << amar << " valor: " << std::endl << "-> ";
		std::cin >> cao[ima];
		std::cout << std::endl;
		amar++;
	}
	
	return cao[10];
}
void man(int cao[10]){
	int bad = 0;
	for(bad; bad < 10;bad++){
		std::cout << cao[bad] << std::endl;
	}
}

void moh(int cao[10]){
	int mor = 9;
	for(mor; mor >= 0;mor--){
		std::cout << cao[mor] << std::endl;
		
	}
}