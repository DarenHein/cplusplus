/*
los nodos en en c++ son estrcuturas de datos 
hay que imahinarlos como una cajas conecatdos por hilos las cajas corresponden alas variables y los hilos serian los apuntadores cada caja apunta a otra caja 

*/
#include <iostream>
using namespace std;

struct Nodo
{
    /* data */
    int valor ; 
    Nodo* siguiente ; 
};
int main (){
    Nodo* nodo1 = new Nodo;
    Nodo* nodo2 = new Nodo; 
    Nodo* nodo3 = new Nodo; 

    //todo darle valor a las cajas(variables)
    nodo1->valor = 1 ; 
    nodo2->valor = 2 ; 
    nodo3->valor = 3 ;  
    // todo darle la direccion 
    nodo1->siguiente = nodo2; 
    nodo2->siguiente = nodo3; 
    nodo3->siguiente = nullptr; 
    // todo mostrar todos los nodos 
    Nodo* actual = new Nodo; 
    actual = nodo1; 
    while(actual != nullptr){
        cout << actual->valor << endl ; 
        actual = actual->siguiente; 
    }

}