#include <iostream>

// programa con bandera 

using namespace std; 

int main(){

    int cali ; 
    int cali2 ; 
    int cali3 ; 
    int califinal; 
    int alumnos ; 
    int op ; 
    string nombre ; 

    do {

        cout <<  "ingresa la cantidad de alumnos que deseas evaluar "; 
        cin >> alumnos; 

        for(int i = 1 ; i<= alumnos ; i++){
            cout <<  "ingresa el nombre del alumno -> "; 
            cin >> nombre ; 
            cout << "Ingresa la calificaion de matematicas -> "; 
            cin >> cali ; 
            cout << "Ingresa la calificaion de español -> "; 
            cin >> cali2 ; 
            cout << "Ingresa la calificacion de fisica -> "; 
            cin >> cali3; 
            califinal = (cali + cali2 + cali3) / 3; 
            cout << "La calificacion final de -> " << nombre << " es de -> " << califinal << endl ; 
            if (califinal <= 5){
                cout << "Reprueba\n"; 
            }else {
                cout << "Aprueba\n"; 
            }
        }
        
        cout << "Deseas salir de la operacion \n "; 
        cout << "1 si\n";
        cout << "2 no\n "; 
        cout << "digita tu opcion -> "; 
        cin >> op; 
        
    } while( op != 1); 
    
    return 0 ; 
}