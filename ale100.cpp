/*Escribir un programa que genere un n�mero aleatorio entre 1 y 100, y luego pida al usuario que adivine el n�mero.
Cada vez que el usuario ingrese un n�mero, el programa debe informar al usuario si su respuesta es mayor, menor o igual al n�mero aleatorio.
El programa debe terminar cuando el usuario adivine el n�mero correcto y mostrar� cuantos intentos ha realizado.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int num;
    cout<<"Digite un numero: ";
    cin>>num;
    int i=0;

	
	if(num>=0){
		std::cout<<"Es Mayor";	
	}
	else {
		std::cout<<"Es Menor";
}
    srand(time(NULL));
    num = (rand()%100)+1;
    cout << num;
    
    return 0;
}
