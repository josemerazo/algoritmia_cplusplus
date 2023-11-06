#include<iostream>

int main(){
	int numero;
	std::cout<<"Ingrese el número de la tabla: ";
	std::cin>>numero;
	
	for(int i=0; i<=10; i++)
		std::cout<<numero<<" x "<<i<<" = "<<numero*i<<std::endl;		
	
	return 0;
}
