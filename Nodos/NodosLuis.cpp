#include <iostream>
using namespace std ; 

struct Nodo
{
    int valor ; 
    
    Nodo* siguiente; 
};

int main (){

    int numero ; 
    int numero2; 

    Nodo* nodo1 = new Nodo(); 
    cout << "Ingresa el valor del numero -> " ; 
    cin >> numero; 
    nodo1->valor = numero; 

    cout << "Valor del siguiente nodo -> " << nodo1->valor << endl ; 

    Nodo* nodo2 = new Nodo(); 
    cout << "Ingresa otro valor al siguiente nodo -> "; 
    cin >> numero2; 
    nodo2->valor = numero2; 

    cout << "Valor del siguiente nodo -> " << nodo2->valor << endl ; 
     


    return 0 ; 
}
