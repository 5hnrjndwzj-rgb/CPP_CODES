#include <iostream>
#include <math.h>
using namespace std;

// Funcion suma
void sumar(float a, float b)
{
    cout << "Resultado de la suma: " << a + b << endl;
}

// Funcion resta
void restar(float a, float b)
{
    cout << "Resultado de la resta: " << a - b << endl;
}

// Funcion multiplicacion
void multiplicar(float a, float b)
{
    cout << "Resultado de la multiplicacion: " << a * b << endl;
}

// Funcion division
void dividir(float a, float b)
{
    if(b != 0)
    {
        cout << "Resultado de la division: " << a / b << endl;
    }
    else
    {
        cout << "Error: no se puede dividir entre cero." << endl;
    }
}

// Funcion potencia
void potencia(float base, float exponente)
{
    cout << "Resultado de la potencia: " << pow(base, exponente) << endl;
}

// Funcion raiz cuadrada
void raiz(float numero)
{
    if(numero >= 0)
    {
        cout << "Resultado de la raiz cuadrada: " << sqrt(numero) << endl;
    }
    else
    {
        cout << "Error: no existe raiz real de un numero negativo." << endl;
    }
}

int main()
{
    int opcion;
    float num1, num2;
    char continuar;

    do
    {
        cout << "\n===== MENU DE OPERACIONES =====" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Potencia" << endl;
        cout << "6. Raiz cuadrada" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion)
        {
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                sumar(num1, num2);
                break;

            case 2:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                restar(num1, num2);
                break;

            case 3:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                multiplicar(num1, num2);
                break;

            case 4:
                cout << "Ingrese el dividendo: ";
                cin >> num1;
                cout << "Ingrese el divisor: ";
                cin >> num2;
                dividir(num1, num2);
                break;

            case 5:
                cout << "Ingrese la base: ";
                cin >> num1;
                cout << "Ingrese el exponente: ";
                cin >> num2;
                potencia(num1, num2);
                break;

            case 6:
                cout << "Ingrese el numero: ";
                cin >> num1;
                raiz(num1);
                break;


            default:
                cout << "Opcion invalida." << endl;
                break;
        }

        cout << "\nDesea continuar? S/n: ";
        cin >> continuar;

    } while(continuar == 'S' || continuar == 's');
    return 0;
}