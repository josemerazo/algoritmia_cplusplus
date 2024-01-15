#include<iostream>
#include<fstream>
using namespace std;

void escribir(){	
	ofstream archivo_salida("archivo.txt");
	if(archivo_salida.is_open()){
		archivo_salida << "Hola mundo!"<<endl;
		archivo_salida << "Bienvenidos al uso de archivos";
		archivo_salida.close();
	}
	else{
		cout<<"Error al abrir el archivo";
	}
}

void leer(){
	ifstream archivo_entrada("archivo.txt");
	if(archivo_entrada.is_open()){
		string linea;
		while(getline(archivo_entrada, linea)){
			cout <<linea <<endl;
		}
		
		cout<<"----------------------------------";
		archivo_entrada.close();
	}	
	else{
		cout<<"Error al abrir el archivo";
	}
}

int main(){
	//escribir();
	leer();
	return 0;
}
