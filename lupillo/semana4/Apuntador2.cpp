#include<iostream>
using namespace std;
float * apuntador ; 
int main(){
 float num1, num2, resultado;
  int operador; 
  apuntador = &resultado; 
 cout << "ingresa el primer numero:" << endl;
 cin >> num1;
 cout << "ingresa el segundo numero:" << endl;
 cin >> num2;

 cout << "ingresa la operacion  1 para suma 2 para resta (+, -):";
 cin >> operador;

 switch (operador)
 {
    case 1 :
    resultado = num1 + num2;
    cout << apuntador << endl ; 
    cout << "El reswultado de la suma es:" << resultado << endl;
    break;
    case 2 :
    resultado = num1 - num2;
    cout << "El resultado de la resta:" << resultado << endl;
    break;
 }

 

    return 0;
}