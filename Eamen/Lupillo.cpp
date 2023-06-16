#include <iostream>
using namespace std; 

int main(){

    // * vamos a hacer arreglos unidimencionles por mes 
    int filas  = 3; 
    int columnas = 3 ; 
    int acumulador = 0 ; 
    int mes = 0 ; 
    int mes2 = 0 ; 
    int mes3 = 0 ;
    int x = 0 ;  

    int matriz[filas][columnas]; 

    cout << "\n" << endl ; 

    cout << "Tienda de algo :D " << endl ; 

    for (int i = 0 ; i < filas ; i++){
        for (int j = 0 ; j < columnas ; j++){
           cout << "Ingresa la venta del mes no -> " << i+1 << " -> " ; 
            cin >> matriz[i][j]; 
            

        }
        cout << "\n" ; 
    }
    cout << "\tEnero--Febrero--Marzo "<< endl ; 
    // * imprimir la matriz alv
     for (int i = 0 ; i < filas ; i++){
        for (int j = 0 ; j < columnas ; j++){
            cout << "\t" << matriz[i][j]; 
            acumulador  = acumulador + matriz[i][j]; 
            switch(i){
                 case 0 : 
                 mes = mes + matriz[i][j]; 
                 break;
                 case 1 : 
                 mes2 = mes2 + matriz[i][j]; 
                 break;
                 case 2 : 
                 mes3 = mes3 + matriz[i][j]; 
                 break;
            }


        }
        cout << "\n" ; 
    }
    cout << "------------------------------------" << endl ; 
    // * salida de datos 
    cout << "Total -> " << acumulador << endl ; 
    cout << "Venta de Enero -> " << mes << endl ; 
    cout << "Venta de Febrero -> " << mes2 << endl ; 
    cout << "Venta de Marzo -> " << mes3 << endl ; 
    
    if (mes > mes2 && mes > mes3) {
        cout << "La venta mas alta es la de Enero: " << mes << endl;
    } else if (mes2 > mes && mes2 > mes3) {
        cout << "La venta mas alta es la de Febrero: " << mes2 << endl;
    } else if (mes3  > mes && mes3  > mes2) {
        cout << "La venta mas alta es la de Marzo: " << mes3 << endl;
    } else {
        cout << "Los tres mese comparten las mismas ventas " << endl;
    }


    return 0; 
}