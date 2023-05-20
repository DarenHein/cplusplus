#include <iostream>

using namespace std; 

int main(){
    
    int numeros[2]; 
    int numeros2[2]; 
    int resultado[2]; 

    for (int i = 0 ; i < 2 ; i++){
        cout << "1 - ingres un numero -> "; 
        cin >> numeros[i]; 
        cout << "2 - ingres un numero -> "; 
        cin >> numeros2[i];  

        resultado[i] = numeros[i] + numeros2[i]; 
    }

    cout << " reusltaddo "; 
    for (int i = 0 ; i < 2 ; i++){
        cout << resultado[i]; 
    }

    return 0; 
}