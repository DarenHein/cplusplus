// todo Ejercicio 1: Intercambio de valores
// todo Escribe un programa que solicite al usuario ingresar dos números enteros. Luego, utiliza apuntadores para intercambiar los valores de los números ingresados. Por último, muestra en pantalla los valores intercambiados.

#include <iostream>

using namespace std ; 

int numero ; // 10 
int numero2; // 12 
int acumulador ; 
int * apuntador ; 
int * apuntador2; 

int main (){

    cout << "Ingresa el numero -> " ; 
    cin >> numero ; 
    cout << "Inmgresa el numero -> "; 
    cin >> numero2; 

    apuntador = &numero; 
    apuntador2 = &numero2; 
    acumulador = numero; 
    numero = numero2; 
    numero2 = acumulador; 
    cout << *apuntador << endl ; 
    cout << *apuntador2 << endl; 



    return 0; 
}