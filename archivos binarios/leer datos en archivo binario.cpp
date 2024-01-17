#include<iostream>
#include<fstream>

struct Dato{
	int codigo;
	char letra;
	char nombre[50];
};

int main() {
    std::ifstream archivo_lectura("datos.bin", std::ios::binary);

    if (!archivo_lectura) {
        std::cout << "No se pudo abrir el archivo para escritura" << std::endl;
        return 1;
    }

    Dato datos_lectura;

    archivo_lectura.read(reinterpret_cast<char*>(&datos_lectura), sizeof(datos_lectura));
    
    std::cout << "Datos leídos de archivos binarios: " << std::endl;
    std::cout << "Codigo: " << datos_lectura.codigo << std::endl;
    std::cout << "Letra: " << datos_lectura.letra << std::endl;
    std::cout << "Nombre: " << datos_lectura.nombre << std::endl;
    
    
    Dato datos_lectura1;
    archivo_lectura.read(reinterpret_cast<char*>(&datos_lectura1), sizeof(datos_lectura1));
    archivo_lectura.close();

    std::cout << "Datos leídos de archivos binarios: " << std::endl;
    std::cout << "Codigo: " << datos_lectura1.codigo << std::endl;
    std::cout << "Letra: " << datos_lectura1.letra << std::endl;
    std::cout << "Nombre: " << datos_lectura1.nombre << std::endl;

    return 0;
}
