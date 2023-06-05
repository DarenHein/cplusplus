#include <iostream>
#include <algorithm>

using namespace std; 

int main() {
    int filas =  2 ; 
    int columnas  = 2 ; 

    int matriz[filas][columnas]; 

    for(int i = 0 ; i < filas ; i ++ ){
        for (int j = 0 ; j < columnas ; j++){
            cout << "Ingresa los elementos -> "; 
            cin >> matriz[i][j]; 
        }
    }

    
    int arre[4];
    int dimension = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            arre[dimension++] = matriz[i][j];
        }
    }

    sort(arre, arre + 4);

  
    dimension = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz[i][j] = arre[dimension++];
        }
    }

   
     cout << "Matriz ordenada de menor a mayor:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}