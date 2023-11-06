/*
Escribe dos programas seprados, uno utilizando un bucle 
for y otro utilizando un bucle while, para calcular la 
suma de los primeros N números pares, donde N es proporcionado 
por el usuario.
*/

#include<iostream>

int main(){
	int numero, acumulador;
	acumulador = 0;
	
	std::cout<<"Ingrese un numero: ";
	std::cin>>numero;
	
	for(int i=0;i<=numero;i++){
		if(i%2 == 0)
			acumulador += i;
	}
	std::cout<<"La respuesta es"<<acumulador;
	
	return 0;
}

