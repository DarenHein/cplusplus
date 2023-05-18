#include <iostream>

using namespace std; 

int main (){
    int estudiantes; 
    int ingles; 
    int mate; 
    int español; 
    int calificaion; 
    string nombre; 
    do{
         cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl; 
         cout << "\t\tCalificaiones"<< endl;                      
         cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
         cout << "Ingresa el numero de estudiantes a calificar -> "; 
         cin >> estudiantes ; 
         cout << "\n"; 
         cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            if (estudiantes <= 0){
            cout<< "Numero de estudiantes invalido "<< endl; 
            }else {
                for (int i = 0 ; i<= estudiantes ; i++){
                 cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                 cout << "Ingresa la calificaion de Matematicas - > "; 
                 cin >> mate; 
                 if (mate <= 0 ){
                    cout << "calificaion invalida";
                    mate = 0;  
                 }
                 else{
                    cout << "Ingresa la calificaion de español -> ";
                    cin >> español; 
                    if (español >= 0){

                    }
                  }

                 

                }

            }
    } while(estudiantes != 0 ); 

    cout << "Hola "; 
     



    return 0; 
}