#include <iostream>
using namespace std;
// Función para leer la matriz de 3x3 
void leerMatriz(int matriz[3][3])
{
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int fila = 0; fila < 3; fila++)
    {
        for(int columna = 0; columna < 3; columna++)
        {
            cout << "Elemento [" << fila << "][" << columna << "]: ";
            cin >> matriz[fila][columna];
        }
    }
}
// Función para motrar la matriz
void mostrarMatriz(int matriz[3][3])
{
    cout << "\nMatriz capturada:\n" << endl;
    for(int fila = 0; fila < 3; fila++)
    {
        for(int columna = 0; columna < 3; columna++)
        {
            cout << matriz[fila][columna] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    int matriz[3][3];
    leerMatriz(matriz);
    mostrarMatriz(matriz);
    return 0;
}