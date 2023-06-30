#include <iostream>
using namespace std ; 

struct Nodo
{
    /* data */
    int valor ; 
    Nodo* siguiente; 
};

int main(){

    Nodo* nodo1 = new Nodo(); 
    nodo1->valor = 7; 

    Nodo* nodo2 = new Nodo(); 
    nodo2->valor = 9; 

    Nodo* nodo3 = new Nodo(); 
    nodo3->valor = 10 ; 

    // todo 
    nodo1->siguiente = nodo2; 
    nodo2->siguiente = nodo3; 
    nodo3->siguiente = nullptr; 

    Nodo* actual = nodo1; 

    while(actual != nullptr){
        cout << actual->valor << endl; 
        actual = actual->siguiente ; 
    }


    
    return 0 ; 
}
