#include <iostream>

using namespace std;

class Nodo { 
public:
    string nombre; 
    int edad ; 
    string sexo; 
    int matricula; 
    string direccion; 
    Nodo* siguiente;
};

int main() {
    int numero; 
    string nom; 
    string sex; 
    string direc;
    int matri; 
    Nodo* cabeza = nullptr; 
    cout << "Primer Estudiante " << endl ; 
    Nodo* nodo1 = new Nodo(); 
    cout << "Ingresa tu nombre -> "; 
    cin >> nom; 
    cout << "Ingresa tu edad -> "; 
    cin >> numero; 
    cout << "Ingresa tu sexo -> " ; 
    cin >> sex ; 
    cout << "Ingresa tu direccion-> " ; 
    cin >> direc ; 
    cout << "Ingresa tu matricula-> " ; 
    cin >> matri ; 
    nodo1->edad = numero ; 
    nodo1->nombre  = nom ; 
    nodo1->sexo = sex; 
    nodo1->direccion = direc; 
    nodo1->matricula = matri; 
    nodo1->siguiente = nullptr; 
    cabeza = nodo1; 

    cout << "Segundo Estudiqante " << endl; 
    Nodo* nodo2 = new Nodo();
    cout << "Ingresa tu nombre -> "; 
    cin >> nom; 
    cout << "Ingresa tu edad -> "; 
    cin >> numero; 
    cout << "Ingresa tu sexo -> " ; 
    cin >> sex ; 
    cout << "Ingresa tu direccion-> " ; 
    cin >> direc ; 
    cout << "Ingresa tu matricula-> " ; 
    cin >> matri ; 
    nodo2->edad = numero;
    nodo2->nombre  = nom ; 
    nodo2->sexo = sex; 
    nodo2->direccion = direc; 
    nodo2->matricula = matri;
    nodo2->siguiente = nullptr;
    nodo1->siguiente = nodo2;

    cout << "Tercer estudiante " << endl ; 
    Nodo* nodo3 = new Nodo();
    cout << "Ingresa tu nombre -> "; 
    cin >> nom; 
    cout << "Ingresa tu edad -> "; 
    cin >> numero; 
    cout << "Ingresa tu sexo -> " ; 
    cin >> sex ; 
    cout << "Ingresa tu direccion-> " ; 
    cin >> direc ; 
    cout << "Ingresa tu matricula-> " ; 
    cin >> matri ; 
    nodo3->edad = numero;
    nodo3->nombre  = nom ; 
    nodo3->sexo = sex; 
    nodo3->direccion = direc; 
    nodo3->matricula = matri;
    nodo3->siguiente = nullptr;
    nodo2->siguiente = nodo3;

    cout << "Personas Registrada"<< endl ; 
    Nodo* nodoActual = cabeza;
    while (nodoActual != nullptr) {
        cout <<"Nombre -> " << nodoActual->nombre << " ";
        cout << "\n" ; 
        cout <<"Edad -> "<< nodoActual->edad << " ";
        cout << "\n" ; 
        cout <<"Sexo -> " << nodoActual->sexo<< " ";
        cout << "\n" ; 
        cout <<"Direccion -> " << nodoActual->direccion<< " ";
        cout << "\n" ; 
        cout << "Matricula -> " << nodoActual->matricula<< " ";
        cout << "\n" ; 
        nodoActual = nodoActual->siguiente;
    }
    cout << endl;


    return 0;
}