#include <iostream>
using namespace std;

// Función para leer una matriz
void leerMatriz(int M[3][3])
{
    for(int fila = 0; fila < 3; fila++)
    {
        for(int columna = 0; columna < 3; columna++)
        {
            cout << "Elemento ["
                 << fila << "]["
                 << columna << "]: ";

            cin >> M[fila][columna];
        }
    }
}

// Función para sumar matrices
void sumarMatrices(int A[3][3],
                   int B[3][3],
                   int C[3][3])
{
    for(int fila = 0; fila < 3; fila++)
    {
        for(int columna = 0; columna < 3; columna++)
        {
            C[fila][columna] = A[fila][columna] + B[fila][columna];
        }
    }
}

// Función para mostrar una matriz
void mostrarMatriz(int M[3][3])
{
    for(int fila = 0; fila < 3; fila++)
    {
        for(int columna = 0; columna < 3; columna++)
        {
            cout << M[fila][columna]
                 << "\t";
        }

        cout << endl;
    }
}

int main()
{
    int A[3][3];
    int B[3][3];
    int C[3][3];

    cout << "CAPTURA MATRIZ A" << endl;
    leerMatriz(A);

    cout << "\nCAPTURA MATRIZ B" << endl;
    leerMatriz(B);

    sumarMatrices(A, B, C);

    cout << "\nMATRIZ A" << endl;
    mostrarMatriz(A);

    cout << "\nMATRIZ B" << endl;
    mostrarMatriz(B);

    cout << "\nMATRIZ SUMA" << endl;
    mostrarMatriz(C);

    return 0;
}