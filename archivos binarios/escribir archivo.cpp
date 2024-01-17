#include<iostream>
#include<fstream>

struct Dato{
	int codigo;
	char letra;
	char nombre[50];
};

int main(){
	std::ofstream archivo_escritura("datos.bin", std::ios::binary);
	
	//verificamos que se haya creado el archivo
	if(!archivo_escritura){
		//si no se creó el archivo
		std::cout<<"No se pudo abrir el archivo para escritura";
		return 1;
	}
	
	//definir instancia de datos
	Dato datos_escritura = {1,'J', "Jose Miguel"};
	//Imprimir en el archivo
	archivo_escritura.write(reinterpret_cast<const char*>(&datos_escritura), sizeof(datos_escritura));
	
	
	Dato datos_escritura2 = {2,'M', "Maria Cristina"};
	archivo_escritura.write(reinterpret_cast<const char*>(&datos_escritura2), sizeof(datos_escritura2));
	
	archivo_escritura.close();
	std::cout<<"Se escribieron los datos en el archivo";
	return 0;
}

