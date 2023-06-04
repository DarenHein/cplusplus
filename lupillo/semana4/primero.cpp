#include <iostream>
using namespace std;

int main(){

    cout << "Matriz traspuesta";
    int filas ; 
    int columnas ; 
    int op; 
    
        cout << "Ingresa el nuemro de filas -> "; 
        cin >> filas; 
        cout << "Ingresa el numero de columnas -> "; 
        cin>> columnas; 
        int matriz[filas][columnas]; 
        int matriz2[filas][columnas]; 
        // rellenar la matriz 
        for (int i = 0 ; i < filas ; i ++ ){
            for (int j = 0 ; j < columnas ; j ++ ){
                cout << "Ingresa los elementos -> ["<<i<<"]["<<j<<"] -> "; 
                cin >> matriz[i][j]; 
            }
        }
        // acomodar matriz 
        cout << "LA matriz a sido llenada con exito ahora se va a acomodar :D " << endl ; 

         for (int i = 0 ; i < filas ; i ++ ){
            for (int j = 0 ; j < columnas ; j ++ ){
              cout << matriz[i][j]; 
            }
            cout << "\n"; 
        }
        // ordenamiento de la matriz 
        for (int i = 0 ; i < filas ; i ++ ){
            for (int j = 0 ; j < columnas ; j ++ ){
              if (matriz[i][j] > matriz[i][j+1]){
                matriz2[i][j] = matriz[j][i]; 
              }
            }
        }
        cout << "Matriz acomodada :D " << endl ; 
        for(int i=1; i<=filas; i++){

            for(int j=1; j<=columnas; j++){
            for(int x=1; x<=filas;x++){
                for(int y=1; y<=columnas; y++){
                    if(matriz[i][j]<matriz[x][y]){
                       int mayor=matriz[i][j];
                        matriz[i][j]=matriz[x][y];
                        matriz[x][y]=mayor;
                    }
                }
            }
        
        }
        


        

    return 0; 
}