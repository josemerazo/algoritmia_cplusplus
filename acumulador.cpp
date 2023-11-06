/*
Escriba un programa que permita el ingreso de n numero, los cuales se
deben acumular hasta que se ingrese el 0, cuando se ingrese el 0
el programa mostrará la suma de todos los números ingresados y terminará
*/

#include<iostream>

int main(){
	int numero=1, acumulador=0;
	
	while(numero!=0){	
		std::cout<<"Ingrese numero (0 para finalizar): ";
		std::cin>>numero;
		acumulador += numero;
	}
	std::cout<<"El valor acumulado es: "<<acumulador;
	
	return 0;
}
