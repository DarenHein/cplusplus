// todod estructuras de control 
// todo lmcr
#include <iostream>
using namespace std; 
struct Nodo
{
    string nombre; 
    string edad ; 
    string peso ; 
    string ide ; 
    string direccion; 
    Nodo* siguiente ; 
};

int main(){

    Nodo* nodo1 = new Nodo; 
    Nodo* nodo2 = new Nodo; 
    string nombre ; 
    string edad ; 
    string peso ; 
    string ide ; 
    string direccion; 
    int op ; 
    int op2 ; 
    
    do{
        cout << "Registro de personas "<<endl; 
        cout << "1 para agregar personas " << endl ; 
        cout << "2 para ver las personas en los nodos" << endl ; 
        cout << "Ingresa tu eleccion -> " ; 
        cin >> op2 ; 
        switch(op2){
            case 1 : 
            cout << "ingresa el nombre de la persona "
            break;
            case 2 : 
            break;
            default : 
            break;
        }
        cout << "Deseas repetir la operacion " << endl ; 
        cout << " 1 si " << endl ;
        cout << " 2 no " << endl ; 
        cin >> op ; 
    }while(op != 3 ); 


    return 0; 
}