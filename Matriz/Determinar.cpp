#include <iostream>

using namespace std; 

int main(){
    // determinar si una matris es simetrica a su traspuesta 
    int filas ;  
    int columnas ;
    bool bande =  false ; 
    cout << "Ingresa el numero de filas -> " << endl ; 
    cin >> filas ; 
    cout << "Ingresa el numero de columnas -> " << endl; 
    cin >> columnas ;   
    int matriz[filas][columnas]; 

    for (int i = 0 ; i < filas ; i ++){
        for (int j = 0 ; j < columnas ; j++){
            cout << "Ingresa los elementos de la matriz -> "; 
             cin>> matriz[i][j]; 
        }
    }
    // mostramos la matris 
    cout << "Matriz original -> " << endl ; 
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j< columnas ; j++){
            cout << matriz[i][j]; 
        }
        cout << "\n"; 
    }
    // compramos si la matris es igaul que su matriz traspuesta 
    if (filas == columnas){
        for (int i = 0 ; i < filas ;  i ++){
            for (int j = 0 ; j < columnas ; j ++ ){
                if (matriz[i][j] == matriz [j][i]){
                    bande =  true ; 
                }
            }
        } 
    }
    if (bande == true) {
        cout << "La matris es simetrica " ; 
    }else {
        cout << "La matris no es simetrica " ; 
    }




    return 0; 
}