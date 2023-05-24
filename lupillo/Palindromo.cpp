#include <iostream>

using namespace std; 

int main(){

    int elementos ; 
    int op ; 
    do{
        
        cout << "Ingresa de cuantos carateres consta la palabra ->  " ; 
        cin >> elementos ; 
        char palabra [elementos]; 
        if (elementos == 0 || elementos == 1 || elementos == 2 ){

            cout << "La palabra no puede ser un palindromo ! "; 

        }else {

            switch (elementos)
        {
            case 3 :

            cout << "Ingresa los caracteres de la palbra para decidir si es o no es un palindromo " << endl ; 

            for (int i = 0 ; i < elementos ; i ++  ){
                cout<< "Ingresa el caracter -> "  ; 
                cin >> palabra[i];  
            }
            cout << "Palabra registrada con exito !!!" << endl; 

            if (palabra[0] == palabra[2]){
                cout << "Felicidades la palabra es un Palindromo !" << endl;
            }else {
                cout << "La palabra no es un Palindromo " << endl ; 
            }

            break;

            case 4 : 

            cout << "Ingresa los caracteres de la palbra para decidir si es o no es un palindromo " << endl ; 

            for (int i = 0 ; i < elementos ; i ++  ){
                cout<< "Ingresa el caracter -> "  ; 
                cin >> palabra[i];  
            }
            cout << "Palabra registrada con exito !!!" << endl; 

            if (palabra[0] == palabra[3] && palabra[1] == palabra[2]){
                cout << "Felicidades la palabra es un Palindromo !" << endl;
            }else {
                cout << "La palabra no es un Palindromo " << endl ; 
            }

            break;

            case 5 :

             cout << "Ingresa los caracteres de la palbra para decidir si es o no es un palindromo " << endl ; 

            for (int i = 0 ; i < elementos ; i ++  ){
                cout<< "Ingresa el caracter -> "  ; 
                cin >> palabra[i];  
            }
            cout << "Palabra registrada con exito !!!" << endl; 

            if (palabra[0] == palabra[4] && palabra[1] == palabra[3]){
                cout << "Felicidades la palabra es un Palindromo !" << endl;
            }else {
                cout << "La palabra no es un Palindromo " << endl ; 
            }


            break;


        
            default:

            cout << "Opcion Invalida Intenta otra vez !!" << endl ; 
            
            break;
        }

        }; 




        cout << "" << endl ; 
        cout << "Deseas salir del menu -> " << endl; 
        cout << "1 si  " << endl; 
        cout << "2 no " << endl; 
        cout << "Digita tu opcion -> " ; 
        cin >> op ; 

    }while(op != 1 );


    return 0; 
}