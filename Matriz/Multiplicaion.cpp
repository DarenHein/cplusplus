#include <iostream>
using namespace std ; 

int main (){

    int filas ; 
    int columnas ; 
    int filas2 ; 
    int columnas2 ; 
    int filas3; 
    int columnas3; 

    cout << "ingresa el numero de filas -> "; 
    cin >> filas ; 
    cout << "Ingresa el nuemro de columnas -> "; 
    cin >> columnas ; 
    if (filas == columnas){

        cout << "Ingresa las filas de la segunda matriz -> " ; 
        cin >> filas2; 
        cout << "ingresa las columnas de la segunda matriz -> "; 
        cin >> columnas2; 
        if (filas2 == columnas2){
            filas3 = filas ; 
            columnas3 =  columnas ; 
            int matriz[filas][columnas]; 
            int matriz2[filas2][columnas2]; 
            int matriz3[filas3][columnas3]; 
            for (int i = 0 ;   i < filas ; i++){
                for (int j =  0 ; j < columnas ; j++){
                    cout << "Ingresa los elementos de la primera matriz -> " ; 
                     cin >> matriz[i][j]; 
                }
            }
            // llenado de la segunda matriz 
            cout << "Matris 2 "; 
            for (int i = 0;  i < filas2 ; i ++){
                for (int j =  0 ; j < columnas2 ; j++){
                    cout << "Ingresa los elementos de la primera matriz -> " ; 
                    cin >> matriz2[i][j]; 
                }
            }

            cout << "MAtriz resultante " << endl ; 
            for (int i = 0 ;  i < filas ; i++ ){
                for (int j = 0 ; j < columnas ; j ++){
                    matriz3[i][j] = matriz[i][j] * matriz2[i][j]; 
                }
            }
            cout << "el resultado de la matris es -> " ; 
            for (int i = 0 ;  i < filas ; i++ ){
                for (int j = 0 ; j < columnas ; j ++){
                    cout << matriz3[i][j]; 
                }
                cout << ""; 
            }
        }else {
            cout << "Para multiplicar la matriz ambas deben de ser simetricas :S " << endl ; 
        }

    } else {
        cout << "Para multiplicar la matris se debe de ser simetrica :D " << endl ; 
    }


    return 0 ; 
}