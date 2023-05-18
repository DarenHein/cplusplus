#include <iostream>

using namespace std; 

int main(){

    float cali; 
    int resultado; 
    float acum; 
    int nombre ; 
    int alumnos; 
    float calis = 0 ;

    do{
        cout << " ingresa el numero de alumnos -> "; 
        cin >> alumnos ; 

        for (int i = 0 ; i < alumnos ; i++){

            cout << "ingresa el numero de calificaiones -> "; 
            cin >> cali; 

            if ( cali > 0){

                for (int j = 0 ; j < cali ; j++){

                    cout<< "Ingresa la calificaion -> "; 
                    cin >> acum; 

                    if (acum >= 0 && acum <= 10){
                        calis = calis + acum ;
                    }else{
                        cout << "calificaion invalida " << endl; 
                        calis = 0; 
                    }
                    
                }

                resultado = calis / cali ; 
                cout << "Calificaion final -> " << resultado << endl; 
                cout << "\n"; 

            }else {

                cout << "calificaion invalida"<< endl;  
                
            }

        }

    }while(alumnos != 0); 

    return 0; 
}