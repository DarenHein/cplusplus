#include <iostream>

using namespace std; 

int main(){
    // segundo programa del profe lupillo 
    // programa calificaiones de alumnos con while 

    int mate ; 
    int español; 
    int fisica ; 
    int alumnos; 
    int califinal; 
    int acumulador; 

    cout << "Ingresa 1 para iniciar -> "; 
    cin >> acumulador; 
    while (acumulador != 0){

        cout << "Ingresa la calificaion de matematicas -> ";
        cin >> mate; 
        cout << "Ingresa la calificaion de Español -> "; 
        cin >> español; 
        cout << "Ingresa la calificaion de Fisica -> "; 
        cin >> fisica; 
        califinal = (mate + español + fisica ) / 3 ; 
        cout << "la calificaion final es -> " << califinal << endl; 
        if (califinal <= 5  ){
            cout<< "Reprobaste\n"; 
        }else {
            cout << "Aprobaste\n"; 
        }

        cout << "Ingresa 1 para continuar 0 para terminar -> "; 
        cin >> acumulador; 

    }
    
    return 0; 
}
