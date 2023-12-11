#include<iostream>

bool esPar(int numero){
	return numero%2==0;
}

int main(){
	int arreglo[] = {3,2,5,4,8,6,10,4,5};
	
	for(int i=0;i<9;i++){
		if(esPar(arreglo[i]))
			std::cout<<arreglo[i]<<" - ";
	}
	std::cout<<std::endl;
	int mayor= arreglo[0];
	
	for(int i=0;i<9;i++){
		if(arreglo[i]>mayor)
			mayor = arreglo[i];
	}
	std::cout<<"El numero mayor es "<<mayor;
	
	return 0;
}
