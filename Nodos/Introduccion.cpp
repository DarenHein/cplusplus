#include <iostream>

//* las listas enlazadas o nodos son estructuras de datos , estas nos las podemos imaginar como una caja que contiene un valor y mas aparte tiene una flecha que apunta al siguiente caja y asi hasta llegar ala final que esta apunta a nulo 

using namespace std;

class Nodo { // * se crea una clase publica de nodos con dos variables una de tipo entero con el valor que se le dara al nodo y un de tipo apuntador de tipo nodo que contiene siguiente 
public:
    int valor;
    Nodo* siguiente;
};

int main() {
    int numero ; 
    Nodo* cabeza = nullptr; // * cabeza apunta a nulo 

    // !Crear el primer nodo
    Nodo* nodo1 = new Nodo(); // *creamos el apuntador 
    cout << "Ingresa el valor pra el nodo -> "; 
    cin >> numero; 
    nodo1->valor = numero ; // * valor del nodo 
    nodo1->siguiente = nullptr; //* apuntamos a nulo 
    cabeza = nodo1; // * cambiamos la direccion de memoria 

    // Crear el segundo nodo
    Nodo* nodo2 = new Nodo();
    nodo2->valor = 7;
    nodo2->siguiente = nullptr;
    nodo1->siguiente = nodo2;

    // Crear el tercer nodo
    Nodo* nodo3 = new Nodo();
    nodo3->valor = 5;
    nodo3->siguiente = nullptr;
    nodo2->siguiente = nodo3;

    // Recorrer e imprimir los valores de la lista
    Nodo* nodoActual = cabeza;
    while (nodoActual != nullptr) {
        cout << nodoActual->valor << " ";
        nodoActual = nodoActual->siguiente;
    }
    cout << endl;

    // Liberar la memoria
    delete nodo1;
    delete nodo2;
    delete nodo3;

    return 0;
}