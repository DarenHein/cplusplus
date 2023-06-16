#include <iostream>
#include <limits>

using namespace std;

const int NUM_PRODUCTOS = 100;
const int NUM_MESES = 12;

void obtenerTotalVentasPorProducto(int ventas[][NUM_MESES])
{
    for (int i = 0; i < NUM_PRODUCTOS; i++)
    {
        int totalVentas = 0;
        for (int j = 0; j < NUM_MESES; j++)
        {
            totalVentas += ventas[i][j];
        }
        cout << "Total de ventas del producto " << i + 1 << ": " << totalVentas << std::endl;
    }
}

void obtenerTotalVentasPorMes(int ventas[][NUM_MESES])
{
    for (int j = 0; j < NUM_MESES; j++)
    {
        int totalVentas = 0;
        for (int i = 0; i < NUM_PRODUCTOS; i++)
        {
            totalVentas += ventas[i][j];
        }
            cout << "Total de ventas del mes " << j + 1 << ": " << totalVentas << endl;
    }
}

void obtenerProductoMasVendidoPorMes(int ventas[][NUM_MESES])
{
    for (int j = 0; j < NUM_MESES; j++)
    {
        int maxVentas = numeric_limits<int>::min();
        int productoMasVendido = -1;
        for (int i = 0; i < NUM_PRODUCTOS; i++)
        {
            if (ventas[i][j] > maxVentas)
            {
                maxVentas = ventas[i][j];
                productoMasVendido = i + 1;
            }
        }
        cout << "Mes " << j + 1 << ": Producto más vendido - Producto " << productoMasVendido << endl;
    }
}

void obtenerMesYProductoMasVendido(int ventas[][NUM_MESES])
{
    int maxVentas = std::numeric_limits<int>::min();
    int mesProductoMasVendido = -1;
    int productoMasVendido = -1;

    for (int j = 0; j < NUM_MESES; j++)
    {
        for (int i = 0; i < NUM_PRODUCTOS; i++)
        {
            if (ventas[i][j] > maxVentas)
            {
                maxVentas = ventas[i][j];
                mesProductoMasVendido = j + 1;
                productoMasVendido = i + 1;
            }
        }
    }
    cout << "Mes más vendido: " << mesProductoMasVendido << endl;
    cout << "Producto más vendido: " << productoMasVendido << endl;
    cout << "Cantidad de ventas: " << maxVentas << endl;
}

int main()
{
    int ventas[NUM_PRODUCTOS][NUM_MESES];

    

    obtenerTotalVentasPorProducto(ventas);
    obtenerTotalVentasPorMes(ventas);
    obtenerProductoMasVendidoPorMes(ventas);
    obtenerMesYProductoMasVendido(ventas);

    return 0;
}