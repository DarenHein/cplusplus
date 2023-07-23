// matriz traspuesta 


#include <iostream>

using namespace std ; 

int main(){

    int filas =  3 ; 
    int columnas =  3 ; 
    int matriz[filas][columnas]; 

    for(int i = 0 ; i < filas ; i ++){

        for (int j = 0 ; j < columnas ; j++){

            cout << "Ingresa el elemento de la matriz -> " ; 
            cin >> matriz[i][j]; 
        }
    }

    cout << "Matriz normal " << endl ; 

    for (int  i = 0 ; i < filas ; i ++){
        for (int j = 0 ; j < columnas ; j++){
            cout << matriz[i][j]; 
        }
        cout << "\n"; 
    }

    cout << "Matriz Traspuesta " << endl ; 

    for (int  i = 0 ; i < filas ; i ++){
        for (int j = 0 ; j < columnas ; j++){
            cout << matriz[j][i] ; 
        }
         cout << "\n"; 
    }



    return 0; 
}