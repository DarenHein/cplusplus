#include <iostream>

using namespace std; 

int main(){

    int cali; 
    int cali2;
    int cali3; 
    int resultado; 
    int estu; 

    do{
        cout<<"ingresa el numero de estudiantes a calificar "; 
        cin >> estu ; 
        for ( int i = 0 ; i < estu; i++){
            cout<< "ingresa la  calificaion "; 
            cin >> cali; 
            if (cali >= 0 && cali <= 10){
                cout<<"Ingresa la segunda calificaion ->"; 
                cin >> cali2; 
                if (cali2 >= 0 && cali2 <=10){
                    cout << "Ingresa la tercera calificaion ->"; 
                    cin >> cali3; 
                    if (cali3 >= 0 && cali3 <= 10){
                        resultado = (cali + cali2 + cali3)/3; 
                        if (resultado < 6){
                            cout << "El alumno reprobo"<<  endl;  
                            cout << "Calificaion 1 -> " << cali << endl; 
                            cout << "Calificaion 2 -> " << cali2 << endl; 
                            cout << "Calificaion 3 -> " << cali3 << endl; 
                            cout << "Calificaion Final -> " << resultado << endl;
                        }else {

                            cout << "El alumno aprovo " << endl; 
                            cout << "Calificaion 1 -> " << cali << endl; 
                            cout << "Calificaion 2 -> " << cali2 << endl; 
                            cout << "Calificaion 3 -> " << cali3 << endl; 
                            cout << "Calificaion Final -> " << resultado << endl; 

                        }
                    }
                }else {
                    cout << "califiacoin invalida " << endl; 
                }

            }
            else {
                cout << "calificion invalida "<< endl;  
            }
        }
              
    }while (estu != 0); 
    return 0; 
}