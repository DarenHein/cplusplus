#include <iostream>
using namespace std ; 

struct Nodo{
    int valor ; 
    int* siguiente ; 
}; 


int main (){

    int numero ; 
    int numero2 ; 
    Nodo * cabeza = nullptr; 

    // ? creamos el primer nodo 
    Nodo* nodo = new Nodo(); 
    cout << "Ingresa el valor del numero -> " ; 
    cin >> numero ; 
    nodo->valor = numero; 
    nodo->siguiente = nullptr; 
    cabeza = nodo ; 

    // ? creacion del siguiente nodo 
    Nodo* nodo2 = new Nodo(); 
    cout << "Ingresa el segundo valor -> " ; 
    cin >> numero2; 
    nodo2->valor = numero2; 
    nodo2->siguiente = nullptr; 
    nodo->siguiente = nodo2 ;

    // ? ahora mostrar los nodos 
    Nodo* actual = cabeza ; // ? creamos el nodo

    while (actual != nullptr ){
        cout << actual->valor ;
        actual = actual->siguiente; 

    } 




    return 0; 
}


