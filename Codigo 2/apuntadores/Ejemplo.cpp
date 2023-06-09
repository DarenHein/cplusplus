// todo los apunutadores en pocas palvras son variables que señalan el  espacio en memoria ala variable q estan apuntando pueden mostrar el valor de la variable o el espacio en memoria donde se ubica 
#include <iostream>
using namespace std; 

 // todo declaramos una variable 
    int numero =  85 ; 
    // todo declaramos el apuntador del mismo tipo de la variable ala cual vamos a apuntar 
    int *apuntador; // * este apuntador aun es nulo 
    


int main(){
    apuntador = &numero; // todo con esto apuntamos ala variable deseadd 
    cout << *apuntador << endl; // todo con el asterisco imprimimos el valor que contiene la variable apuntada 
    cout << apuntador << endl; // todo si quitamos el asterisco devuelve DONDE se encuentra la variable 
   


    return 0; 
}