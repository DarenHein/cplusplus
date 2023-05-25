#include <iostream>

using namespace std; 

int main(){

    int filas ; 
    int columnas ; 

    cout << "ingresa las filas de la matriz -> " ; 
    cin >> filas ; 
    cout << "Ingresa las columnas de la matriz -> "; 
    cin >> columnas; 

    int matris[filas][columnas]; 

    for (int i = 0 ; i < filas ; i ++){
        for(int j = 0 ; j < columnas ; j++){
            cout << "Inrgesa elementos que conformara la matris -> " ; 
            cin >> matris[i][j]; 
        }
    }
    cout << "Mostrar la matriz " << endl ; 

    for (int i = 0 ;i < filas ; i++){
        for (int j = 0 ; j < columnas ; j++){
            cout << matris[i][j]; 
        }
    }


    return 0;
}