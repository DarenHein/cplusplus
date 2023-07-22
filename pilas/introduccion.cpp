// todo introduccion alas pilas en c++
// todo las pilas son colecciones de datos que aplican la de "El ultimo es el primero"
// todo imagniarselo como una pila de platos el ultimo plato que pones es el primero que tomas 
// todo ahora un ejemplo de pilas 
#include <iostream>
#include <stack> // todo primero importar la libreria stack 
using namespace std ; 

int main(){

    stack<int> mipila; // todo declaramos el nombre y tipo de la pila 
    mipila.push(20); // todo agregamos elemento ala pila 
    mipila.push(30); 

    int elementosuperior = mipila.top(); // todo  asignamos el ultimo elemnto en una variable apra mostrarla 
    cout << elementosuperior << endl ; // todo como abremos notadod el ultimo elemnto es 30 por qye fue el ultimo elemnto en ser ingresado 

    mipila.pop(); // todo elimina el ultimo elemento en este caso 30 
    int ulitmo = mipila.top(); 
    cout << ulitmo << endl ; 
    mipila.pop(); 
    if(mipila.empty()){ // todo comprobar si la pila esta vacia 
        cout << "pila vacia" << endl ; 
    }else {
        cout << "la pila no esta vacia " << endl ; 
    }
    int tamaño = mipila.size(); 
    cout << tamaño << endl; 
    

    return 0; 
}