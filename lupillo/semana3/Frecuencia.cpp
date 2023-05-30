#include <iostream>
using namespace std ; 
//#define tamanio_respuesta 10
//#define tamanio_frecuencia 10
int main(){
    int rspuesta;
    int rango; 
    int k ; 
    int A; 
    int mayor  ; 
    int minimo ; 
    int tamanio = 10; 
    int tamanio2 = 10; 
    int frecuencia[tamanio];
    int rspuestas[tamanio2];

    mayor =  frecuencia[0]; 
    minimo = frecuencia[0]; 
    
    // calcular el rango con los 40 datos obtebudis 
    for (int i = 0 ; i < tamanio ; i ++){
        cout << "Ingresa los elementos -> "; 
        cin >> frecuencia[i]; 
        //mayor = frecuencia[i]; 
          if (frecuencia[i]<=minimo)
         {
            minimo=frecuencia[i];
         }
         else if (frecuencia[i]>=mayor)
        {
            mayor=frecuencia[i];
        }

    }
    cout << mayor << endl ; 
    cout << minimo << endl ;
    rango = mayor - minimo ; 
    cout << "El Rango es -> " << rango << endl ; 
    cout << "Ahora calcularemos la frecuencia : D " << endl ;   
    k =  1 + (3.3+3); 
    cout << "amplitudad -> " << k << endl ;
    A = rango/k; 
    cout << "Amplitud -> " << A << endl ; 




return 0;
}

