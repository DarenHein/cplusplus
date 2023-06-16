//Ejercicio 2: Cálculo de área de un rectángulo
//Escribe un programa que pida al usuario ingresar la base y la altura de un rectángulo, y luego llame a una función llamada calcularAreaRectangulo() para calcular y mostrar el área del rectángulo.

# include <iostream>
using namespace std; 

int area(int base , int altura ){
    int resultado = base * altura ; 
    return resultado; 
}
int main(){
    int num ; 
    int num2; 

    cout << "Ingresa la base ->" ; 
    cin >> num ; 
    cout << "Imgresa la altuea " ;
    cin >> num2; 
    int resul = area(num , num2 ); 
    cout << "La base del rectnagulo es -> " << resul ;  



    return 0 ; 
}