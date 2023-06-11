// todo Ejercicio 2: Suma de elementos de un arreglo
// todo Crea un arreglo de enteros de tamaño fijo y pide al usuario que ingrese los valores. Luego, utiliza un apuntador para recorrer el arreglo y sumar todos los elementos. Finalmente, muestra en pantalla la suma obtenida.

#include <iostream>
using namespace std; 

int arreglo[5] ; 
int * apuntador ; 
int acumulador = 0 ; 

int main(){
    apuntador = &acumulador; 
    for(int i = 0 ; i < 5 ; i ++ ){
        cout << "Ingresa los elementos del arreglo -> "; 
        cin >> arreglo[i]; 
        acumulador = acumulador + arreglo[i]; 
    }
    cout << "la suma de los elementos del arreglo es -> " << *apuntador << endl ; 
    cout << "Su ubicacion en memoria es -> " << apuntador << endl ; 



    return 0;
}