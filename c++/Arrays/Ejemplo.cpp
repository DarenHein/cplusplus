#include <iostream>

using namespace std; 

int main(){

    string nombre [5] ; 

    for (int i = 0 ; i < 5 ; i++){

        cout << "ingresa el numero -> "  ;
        cin >> nombre[i]; 

    }

    cout << "Nombre ingresados : "; 

    for (int i = 0 ; i < 5 ; i++){

        cout << nombre[i] << endl;
        

    }

    return 0; 
}