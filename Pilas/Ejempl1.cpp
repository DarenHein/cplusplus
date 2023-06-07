// TODO las pilas con colecion de datos a diferencia de los arreglos este tiene un orden de salida el ultimo en entrar es el primero en salir 
// ! ahirata veremos un ejemplo 
#include <iostream>
#include <stack>// Todo suma importancia incluri esta libreria 

using namespace std ; 

stack <int> pila; // todo aqui declaremos el nombre y tipo para la pila stck es palabra reservada 

int main(){

    // todo solo hay dos acciones para las pilas agrega (push) y borrar (pull)
    // ! agregar elementos 
    pila.push(10); // todo con esto almacemanos un elemento en la pila 
    pila.push(12); 
    pila.push(13); 
    pils.push(14); 
    pila.push(15); 
    // todo ahora paa imprimir un elemento de la fila hay que recordo que el elemento que se imprima fue EL ULITMO EN SER AGREGADO ALA PILA 
    cout << pila.top(); // * para imprimir ocupamos el metodo top 

    // todo para eliminar un elemmento de la pila ocupamos el metodo pop()
    pila.pop(); // * y con esto eleminamos el EL ULTIMO ELEMENTO AGREGADO ALA PILA 

    return  0; 
}