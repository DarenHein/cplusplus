#include <iostream>
using namespace std ; 

int funcion(int a){
    if (a > 0 ){
        cout << "el numero es par"; 
    }else {
        cout << "El numero no es par " ; 
    }
}
int main (){

    int numero ; 
    cout << "Ingresa el numero ->" ; 
    cin >> numero ; 
    funcion(numero); 
    return 0 ; 
}