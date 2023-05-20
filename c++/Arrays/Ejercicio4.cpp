// array de numeros que diga cual es el mayor del arreglo 

#include <iostream>

using namespace std ; 

int main(){
    int elementos; 
    int mayor; 
    cout << "Ingresa el numero de elemetos del arreglo -> "; 
    cin >> elementos ; 
    int numeros[elementos]; 
    for (int i = 0 ; i < elementos ; i++){
        cout << "Ingresa el elemento -> "; 
        cin >> numeros[i]; 
    }
    cout << "Clasificacion de los elementos del arreglo "; 
    for (int i = 0 ; i < elementos ; i ++){
        if (numeros[i] < numeros[i]){
            mayor = numeros[i]; 
        }else {
            mayor = numeros[i] ; 
        }
    }
    cout << " el numero mayor del arreglo es " << mayor << endl; 


    return 0; 
}