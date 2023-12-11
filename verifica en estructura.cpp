#include<iostream>
/*
Escribe un programa que permita al usuario ingresar 
10 números enteros. Luego, solicita un número adicional
y busca si ese número está presente en el arreglo. 
Imprime un mensaje indicando si se encontró o no.
*/
int main(){
	int tamanio_arreglo = 5;
	int numeros[tamanio_arreglo];
	int numeroBuscar;
	bool bandera=false;
	//Llenamos el arreglo
	for(int i=0;i<tamanio_arreglo;i++){
		std::cout<<"Ingrese numero "<<i+1<<": ";
		std::cin>>numeros[i];
	}
	
	//ingresamos el dato a verificar
	std::cout<<"Ingrese numero a verificar: ";
	std::cin>>numeroBuscar;
	
	
	for(int i=0;i<tamanio_arreglo;i++){
		if(numeroBuscar==numeros[i])
		{
			bandera = true;
			break;
		}
	}
	if(bandera)
		std::cout<<"El numero "<<numeroBuscar<<" ha sido encontrado";
	else 
		std::cout<<"El numero no coincide";
}
