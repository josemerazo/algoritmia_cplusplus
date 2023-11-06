/*
Escribir un programa que determine si 
un año es bisiesto
*/
#include<iostream>

int main(){
	int anio;
	std::cout<<"Ingrese anio: ";
	std::cin>>anio;
	
	if((anio%4 == 0 && 
		anio%100 != 0) || 
		anio%400 == 0){
		std::cout<<"El anio es bisiesto";
	}
	else{
		std::cout<<"El anio no es bisisto";
	}
	
	return 0;
}



