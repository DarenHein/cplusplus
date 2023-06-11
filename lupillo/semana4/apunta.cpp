// todo apuntadores -> velos como flechas esas flechas apuntan a una caja = (variable) esa caja contiene una direccion o ubicacion y que contiene la caja 
#include <iostream>
using namespace std ; 

// todo los apuntadorees simpre se declaran arriba del metodo main o metodo principal 
int numero =  10 ; // todo variable normal 
int *apuntador ; // todo el apuntadordebe de contaner el mismo tipo de dato que la variable ala cual se va apuntar 

int main(){
    
    apuntador = &numero ; // todo estamos apuntando haci una variable 
    numero = 100 ; 
    // todo ahora la diferecia de llmar a memoria o a contenido de una variable 

    cout << *apuntador << endl ; // todo con astrisco apunta a contenido de la variable 
    cout << apuntador << endl ; // todo sin asterisco apunta a ubicaion de memoria 


    return 0 ; 
}