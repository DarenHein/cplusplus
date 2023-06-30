/*
Ejercicio de creación de nodos:

Crea un programa en C++ que cree tres nodos y los enlace en una lista enlazada. Asigna los valores 10, 20 y 30 a los nodos y muestra los datos de cada nodo en pantalla.

*/

#include <iostream>
using namespace std; 

struct Nodo
{
    /* data */
    int valor ; 
    Nodo* siguiente; 
};
int main(){

    int numero = 10 ; 
    int numero2 = 20 ; 
    int numero3 = 30 ; 

    Nodo* uno = new Nodo(); 
    uno->valor = numero; 

    Nodo* dos = new Nodo(); 
    dos->valor = numero2; 

    Nodo* tres = new Nodo(); 
    tres->valor = numero3; 

    uno->siguiente = dos ; 
    dos->siguiente = tres; 
    tres->siguiente = nullptr; 

    Nodo* actual = uno ; 

    while(actual != nullptr){
        cout << actual->valor << endl ; 
        actual = actual->siguiente; 
    }


    return 0 ; 
}
