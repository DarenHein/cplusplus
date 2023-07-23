// el metodo burbuja en pocas palbras es solo acomodar una secuancia de numeros de manor a mayor 
#include <iostream>
using namespace std; 
int main (){

    int elementos = 5 ; 
    int numeros[elementos]; 
    int acum; 

    // llenamos el arreglo 
    for (int i = 0 ; i < elementos ; i ++){
        cout << "Ingresa los elementos del arreglo -> "; 
        cin >> numeros[i]; 
    }
    //  mostraremos el arreglo 
    cout << "Los numeros registrados son los sisguientes -> " << endl ; 
    for (int i = 0 ; i <elementos ; i ++ ){
        cout << numeros[i] << endl; 
    }
    // ahora acomodaremos ese arreglo deserdenado con el metodo burbuja 
    for(int i = 0 ; i < elementos ; i ++ ){
        for (int j = 0;  j < elementos ; j++ ){
            if (numeros[j] > numeros[j+1]){
                acum =  numeros[j]; 
                numeros[j] = numeros[j+1]; 
                numeros[j+1] = acum; 

            }
        }
    }

    cout << "Arreglo acomodado con el metodo burbuja " << endl ; 

    // mostramos el arreglo ordenado 
    for (int i = 0 ; i < 5 ; i ++) {
        cout << numeros[i] << endl ; 
    }




    return 0; 
}