#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdlib> 
#define Tamanio 10

void media(const int resp[]);
void mediana(int resp[]);
void moda(int freq[], const int resp[]);
void ordenarBurbuja(int a[]);
void imprimeArreglo(const int a[]);

int main() {
    int frecuencia[10] = {0};
    int respuesta[Tamanio];
    char repetir = 's';

    while (repetir == 's' || repetir == 'S') {
        std::cout << "Ingrese 10 numeros:" << std::endl;
        for (int i = 0; i < Tamanio; i++) {
            std::cout << "Numero " << i + 1 << ": ";
            std::string input;
            std::cin >> input;

      
            while (input.length() != 1 || !isdigit(input[0])) {
                std::cout << "Entrada invalida. Ingrese un numero: ";
                std::cin >> input;
            }

            respuesta[i] = std::atoi(input.c_str()); 
        }

        media(respuesta);
        mediana(respuesta);
        moda(frecuencia, respuesta);

        std::cout << "Desea repetir el proceso? (s/n): ";
        std::cin >> repetir;
    }

    return 0;
}

void media(const int resp[]) {
    int total = 0;
    std::cout << "*MEDIA*" << std::endl;
    std::cout << "ARREGLO ORIGINAL" << std::endl;
    imprimeArreglo(resp);

    for (int i = 0; i < Tamanio; i++) {
        total += resp[i];
    }

    float mean = static_cast<float>(total) / Tamanio;
    std::cout << "La media es: " << mean << std::endl;
}

void mediana(int resp[]) {
    std::cout << "*MEDIANA*" << std::endl;
    std::cout << "ARREGLO ORIGINAL" << std::endl;
    imprimeArreglo(resp);
    ordenarBurbuja(resp);
    std::cout << "ARREGLO ORDENADO" << std::endl;
    imprimeArreglo(resp);

    int middleIndex = Tamanio / 2;
    float median;
    if (Tamanio % 2 == 0) {
        median = static_cast<float>(resp[middleIndex - 1] + resp[middleIndex]) / 2;
    } else {
        median = resp[middleIndex];
    }
    std::cout << "La mediana es: " << median << std::endl;
}

void moda(int freq[], const int resp[]) {
    std::cout << "*MODA*" << std::endl;
    std::cout << "ARREGLO ORIGINAL" << std::endl;
    imprimeArreglo(resp);

    for (int i = 0; i < Tamanio; i++) {
        freq[resp[i] - 1]++;
    }

    int maxFrequency = 0;
    std::cout << "La moda es: ";
    for (int i = 0; i < Tamanio; i++) {
        if (freq[i] > maxFrequency) {
            maxFrequency = freq[i];
        }
    }
    for (int i = 0; i < Tamanio; i++) {
        if (freq[i] == maxFrequency) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << std::endl;
}

void ordenarBurbuja(int a[]) {
    for (int i = 0; i < Tamanio - 1; i++) {
        for (int j = 0; j < Tamanio - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void imprimeArreglo(const int a[]) {
    for (int i = 0; i < Tamanio; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}