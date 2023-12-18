#include<iostream>

int numElementos(int* array){
	return sizeof(array) / sizeof(int);
}

int main(){
	int arreglo1[7] = {1,2,3,4,5,4};
	int arreglo2[5] = {4,5,6,7,8};
	int conj_interseccion[10];
	int contador = 0;
	
	for(int i=0;i<7;i++){
		for(int j=0;j<5;j++){
			if(arreglo1[i]==arreglo2[j]){
				conj_interseccion[contador] = arreglo1[i];
				contador ++;
			}
		}
	}
	
	for(int x=0;x<contador;x++){
		std::cout<<conj_interseccion[x]<<" - ";
	}
}
