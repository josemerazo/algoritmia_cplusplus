/*
Se desea calcular la distancia recorrida 
en metros por un vehículo que tiene 
velocidad constante (m/s) durante un tiempo 
T (segundos), considerar que es un MRU 
(Movimiento Rectilíneo Uniforme) 
*/
#include<iostream>

int main(){
	float distancia, velocidad, tiempo;
	std::cout<<"Ingrese la velocidad: ";
	std::cin>>velocidad;
	std::cout<<"Ingrese el tiempo: ";
	std::cin>>tiempo;
	distancia = velocidad * tiempo;
	std::cout<<"La distancia recorrida es: "
		<<distancia<<" metros";
	
	return 0;
}
