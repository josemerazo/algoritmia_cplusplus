#include<stdlib.h>
#include<iostream>
/*
0 = Negro
1= Azul
2= Verde
3= Aguamarina
4= Rojo
5= P�rpura
6= Amarillo
7= Blanco
8= Gris
9= Azul Claro
A= Verde Claro
B= Aguamarina Claro
C= Rojo Claro
D= P�rpura Claro
E= Amarillo Claro
F= Blanco Brillante
*/
void arbol_navidad(){
	std::cout<<"                *                    "<<std::endl;
	std::cout<<"              * * *                   "<<std::endl;
	std::cout<<"             * * * *                     "<<std::endl;
	std::cout<<"            * * * * *                     "<<std::endl;
	std::cout<<"                *                      "<<std::endl;
}
int main(){

	system("color 17"); //cambiar el color del fondo
	
	std::cout<<"     *        *           *         *       *"<<std::endl;
	std::cout<<"         *           *         *       *"<<std::endl;
	std::cout<<"Bienvenidos vamos a cambiar el color"<<std::endl;
	std::cout<<"     *        *           *         *       *"<<std::endl;
	std::cout<<"         *           *         *       *"<<std::endl;
	system("pause");
	system("color 24"); 
	system("cls"); //limpiar la pantalla
	
	
	arbol_navidad();
	std::cout<<"Chao Feliz Navidad! y prospero anio nuevo 2024";
	return 0;
}
