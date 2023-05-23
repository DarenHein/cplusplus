// dso vectores se junten en uno y mostrasr el 3 

#include <iostream>

using namespace std; 

int main(){

    int elementos; 
    int elementos2;
    int elementos3;  

    cout << "ingresa lso elementos del primer vector -> "; 
    cin >> elementos; 
    cout << "ingresa los elementos del segundop vector -> "; 
    cin >> elementos2; 

    string vector[elementos]; 
    string vector2[elementos2]; 

    if (elementos == elementos2 ){

        cout << "elemetos del vector 1 y vector 2 son iguales  "<< endl;
        cout << "continua el programa -> " << endl; 

        for (int i = 0 ; i < elementos ; i ++){
            cout << "ingresa el elemento del vector 1 -> "<< endl; 
            cin >> vector[i]; 
        }
        for (int j =0 ; j < elementos ; j++){
            cout << "ingresa el elemento del vector 2 -> "<< endl; 
            cin >> vector2[j]; 
            }
        elementos3 = elementos + elementos2; 

        string vector3 [elementos3]; 

        for (int i = 0 ; i < elementos ; i++){
            vector3[i] = vector[i]; 
        }
        for (int i = elementos ; i < elementos3 ; i++){
            vector3[i] = vector2[i - elementos]; 
        }
        for (int i = 0 ; i < elementos3 ; i++){
            cout<< vector3[i] << endl; 
        }

    }else {
        cout << "Elementos del vector no coinciden "<< endl ; 
    }



    return 0; 
}

