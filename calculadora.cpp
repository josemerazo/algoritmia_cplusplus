/*
Calculadora
*/

#include<iostream>

int main(){
	int respuesta;
	float num1, num2, resultado;
	std::cout<<"*******************************"<<std::endl
			 <<"*    C A L C U L A D O R A    *"<<std::endl
			 <<"*******************************"<<std::endl;
	std::cout<<" 1 .- Suma "<<std::endl;
	std::cout<<" 2 .- Resta "<<std::endl;
	std::cout<<" 3 .- Multiplicacion "<<std::endl;
	std::cout<<" 4 .- Division "<<std::endl;
	std::cout<<"Ingrese operación a realizar: ";
	std::cin>>respuesta;
	std::cout<<"Ingrese número 1: ";
	std::cin>>num1;
	std::cout<<"Ingrese número 2: ";
	std::cin>>num2;
	switch(respuesta){
		case 1:
			//Ejecución de suma
			resultado = num1 + num2;
			break;
		case 2:
			//Ejecución de resta
			resultado = num1 - num2;
			break;
		case 3:
			//Ejecución de multiplicación
			resultado = num1 * num2;
			break;
		case 4:
			//Ejecución de división
			resultado = num1 / num2;
			break;
		default: 
			std::cout<<"La opción ingresada no es válida";	
	}
	std::cout<<"La respuesta es "<< resultado;
	return 0;
}
