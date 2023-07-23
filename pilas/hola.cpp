// todo tarea pos luis manjarrez 
// todo nodos ide nombre peso direccion edad y peso 
#include <iostream>
using namespace std; 
struct Nodo
{
    /* data */
    string nombre ; 
    string direccion; 
    string ide ; 
    int edad ; 
    float peso ; 
    Nodo* siguiente; 

};

int main(){
    string nombre2 ; 
    string direccion2; 
    string ide2 ;
    int edad2 ; 
    float peso2 ;
    string nombre3; 
    string direccion3; 
    string ide3; 
    int edad3 ; 
    float peso3; 
    int op2; 
    int op ;  
    Nodo* nodo = new Nodo; 
    Nodo* nodo2 = new Nodo; 
    nodo->siguiente = nodo2; 
    nodo2->siguiente = nullptr;
    do {
        Nodo* actual = new Nodo;  
        cout << "Registro"<< endl ; 
        cout << "Lee las opciones y escoje la de tu agrado : " << endl; 
        cout << "1 registrar persona "<< endl ; 
        cout << "2 ver todas las personas registradas "<< endl ; 
        cout << "Digita tu opcion -> "; 
        cin >> op2 ; 
        switch(op2){
            case 1 : 
             if (nodo->nombre.empty() == true) {
                 cout << "registro en eñ nodo "<< endl  ;   
                 cout << "Registro de personas " << endl ; 
                 cout << "Ingresa el nombre : " ; 
                 cin >> nombre2 ; 
                 cout << "ingresa la edad : "  ; 
                 cin >> edad2; 
                 cout << "Ingresa el ide de la persona : "  ; 
                 cin >> ide2 ; 
                 cout << "ingresa el peso de la persona : "  ; 
                 cin >> peso2 ; 
                 cout << "ingresa la direccion de correo :"  ; 
                 cin >> direccion2;    
                 nodo -> nombre = nombre2 ; 
                 nodo -> direccion = direccion2; 
                 nodo -> peso = peso2 ; 
                 nodo -> edad = edad2 ; 
                 nodo -> ide = ide2 ;             
            } else {
                 cout << "registro en eñ nodo2 "<< endl  ;       
                 cout << "Registro de personas " << endl ; 
                 cout << "Ingresa el nombre : " ; 
                 cin >> nombre3 ; 
                 cout << "ingresa la edad : "  ; 
                 cin >> edad3; 
                 cout << "Ingresa el ide de la persona : "  ; 
                 cin >> ide3 ; 
                 cout << "ingresa el peso de la persona : "  ; 
                 cin >> peso3 ; 
                 cout << "ingresa la direccion de correo :"  ; 
                 cin >> direccion3;    
                  nodo2 -> nombre = nombre3 ; 
                  nodo2 -> direccion = direccion3; 
                  nodo2 -> peso = peso3 ; 
                  nodo2 -> edad = edad3 ; 
                  nodo2 -> ide = ide3 ;             
            }
            break;
            case 2 : 
            nodo -> nombre = nombre2 ; 
            nodo -> direccion = direccion2; 
            nodo -> peso = peso2 ; 
            nodo -> edad = edad2 ; 
            nodo -> ide = ide2 ; 
            nodo2 -> nombre = nombre3 ; 
            nodo2 -> direccion = direccion3; 
            nodo2 -> peso = peso3 ; 
            nodo2 -> edad = edad3 ; 
            nodo2 -> ide = ide3 ; 
            actual = nodo ;
            if (!actual->nombre.empty()){
                   
                    while(actual != nullptr){
                        if(!actual->nombre.empty()){
                            cout << "Nombre : "<< actual->nombre << endl  ; 
                            cout << "Direccion : "<<actual->direccion << endl; 
                            cout << "Peso :" <<actual->peso << endl; 
                            cout << "ide : "<<actual->ide << endl; 
                            actual = actual->siguiente; 
                        }else {
                            actual = nullptr; 
                        }
                    }
                }else {
                      cout << "no hay registro " << endl ; 
                    
                }
            break;
            default : 
            cout << "opcion invalida intente de nuevo "<< endl ; 
            break;
        }
        cout << "deseas repetir la opreacion " << endl ; 
        cout << "1 si " << endl ; 
        cout << "2 no " << endl ; 
         
    }while(op != 2); 
    


    return 0; 
}