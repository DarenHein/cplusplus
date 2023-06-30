#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ; 

struct Nodo
{
    string nombre ; 
    int edad ; 
    int puntuacion; 
    int derrotas ;  
    Nodo* sig ; 
};


int main (){

    bool bandera = true ; 
    bool bandera2 = true ; 
    string nombre ; 
    string nombre2 ; 
    string nombre3 ; 
    string nombre4 ; 
    int edad ; 
    int edad2 ; 
    int edad3 ; 
    int edad4 ; 
    srand(std::time(0));
    int numero_aleatorio; 
    int numero_aleatorio2; 
    int numero_aleatorio3; 
    int numero_aleatorio4; 
    string puntuacion1 = "*"; 
    string puntuacion2 = "*"; 
    string puntuacion3 = "*"; 
    string puntuacion4 = "*"; 
    int ganados = 0 ; 
    int ganados2 = 0 ; 
    int ganados3 = 0; 
    int ganados4 = 0; 
    int derrotas1 = 0;  
    int derrotas2 = 0;  
    int derrotas3 = 0;  
    int derrotas4 = 0;  
    int carta ; 
    int carta2 ; 
    int carta3 ; 
    int carta4 ; 
    bool h = false; 
    bool h2 = false; 
    bool h3 = false; 
    int op; 

        cout << "Hola cada jugador recibira 1 carta gana la carta que mas se acerque al 1 " << endl ; 
        cout << "Antes de empezar vamos a ingresar los datos de los jugadores :D "<< endl ; 
        Nodo* nodo = new Nodo(); //! jugador 1
        Nodo* nodo2 = new Nodo(); //!jugador 2
        Nodo* nodo3 = new Nodo(); // !Jugador 3 
        Nodo* nodo4 = new Nodo(); //! jugador 4 
        cout << "---------------------------------------------------------------------------" << endl ; 
        cout << "Primero jugador 1 " << endl ; 
        cout << "Ingresa tu nombre :D ";
        cin >> nombre ; 
        cout << "Ingresa tu edad " ; 
        cin >> edad ; 
        nodo->nombre = nombre ; 
        nodo->edad = edad ;
        cout << "---------------------------------------------------------------------------" << endl ; 
        cout << "Jugador 2 " << endl ; 
        cout << "Ingresa tu nombre :D ";
        cin >> nombre2 ; 
        cout << "Ingresa tu edad " ; 
        cin >> edad2 ; 
        nodo2->nombre = nombre2 ; 
        nodo2->edad = edad2 ; 
        cout << "---------------------------------------------------------------------------" << endl ; 
        cout << "Jugador 3 " << endl ; 
        cout << "Ingresa tu nombre :D ";
        cin >> nombre3 ; 
        cout << "Ingresa tu edad " ; 
        cin >> edad3 ; 
        nodo3->nombre = nombre3 ; 
        nodo3->edad = edad3 ;
        cout << "---------------------------------------------------------------------------" << endl ; 
        cout << "Jugador 4 " << endl ; 
        cout << "Ingresa tu nombre :D "; 
        cin >> nombre4 ; 
        cout << "Ingresa tu edad " ; 
        cin >> edad4 ; 
        nodo4->nombre = nombre4 ; 
        nodo4->edad = edad4 ;


while (bandera) {
    numero_aleatorio  = std::rand() % 13 + 1;
    numero_aleatorio2 = std::rand() % 13 + 1;
    numero_aleatorio3 = std::rand() % 13 + 1;
    numero_aleatorio4 = std::rand() % 13 + 1;
    if (numero_aleatorio == numero_aleatorio2 && numero_aleatorio3 == numero_aleatorio4 && numero_aleatorio == numero_aleatorio4 ){
        bandera = false; 
    }else {
        carta = numero_aleatorio; 
        carta2 = numero_aleatorio2; 
        carta3 = numero_aleatorio3; 
        carta4 = numero_aleatorio4; 
        cout << "---------------------------------------------------------------------------" << endl ; 
        cout << "Empieza el juego !!!!" << endl ; 
        cout << "Carta ->" <<nombre<<"-> " << carta << endl ;   
        cout << "Carta ->" <<nombre2<<"-> " << carta2 << endl ;   
        cout << "Carta ->" <<nombre3<<"-> " << carta3 << endl ;   
        cout << "Carta ->" <<nombre4<<"-> " << carta4 << endl ; 

    int menor = carta ; 

    if (carta2 < menor) {
        menor = carta2;
        ganados2 = ganados2 + 1 ; 
        
    }else{
        derrotas2 = derrotas2 + 1 ; 
        h = true ; 
        
    }

    if (carta3 < menor) {
        menor = carta3; 
        ganados3 = ganados3 + 1 ; 
        
    }else {
        derrotas3 = derrotas3 + 1; 
        h2 = true ; 
        
    }

    if (carta4 < menor) {
        menor = carta4;
        ganados4 = ganados4 +1 ; 
       
    }else{
        derrotas4 = derrotas4 + 1 ; 
        h3 = true ; 
         
    }
    if (h == true && h2 == true && h3 == true){
        menor = carta ; 
        ganados = ganados + 1 ; 
    }else {
        derrotas1 = derrotas1 + 1 ; 
    }
    nodo->puntuacion = ganados; 
    nodo2->puntuacion = ganados2; 
    nodo3->puntuacion = ganados3; 
    nodo4->puntuacion = ganados4;
    nodo->derrotas = derrotas1; 
    nodo2->derrotas = derrotas2; 
    nodo3->derrotas = derrotas3; 
    nodo4->derrotas = derrotas4; 

    cout << "---------------------------------------------------------------------------" << endl ; 
    cout << "La carta ganadora es -> " << menor << endl ; 
    cout << "---------------------------------------------------------------------------" << endl ; 

        nodo->sig = nodo2; 
        nodo2->sig = nodo3; 
        nodo3->sig = nodo4; 
        nodo4->sig = nullptr; 

        cout << "TABLA DE JUEGO " << endl ; 

        Nodo* actual = nodo ; 
        int i = 1 ; 
        while (actual != nullptr){
            cout << "---------------------------------------------------------------------------" << endl ; 
            cout << "Jugador " << i << endl ; 
            cout <<"Nombre : " <<actual->nombre << endl ; 
            cout <<"Edad : " <<actual->edad << endl ; 
            cout <<"Puntuacion : " <<actual->puntuacion << endl ; 
            cout <<"Derrotas : " <<actual->derrotas << endl ; 
            actual = actual->sig; 
            i = i + 1;  
        }

    
        cout << "Otra ronda o tu esposa te pega  \n 1 si \n 2 no " << endl ; 
        cin >> op ; 
        if (op == 1 ){
            bandera = true;  
        }else {
            bandera = false ; 
            for (int i = 0 ; i <= ganados ; i ++){
                cout << puntuacion1  ;
            }
            cout << "" << endl; 
             for (int i = 0 ; i <= ganados2 ; i ++){
                cout << puntuacion2  ;
            }
            cout << "" << endl;
             for (int i = 0 ; i <= ganados3 ; i ++){
                cout << puntuacion3  ;
            }
            cout << "" << endl;
             for (int i = 0 ; i <= ganados4 ; i ++){
                cout << puntuacion4  ; 
            }


        }

        
    }
}  


    return 0; 
}
