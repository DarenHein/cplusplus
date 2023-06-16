//Ejercicio 1: Saludo personalizado
//Escribe un programa que solicite al usuario su nombre y luego llame a una función llamada saludoPersonalizado() para imprimir un saludo personalizado que incluya el nombre del usuario.

#include <iostream>
using namespace std; 

string saludo (string nombre ){
     cout << "Hola " << nombre << endl;  
}

int main (){
    string name ; 
    cout << "Ingresa el nombre -> " ; 
    cin >> name ; 
    saludo(name); 
     
}