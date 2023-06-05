// are un prototipo de matriz con cvalores intercaldados 
#include <iostream>
using namespace std; 

int main(){

    int filas ; 
    int columnas ; 
    int elementos ; 
    cout << "Ingresa el numero de filas -> " ; 
    cin >> filas ; 
    cout << "ingresa el numero de columnas -> "; 
    cin >> columnas ; 
    elementos =  filas + columnas ; 
    int array[elementos]; 
    int matriz[filas][columnas]; 
    for (int i = 0 ; i < filas ; i ++ ){
        for (int j = 0 ; j < columnas ; j ++ ){
            cout << "Ingresa el elemento ["<< i<< "] ["<< j<< "] -> "; 
            cin >> matriz[i][j]; 
        }
    }
    // ahora solo imprimo el elemento uno de la matriz 
    cout << matriz[0][0]; 
    cout << matriz[0][1]; 
    cout << matriz[1][0]; 
    cout << matriz[1][1]; 
    cout << " \n " ; 
   // array[0] = matriz[0][0]; 
   // cout << "Imprimimos el arreglo que contienen el primer elemento de la matriz " << endl ; 
   // cout << array[0]; 
   int elementos2 = 0 ; 
   for (int i = 0 ; i < filas ; i ++){
    for (int j = 0 ; j < columnas ; j ++){
         matriz[i][j] = array[elementos2++]; 
    }
   }
   for (int i = 0 ; i < elementos ; i ++ ){
    cout << array[i] << endl ; 
   }

    return 0; 
}