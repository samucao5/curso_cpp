#include <iostream>



int main(){
	//for(tipo_var_var_recebe_cada_item_array: nome_do_array){}
	//e bem comum usar a palavra auto,qu obriga o compilador a identificar o tipo de dado automaticamente
	//ex: for(auto opa : ima){}
	int cao[] { 1998,2011,2014,2017,2020};
	for (auto opa : cao)
	{
		std::cout << opa << std::endl;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}