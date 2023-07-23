#include <iostream>; 
using namespace std ;

struct Nodo
{
    int valor ; 
    Nodo* siguiente; 
};

int main(){

    int numero ; 
    Nodo * cabeza = nullptr; 

     // ? creacion del primer nodo 
     Nodo * nodo = new Nodo(); 
     cout << "Ingresa el valor del nodo -> " ; 
     cin >> numero ; 
     nodo->valor = numero; 
     nodo->siguiente = nullptr; 
     cabeza = nodo; 

     // ? creacion del segundo nodo 
     Nodo* nodo2 = new Nodo()


    return 0; 
}
