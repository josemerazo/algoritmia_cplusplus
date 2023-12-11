/*
Escribe un programa que solicite al usuario ingresar tres numeros enteros.
Utiliza condicionales para determinar e imprimir el mayor de los tres numeros.
Considere todas las combinaciones posibles.
*/

#include<iostream>

int main(){
	int num1, num2, num3;
	std::cout<<"Digite un numero: ";
	std::cin>>num1;
	std::cout<<"Digite un segundo numero: ";
	std::cin>>num2;
	std::cout<<"Digite un tercer numero: ";
	std::cin>>num3;
	
	if(num1 >=0){
		std::cout<<"Es mayor el primer numero";
	else{
	if(num2 >0)
		std::cout<<"Es mayor el segundo numero";
	else{
	if(num3>0)
		std::cout<<"Es mayor el tercer numero";
		}		
}
return 0;
}
