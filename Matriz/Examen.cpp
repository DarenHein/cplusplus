#include <iostream>
using namespace std ; 

int main (){

    int filas ;
    int columnas ;
    int auxilar ;

    cout << "Ingresa el numero de filas ";
    cin >> filas ; 
    auxilar = filas ; 
    columnas = auxilar; 
    int matriz [filas ][ columnas ];

    for (int i = 0 , i < filas , i ++ ){
        for (int j = 0 , j < columnas , j ++){
            cout << "Ingresa el numero las ventas -> " <<  i + 1 << endl ;
            cin >> matriz[i][j];
        }
    }




    return 0;
}