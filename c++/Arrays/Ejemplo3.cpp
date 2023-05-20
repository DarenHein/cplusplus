#include <iostream>

using namespace std; 

int main(){

    int elementos ; 
    cout << "Ingresa el numero de elementos del arreglo -> "; 
    cin >> elementos ; 

    int arreglo[elementos]; 

    for (int i = 0 ; i < elementos ; i ++){
        cout << "ingresa el elemento -> "; 
        cin >> arreglo[i]; 
    }
    cout << "Mostrar elemeneto ala inversa " << endl; 

    for (int i = elementos ; i >= 0 ; i --  ){
        cout << arreglo[i] << endl ; 
    }

    return 0; 
}