#include <iostream>
using namespace std ; 

int main (){

    // rpogrma media moda mediana 
    int acum  = 0 ; 
    int igual ; 
    int acum ; 
    float mo ; 
    int op ; 
    int elementos =  10; 
    float numeros[elementos] ; 

    do{
         for (int i = 0 ; i < elementos ; i ++){
        cout << "Ingresa los elementos del arreglo -> "; 
        cin >>  numeros[i]; 
    }
    cout << "Media"; 
    for(int i = 0 ; i < elementos ; i ++){
        acum = acum + numeros[i]; 
    }
    acum =  acum / elementos; 
    cout << "La media es -> " << acum << endl ; 
    igual = numeros[0]; 
    cout << "Moda" << endl ; 
    for (int i = 0 ; i < elementos ; i ++){
        if (igual == numeros[i+1]){
            igual = numeros[i]; 
        }
    }
    cout << "La moda es -> " << igual << endl ; 

    cout << "Mediana" << endl; 

    for(int i = 0 ; i < elementos ; i ++ ){
        for (int j = 0;  j < elementos ; j++ ){
            if (numeros[j] > numeros[j+1]){
                acum =  numeros[j]; 
                numeros[j] = numeros[j+1]; 
                numeros[j+1] = acum; 

            }
        }
    }

    


    cout << "deseas repetir la opcion "<< endl ; 
    cout << "1 si "<< endl; 
    cout << "2 no " << endl; 
    cin >> op ; 
    }while(op != 2); 



    return 0; 
}