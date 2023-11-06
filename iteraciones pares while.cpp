
/*
Escribe dos programas seprados, uno utilizando un bucle 
for y otro utilizando un bucle while, para calcular la 
suma de los primeros N números pares, donde N es proporcionado 
por el usuario.
*/
#include<iostream>

int main(){
	int numero, i=0, acumulador=0;
	
	std::cout<<"Ingrese numero: ";
	std::cin>>numero;
	
	while(i<=numero){
		if(i%2==0)
			acumulador += i;
		i++;
	}
	
	std::cout<<"La respuesta es"<<acumulador;
	
	return 0;
}
