#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Función para calcular la media
double calcularMedia(const vector<int>& datos) {
    int suma = 0;
    for (int i = 0; i < datos.size(); i++) {
        suma += datos[i];
    }
    return static_cast<double>(suma) / datos.size();
}

// Función para calcular la moda
vector<int> calcularModa(const vector<int>& datos) {
    vector<int> moda;
    vector<int> conteo(datos.size(), 0);
    int maxConteo = 0;

    for (int i = 0; i < datos.size(); i++) {
        conteo[datos[i]]++;
        maxConteo = max(maxConteo, conteo[datos[i]]);
    }

    for (int i = 0; i < conteo.size(); i++) {
        if (conteo[i] == maxConteo) {
            moda.push_back(i);
        }
    }

    return moda;
}

// Función para calcular la mediana
double calcularMediana(const vector<int>& datos) {
    vector<int> copiaDatos = datos;
    sort(copiaDatos.begin(), copiaDatos.end());

    if (copiaDatos.size() % 2 == 0) {
        int indice1 = copiaDatos.size() / 2 - 1;
        int indice2 = copiaDatos.size() / 2;
        return static_cast<double>(copiaDatos[indice1] + copiaDatos[indice2]) / 2;
    } else {
        int indice = copiaDatos.size() / 2;
        return copiaDatos[indice];
    }
}

int main() {
    vector<int> datos = { 1, 2, 3, 4, 5, 5, 6, 6, 6, 7 };

    double media = calcularMedia(datos);
    cout << "Media: " << media << endl;

    vector<int> moda = calcularModa(datos);
    cout << "Moda: ";
    for (int i = 0; i < moda.size(); i++) {
        cout << moda[i] << " ";
    }
    cout << endl;

    double mediana = calcularMediana(datos);
    cout << "Mediana: " << mediana << endl;

    return 0;
}