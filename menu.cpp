#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int opcion;
    double a, b, resultado;
    do
    {   cout<<"Aplicación de Case y Do while";
        cout << "\n===== MENU =====" << endl;
        cout << "0. Sumar dos numeros" << endl;
        cout << "1. Restar dos numeros" << endl;
        cout << "2. Multiplicar dos numeros" << endl;
        cout << "3. Dividir dos numeros" << endl;
        cout << "4. Potencia" << endl;
        cout << "5. Raiz cuadrada" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch(opcion)
        {
            case 0:
                cout << "Ingrese dos numeros: ";
                cin >> a >> b;
                resultado = a + b;
                cout << "Resultado: " << resultado << endl;
                break;
            case 1:
                cout << "Ingrese dos numeros: ";
                cin >> a >> b;
                resultado = a - b;
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                cout << "Ingrese dos numeros: ";
                cin >> a >> b;
                resultado = a * b;
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                cout << "Ingrese dos numeros: ";
                cin >> a >> b;
                if(b != 0)
                {
                    resultado = a / b;
                    cout << "Resultado: " << resultado << endl;
                }
                else
                {
                    cout << "Error: no se puede dividir entre cero" << endl;
                }
                break;
            case 4:
                cout << "Ingrese la base: ";
                cin >> a;
                cout << "Ingrese el exponente: ";
                cin >> b;
                resultado = pow(a, b);
                cout << "Resultado: " << resultado << endl;
                break;
            case 5:
                cout << "Ingrese un numero: ";
                cin >> a;
                if(a >= 0)
                {
                    resultado = sqrt(a);
                    cout << "Resultado: " << resultado << endl;
                }
                else
                {
                    cout << "Error: no existe raiz real de un numero negativo" << endl;
                }
                break;
            case 6:
                cout << "Programa finalizado" << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
        }
    } while(opcion != 6);

    return 0;
}