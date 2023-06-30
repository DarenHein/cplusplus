// todo crear un factorial con funcion 
#include <iostream>

using namespace std ; 

int factorial(int numero ){
    int resultado  =  numero ; 
    int resultado2; 
    for (int i = numero ; i > 0 ; i --){
        resultado2 = resultado * (numero-1); 
        resultado = numero ; 
         

    }
    return resultado2; 

}
int main (){

    int numero ; 

    cout << "Ingresa un numero -> " ; 
    cin >> numero ; 

    int resul = factorial(numero); 
    cout << resul ; 

    

    return 0 ; 
}