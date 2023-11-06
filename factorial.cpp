#include<iostream>

int main(){
	int numero, acumulador;
	acumulador=1;
	std::cout<<"Ingrese numero: ";
	std::cin>>numero;
	
	for(int i=numero;i>=1;i--){
		acumulador = acumulador * i;
	}
	
	std::cout<<"El factorial es: "<<acumulador;
	
	return 0;
	
}
