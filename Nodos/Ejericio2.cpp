/*
Ejercicio de inserción de nodos:
Crea un programa en C++ que permita al usuario insertar un nodo al inicio de una lista enlazada. El programa debe solicitar al usuario un valor entero, crear un nuevo nodo con ese valor y enlazarlo al inicio de la lista. Luego, muestra los datos de todos los nodos de la lista en pantalla.
*/

#include <iostream>
using namespace std ; 

struct Nodo
{
    /* data */
    int valor ; 
    Nodo* sig; 
};

int main(){

    int num ; 
    string nombre; 
    int op ; 
    int num2 ; 
    int num3 ; 

    Nodo* uno = new Nodo();
    Nodo* dos = new Nodo();
    Nodo* tres = new Nodo();

    cout << "cuantos nodos " << endl ; 
    cin >> op ; 

    switch (op)
    {
    case 1 :
        cout << "Ingresa el valor : " << endl ; 
        cin >> num ; 
        uno->valor = num ; 
        cout << "Nodo creado" << endl ; 
        cout << uno->valor ;
        break;
    case 2 :
        cout << "Ingresa el valor : " << endl ; 
        cin >> num ; 
        uno->valor = num ; 

        cout << "Ingresa el valor : " << endl ; 
        cin >> num2 ; 
        dos->valor = num2 ; 

        uno->sig = dos ; 
        dos->sig = nullptr; 

        Nodo* actual = uno ; 
        while(actual != nullptr){
            cout << actual->valor ; 
            actual = actual->sig; 
        }
        
        
        break;
         
    
    default:
        cout << "Solo se pueden crear 3 nodos "; 
        break;
    }

    
    


    return 0; 
}
