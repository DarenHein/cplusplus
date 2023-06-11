// apuntadores con arreglos 
#include <iostream>
using namespace std; 
int main(){

    int elementos =  5 ; 
    int array [elementos] = {1,2,3,4,5}; 
    int * apuntador = array; // * por lo que se solo apunta al primer elemento del array 

    for (int i = 0 ; i< elementos ; i ++){
        cout << *apuntador << endl; 
        apuntador++; // * con esto hacemos el apuntador avance por todas las casillas del array 
    }
    // * que nos muestre la ubicaion de cada uno de los elemtnso del arreglo 
    for(int i = 0 ; i < elementos ; i ++){
        cout << apuntador << endl ; // * con esto tensmoa la ubicaion de memoria de cada uno de los elemtos del array :D 
        apuntador ++ ; 
    }



    return 0; 
}