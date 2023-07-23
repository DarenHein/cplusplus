#include <iostream>

using namespace std; 

int main(){

    // suma de matrices 3x3 
    int filas =  3 ; 
    int columnas =  3 ; 
    int matriz[filas][columnas]; 
    int matriz2[filas][columnas]; 
    int resultado[filas][columnas]; 

    for (int i = 0 ; i < filas ; i ++ ){
        for (int j = 0 ; j < columnas ; j++){
            cout << "Ingresa los elementos de la matriz -> "; 
            cin >> matriz[i][j]; 
        }
    }
    cout << "Rellena la matriz 2 " << endl ; 

    for (int i = 0 ; i < filas ; i ++ ){
        for (int j = 0 ; j < columnas ; j++){
            cout << "Ingresa los elementos de la matriz -> "; 
            cin >> matriz2[i][j]; 
        }
    }

    for (int i = 0 ; i < filas ; i ++ ){
        for (int j = 0 ; j < columnas ; j++){
            resultado[i][j] = matriz[i][j] + matriz2[i][j]; 
        }
    }
    cout << "El resultado de la matriz es -> " << endl ; 
    for (int i = 0 ; i < filas ; i ++ ){
        for (int j = 0 ; j < columnas ; j++){
            cout << resultado[i][j];
        }
        cout << "\n"; 
    }




    return 0 ; 
}

