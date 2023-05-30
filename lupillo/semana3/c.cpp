

#include <iostream>
using namespace std ; 

int main() {
    int rspuesta;
    int rango; 
     int numeros[] = {5, 2, 10, 8, 3}; // Ejemplo de conjunto de números
     

    int minimo = numeros[0]; // Inicializar el número mínimo con el primer elemento
    int maximo = numeros[0]; // Inicializar el número máximo con el primer elemento

    // Recorrer los números restantes y actualizar minimo y maximo según corresponda
    cout << "primero calculamos el rango de la frecuencia" << endl ; 
    for (size_t i = 1; i < 5; i++) {
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }

    // Imprimir el resultado
    cout << "El número menor es: " << minimo << endl;
    cout << "El número mayor es: " << maximo << endl;
    rango =  maximo - minimo ; 
    cout << "El rango es -> " << rango << endl ; 

    return 0;
}