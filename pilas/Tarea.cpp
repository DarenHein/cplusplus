#include <iostream>
#include <cstdlib>

using namespace std;

struct nodolista {
    char dato;
    struct nodolista* ptrSiguiente;
};

typedef struct nodolista Nodolista;
typedef Nodolista* ptrNodolista;

//prototipo
void insertar(ptrNodolista* ptrs, char valor);
void eliminar(ptrNodolista* ptrs, char valor);
int estaVacia(ptrNodolista ptrActual);
void instrucciones(void);
void imprimeLista(ptrNodolista ptrActual);

int main() {
    ptrNodolista PtrInicial = NULL;
    int eleccion;
    char elemento;
    instrucciones();
    cout << "? ";
    cin >> eleccion;
    //repite mientras no elija 3
    while (eleccion != 3) {
        switch (eleccion) {

        case 1:
            cout << "introduce caracter: ";
            cin >> elemento;
            insertar(&PtrInicial, elemento);
            imprimeLista(PtrInicial);
            break;
        case 2:
            if (!estaVacia(PtrInicial)) {
                cout << "introduzca caracter a eliminar: ";
                cin >> elemento;
                eliminar(&PtrInicial, elemento);
                imprimeLista(PtrInicial);
            }
            else {
                cout << "lista vacia" << endl;
            }
            break;
        default:
            cout << "opcion invalida\n\n" << endl;
            instrucciones();
            break;
        }
        cout << "? ";
        cin >> eleccion;
    }
    cout << "fin de ejecucion In" << endl;
    return 0;
}

void instrucciones(void) {
    cout << "introduzca eleccion" << endl;
    cout << "1- insertar" << endl;
    cout << "2- eliminar" << endl;
    cout << "3- terminar" << endl;
}

//insertar valor en lista	
void insertar(ptrNodolista* ptrs, char valor) {
    ptrNodolista ptrNuevo; //apuntador nodo nuevo
    ptrNodolista ptrAnterior = NULL;
    ptrNodolista ptrActual = *ptrs;
    ptrNuevo = (Nodolista*)malloc(sizeof(Nodolista));
    if (ptrNuevo != NULL) {
        ptrNuevo->dato = valor;
        ptrNuevo->ptrSiguiente = NULL;
        while (ptrActual != NULL && valor > ptrActual->dato) {
            ptrAnterior = ptrActual;
            ptrActual = ptrActual->ptrSiguiente;
        } //fin while
        //insertar nuevo nodo al principio de la lista
        if (ptrAnterior == NULL) {
            ptrNuevo->ptrSiguiente = *ptrs;
            *ptrs = ptrNuevo;
        } //fin si
        else {
            ptrAnterior->ptrSiguiente = ptrNuevo;
            ptrNuevo->ptrSiguiente = ptrActual;
        } //fin else
    } //fin si
    else {
        cout << "no se inserto: " << valor << " No hay memoria" << endl;
    } //fin else
}

//eliminar valor de la lista
void eliminar(ptrNodolista* ptrs, char valor) {
    ptrNodolista ptrAnterior = NULL;
    ptrNodolista ptrActual = *ptrs;
    ptrNodolista ptrTemp;

    // Buscar el nodo a eliminar
    while (ptrActual != NULL && ptrActual->dato != valor) {
        ptrAnterior = ptrActual;
        ptrActual = ptrActual->ptrSiguiente;
    }

    if (ptrActual != NULL) {
        ptrTemp = ptrActual;
        if (ptrAnterior == NULL) {
            // El nodo a eliminar es el primero
            *ptrs = ptrActual->ptrSiguiente;
        }
        else {
            ptrAnterior->ptrSiguiente = ptrActual->ptrSiguiente;
        }
        free(ptrTemp);
    }
}

//Verificar si la lista está vacía
int estaVacia(ptrNodolista ptrActual) {
    return ptrActual == NULL;
}

// Imprimir la lista
void imprimeLista(ptrNodolista ptrActual) {
    if (ptrActual == NULL) {
        cout << "Lista vacia" << endl;
    }
    else {
        cout << "Lista: ";
        while (ptrActual != NULL) {
            cout << ptrActual->dato << " ";
            ptrActual = ptrActual->ptrSiguiente;
        }
        cout << endl;
    }
}