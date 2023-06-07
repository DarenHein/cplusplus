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
    for (int i = pila.size() ; i > 0 ; i++ ){
        cout << pila.top() << endl ; 
        pila.pop(); 
    }

    return 0; 
}