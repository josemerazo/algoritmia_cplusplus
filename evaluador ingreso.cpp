/*
"""
Permitir el ingreso de n números por teclado,
hasta que el usuario ingrese el 0
- Cuando el usuario ingrese el 0, se deberá mostrar 
la suma de todos los números ingresados
- Al finalizar el programa se deberá mostrar los números ingresados
por el usuario que sean múltiplos de 3
- Se deberá mostrar cuantos los números primos que ingresó el usuario
"""
*/
#include<iostream>
void imprimeArreglo(int* arreglo, int cantidad){
	for(int i=0;i<cantidad;i++){
		std::cout<<arreglo[i]<<" - ";
	}
}

bool esPrimo(int num){
	int contador = 0;
	for(int i=1;i<num;i++){
		if(num % i == 0)
			contador++;
	}
	return contador <= 2;
}

bool multiplo(int num, int divisor){
	return num % divisor == 0;
}

int main(){
	int numero;
	int acum = 0;
	int mult3[10];
	int mult3_cont = 0;
	int primos[10];
	int primos_cont = 0;
	do{
		std::cout<<"Ingrese numero: ";
		std::cin>>numero;
		acum += numero;
		if(multiplo(numero, 3)){
			mult3[mult3_cont] = numero;
			mult3_cont ++;
		}
		esPrimo(numero);
		
		if(esPrimo(numero)){
			primos[primos_cont] = numero;
			primos_cont ++;
		}
		
	}while(numero!=0);
	std::cout<<"La suma total es "<<acum<<std::endl;
	std::cout<<"Multiplos de 3: "<<std::endl;
	imprimeArreglo(mult3,mult3_cont);
	std::cout<<std::endl;
	std::cout<<"Primos: "<<std::endl;
	imprimeArreglo(primos,primos_cont);
}
