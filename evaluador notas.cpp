/*
Ingrese 2 notas correspondientes a un
primer parcial y a un segundo parcial,
sumar ambas, calcular el promedio,
y indicar si el estudiante aprueba o 
reprueba, recuerde que se aprueba una 
nota mayor igual a 7
*/
#include<iostream>

int main(){
	float nota1, nota2, promedio;
	std::cout<<"Ingrese nota 1: ";
	std::cin>>nota1;
	std::cout<<"Ingrese nota 2: ";
	std::cin>>nota2;
	promedio = (nota1 + nota2)/2;
	std::cout<<"El promedio es: "<<promedio;
	if(promedio>=7){
		std::cout<<"Aprobado";	
	}
	else {
		std::cout<<"Reprobado";
	}
	return 0;
}
