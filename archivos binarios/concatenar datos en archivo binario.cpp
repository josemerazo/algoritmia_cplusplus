//concatenar archivo
#include <iostream>
#include <fstream>

int main() {
    // Abre el archivo en modo de escritura binaria (append)
    std::ofstream archivo("archivo.bin", std::ios::binary | std::ios::app);

    if (!archivo) {
        std::cerr << "No se pudo abrir el archivo para escritura." << std::endl;
        return 1;
    }

    // Datos que se agregarán al archivo binario
    int nuevo_numero = 99;
    double nuevo_valor = 42.42;

    // Concatena datos al archivo binario
    archivo.write(reinterpret_cast<const char*>(&nuevo_numero), sizeof(nuevo_numero));
    archivo.write(reinterpret_cast<const char*>(&nuevo_valor), sizeof(nuevo_valor));

    archivo.close();

    std::cout << "Datos concatenados al archivo binario." << std::endl;

    return 0;
}
