/*
Ejercicio 1 - Introducción a las Pilas:
Crea un programa que simule una pila de números enteros. El programa debe permitir al usuario realizar las siguientes operaciones:

    Insertar un número en la pila.
    Eliminar un número de la parte superior de la pila.
    Mostrar el número en la parte superior de la pila (sin eliminarlo).
    Mostrar el tamaño actual de la pila.
    Salir del programa.

Puedes usar un menú de opciones para que el usuario elija qué operación realizar y mostrar mensajes apropiados después de cada operación.
*/
#include <iostream>
#include <stack>

using namespace std; 

int main(){
    int numeros ; 
    int agregar ; 
    int op ; 
    int tamaño ; 
    int ultimo ; 
    stack <int> pila; 
    pila.push(1); 
    pila.push(2); 
    cout << "Programa de numeros " << endl; 
    cout << "1 Insertar numeros " << endl ; 
    cout << "2 Eliminar ultimo numero registrado " << endl ; 
    cout << "3 Mostrar ultimo numero registrado " << endl ; 
    cout << "4 Mostrar el tamaño actual de la pila " << endl ; 

    cout << "Digita tu opcion -> " << endl ; 
    cin >> op; 

    switch(op){
        case 1 : 
        cout << "Inserta un numero en la pila " << endl ; 
        cin >> agregar; 
        pila.push(agregar); 
        cout << "numero ahgreado con exito " << endl ; 
        break;
        case 2 : 
        cout << "Eliminar el ultimo numero registrado " << endl ; 
        pila.pop();
        cout << "Ultimo numero registrado eliminado con exito " << endl ; 
        break; 
        case 3 : 
        cout << "Mostrar el ultimo numero registrado " << endl ; 
        ultimo = pila.top(); 
        cout << ultimo << endl ; 
        break ; 
        case 4 : 
        cout << "Motrar tamaño de lia fila restante " << endl ; 
        tamaño = pila.size(); 
        cout << tamaño << endl ; 
        break; 
    }


    return 0 ; 
}