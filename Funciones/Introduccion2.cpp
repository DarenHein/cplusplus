// todo las funciones tambien puede retornar un valor asi como en java te extrañamos java 
#include <iostream>
using namespace std ; 

int suma(int a , int b){// todo creamos la funcion con parametros los valores que necesitamos 
    int resultado = a+b ; // todo creamos una operacion con los parametros en una nueva variable 
    return resultado; // todo solo regresa esta varible 
    // ? osea llevan los datos realisan la accion dentro de la funcion y regresan como algo nuevo con el return 
}
int main (){

    int num ; 
    int num2 ; // ! variables de cajon 
    int sumar ; 

    cout << "Ingresa el valor de a "; 
    cin >> num ;                        // ! pedimos datos 
    cout << "Ingresa el valor de b "; 
    cin >> num2 ; 
    sumar = suma(num,num2); // ? aqui ocupamos la funcion pero mandamos las variables de cajon al metodo 
    cout << "El resultado de la suma es -> " << sumar ; 
    

    



    return 0; 
}