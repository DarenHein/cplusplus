// TODO metodo burbuja en c++ 
#include <iostream>
using namespace std ; 

int main(){

    // ! el metodo burbuja es un algorttimo de arreglamietno de elementos 
    // * srive pra acomodar variables de tipo numerica y char 

    // TODO ejemplo ganeral 
    int elementos = 5 ; 
    int auxiliar ; 
    int arreglo[elementos]; 

    // TODO llenamos el arreglo 
    for(int i = 0 ; i < elementos ; i ++ ){
        cout << "Ingresa el elemento en la posicion ["<<i<<"]  -> "; 
        cin >> arreglo[i]; 
    }
    //TODO ahora aqui empieza el metodo burbuja 
    for(int i = 0 ; i < elementos ; i++){
        for(int j = 0 ; j < elementos; j++){// ! sigo sin comprender por que usamos doble for 
        if (arreglo[j] > arreglo[j+1]){
            auxiliar =  arreglo[j]; 
            arreglo[j] =  arreglo[j+1]; 
            arreglo[j+1] = auxiliar; 
        }

        }
    }

    // TODO mostramos el arreglo ya acomodado 
    for (int i = 0 ; i < elementos+1 ; i ++ ){
        cout << arreglo[i]; 
    }



    return 0; 
}