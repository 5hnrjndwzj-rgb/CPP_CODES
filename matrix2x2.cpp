#include <iostream>
using namespace std;

int matriz[2][2];

int main()
{
    cout << "Ingrese los elementos de la matriz 2x2:" << endl;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << "Ingresa el elemento [" << i << " , " << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << endl;
    cout << "Imprimir matriz de [2 , 2]" << endl;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}