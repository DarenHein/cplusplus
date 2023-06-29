/*
las unniones en c++ sirven para ahorra memoria son estructuras que permiten almacenar variables y estas varibales solo puedes ocupar una ala vez es como una caja de herramientas todas estan en la caja pero solo puedes ocuapr una herramienta ala vez la guardas y ocupas otra herramienta 
*/
#include <iostream>
using namespace std ; 

union caja
{
    int numero ; 
    float decimal ; 
    char caracter ; 

};


int main(){

    //! primereo creamos la variable de tipo union 
    caja obj; 
    obj.numero = 10 ; // ! asignamos valro a las variables de la union 
    cout << obj.numero << endl ; 
    obj.decimal = 12.2; 
    cout << obj.numero << endl ; 
    cout << obj.decimal << endl ; 
    obj.caracter = 'a'; 
    cout << obj.numero << endl ; 
    cout << obj.decimal << endl ; 
    cout << obj.caracter << endl ; 



    return 0 ; 
}