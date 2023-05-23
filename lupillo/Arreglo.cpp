// primer ejeciocio de la semana 2 de profe lupillo 
#include <iostream>

using namespace std; 

int main (){

    int elementos; 
    int op ; 

    do {

        cout <<"\n";
        cout <<"INICIA EL PROGRAMA"<< endl; 

        cout << "Ingresa el numero de calificaiones -> "<<endl; 
        cin >> elementos; 
        string calis[elementos]; 

        for(int i = 0 ; i < elementos ; i++){
            cout<< "Ingresa la calificaion -> "; 
            cin >> calis[i]; 
        }
        cout << "Impresiones" << endl ; 
        for(int i = 0 ; i < elementos ; i++){
            cout << "Las calificaiones son -> " << calis[i] << endl ; 
        }
        cout << "Deseas repetir la opcion " << endl;
        cout << "1 - si "<< endl;
        cout << "2 - no "<< endl; 
        cin >> op ;
    }while (op != 2 ); 

    cout << "Programa Finalizado" << endl; 


    return 0; 
}