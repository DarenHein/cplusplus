#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ; 

struct Nodo
{
    string nombre ; 
    int edad ; 
    float dinero ; 
    float puntucacion ; 
    Nodo* sig ; 
};


int main (){

    bool bandera = true ; 
    bool bandera2 = true ; 
    string nombre ; 
    int edad ; 
    float dinero ; 
    srand(std::time(0));
    int numero_aleatorio; 
    int numero_aleatorio2; 
    int numero_aleatorio3; 
    int numero_aleatorio4; 


while (bandera) {
    numero_aleatorio  = std::rand() % 13 + 1;
    numero_aleatorio2 = std::rand() % 13 + 1;
    numero_aleatorio3 = std::rand() % 13 + 1;
    numero_aleatorio4 = std::rand() % 13 + 1;
    if (numero_aleatorio == numero_aleatorio2 && numero_aleatorio3 == numero_aleatorio4 && numero_aleatorio == numero_aleatorio4 ){
        bandera = true; 
    }else {
        cout << "Hola cada jugador recibira 1 carta gana la carta que mas se acerque al 1 " << endl ; 
        cout << "Antes de empezar vamos a ingresar los datos de los jugadores :D "<< endl ; 


        bandera = false ; 
    }
}  


    return 0; 
}
