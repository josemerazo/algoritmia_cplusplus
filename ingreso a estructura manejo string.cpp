#include<iostream>
#include<string>

int main(){
	int maximo = 10;
	int indice = 0;
	char opcion;
	int edad [maximo];
	
	std::string nombre[maximo];
	
	do{
		do{
			std::cout<<"Ingrese edad: ";
			std::cin>>edad[indice];
			if(edad[indice] < 0 || edad[indice] > 100){
				std::cout<<"El dato ingresado no es correcto"<<std::endl;
			}
		}while(edad[indice] < 0 || edad[indice] > 100); //validacion
		
		std::cout<<"Ingrese nombre: ";
		
		fflush(stdin);
		std::getline(std::cin,nombre[indice]);
		
		indice++;
		
		std::cout<<"Desea ingresar otro registro?(S/N) ";
		std::cin>>opcion;
	}while(opcion=='S');
	
	std::cout<<std::endl<<"Listado de personas:"<<std::endl;
	for(int i=0;i<indice; i++){
		std::cout<<i+1<<".- "<<nombre[i]<<" - "<<edad[i]<<" anios"<<std::endl;
	}
	
	return 0;
}
