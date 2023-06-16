#include <iostream>

using namespace std ; 

struct Nodo{
    int valor ; 
    Nodo*sig; 
}; //* no olvides el puto punto y coma de la estructura media pinche hora por esto :P 
int main(){
    int numero; 
    Nodo* cabeza = nullptr; // * es es la cabeza del nodo 

    ///* creamos el primer nodo 
    Nodo* nodo = new Nodo(); 
    nodo->valor = 7 ; 
    nodo->sig = nullptr; 
    cabeza = nodo; 

    //* crearemos el segundo nodo 
    Nodo* nodo2 = new Nodo(); 
    nodo2->valor=19; 
    nodo2->sig = nullptr; 
    nodo->sig= nodo2; 

    // * por el momento lo dejaremos en dos nodos solo pa que corra 
    // * tratare de explicarlo de la forma mas sencilla posible 
    Nodo* nodoActual = cabeza;
    while (nodoActual != nullptr) {
        cout << nodoActual->valor << " ";
        nodoActual = nodoActual->sig;
    }


    return 0; 
}