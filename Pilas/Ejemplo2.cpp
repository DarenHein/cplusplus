// todo 
// todo ahora veremos como imprimir todos los datos de pila sin tener que andar imprime uno por uno 

#include <iostream>
#include <stack>

using namespace std ; 

stack <int> pila ; 

int main (){

    pila.push(1); 
    pila.push(2); 
    pila.push(3);
    pila.push(4); 

    // todo todos los elementos estan agregados ala pila ahora visualizaremos todos de golpe 
    for (int i = pila.size() ; i > 0 ; i++ ){// *ocupamos el metodo size praa contar los eleemtnso de la pila  ocupamos el for para recorerr y eliminar cada elemetno de la pila OJO TMABIEN SE PUEDE OCUPAR CUALQUIER BUCLE REPETITIVO  
        cout << pila.top() << endl ; 
        pila.pop(); 
    }
    // * ejemplo de ocupar el while con pilas 
     while (pila.size() > 0 ){ // * este es la forma de ocuparlo 
        cout << pila.top()<< endl  ; 
        pila.pop(); 
    } 

    return 0; 
}