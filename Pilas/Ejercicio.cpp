#include <iostream>
#include <stack>

using namespace std ; 
stack <int> pila; 

int main(){
    int mayor; 
    // todo de una pila escojer cual es elemento mas grande 
    pila.push(1); 
    pila.push(2); 
    pila.push(3); 
    pila.push(4); 

    while(pila.size() > 0){
        
        if (mayor < pila.top()){
            mayor =  pila.top(); 
            
        }
        pila.pop(); 


    }
    cout << mayor << endl ; 


    return 0 ; 
}