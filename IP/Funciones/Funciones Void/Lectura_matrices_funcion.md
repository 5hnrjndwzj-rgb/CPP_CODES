# Suma de Matrices 3×3 en C++

Este programa permite:

- Leer dos matrices de tamaño **3×3**.
- Sumar ambas matrices elemento por elemento.
- Mostrar las matrices originales y la matriz resultante.

## Código Fuente

```cpp
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
```

## Explicación de las funciones

### `leerMatriz()`

Permite capturar los valores de una matriz de tamaño 3×3 utilizando dos ciclos `for`.

```cpp
void leerMatriz(int M[3][3])
```

### `sumarMatrices()`

Realiza la suma elemento por elemento de las matrices `A` y `B`, almacenando el resultado en la matriz `C`.

```cpp
void sumarMatrices(int A[3][3],
                   int B[3][3],
                   int C[3][3])
```

### `mostrarMatriz()`

Muestra en pantalla los elementos de una matriz organizada en filas y columnas.

```cpp
void mostrarMatriz(int M[3][3])
```

## Ejemplo de Entrada

```
CAPTURA MATRIZ A

1 2 3
4 5 6
7 8 9

CAPTURA MATRIZ B

9 8 7
6 5 4
3 2 1
```

## Salida Esperada

```
MATRIZ A

1   2   3
4   5   6
7   8   9

MATRIZ B

9   8   7
6   5   4
3   2   1

MATRIZ SUMA

10  10  10
10  10  10
10  10  10
```

## Conceptos Utilizados

- Arreglos bidimensionales.
- Funciones sin valor de retorno (`void`).
- Paso de matrices como parámetros.
- Ciclos `for` anidados.
- Operaciones aritméticas con matrices.
- Entrada y salida estándar con `cin` y `cout`.