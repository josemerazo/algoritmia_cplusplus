/*
Escribe un programa que determine si un 
n�mero es positivo, negativo o cero.
*/

#include<iostream>

int main(){
	int numero;
	std::cout<<"Ingrese n�mero: ";
	std::cin>>numero;
	if(numero > 0)
		std::cout<<"Es positivo";
	else{
		if(numero==0)
			std::cout<<"Es 0";
		else
			std::cout<<"Es negativo";
	}
}

