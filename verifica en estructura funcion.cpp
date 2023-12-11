#include<iostream>
/*
Escribe un programa que permita al usuario ingresar 
10 n�meros enteros. Luego, solicita un n�mero adicional
y busca si ese n�mero est� presente en el arreglo. 
Imprime un mensaje indicando si se encontr� o no.
*/
bool verificaNumero(int* arreglo, int tamanio, int busqueda){
	for(int i=0;i<tamanio;i++)
		if(busqueda==arreglo[i])
			return true;
	return false;
}
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
	
	if(verificaNumero(numeros,tamanio_arreglo, numeroBuscar))
		std::cout<<"El numero "<<numeroBuscar<<" ha sido encontrado";
	else
		std::cout<<"El numero no coincide";
}
