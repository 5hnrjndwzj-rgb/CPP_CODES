#include <iostream>
using namespace std;
// Función suma
void sumar(float a, float b)
{
    cout << "Suma: "
         << a + b
         << endl;
}
// Función resta
void restar(float a, float b)
{
    cout << "Resta: "
         << a - b
         << endl;
}
// Función multiplicación
void multiplicar(float a, float b)
{
    cout << "Multiplicacion: "
         << a * b
         << endl;
}
// Función división
void dividir(float a, float b)
{
    if(b != 0)
    {
        cout << "Division: "
             << a / b
             << endl;
    }
    else
    {
        cout << "Error: no se puede dividir entre cero."
             << endl;
    }
}
int main()
{
    float num1;
    float num2;
    cout<<"Programa para realizar operaciones con 2 numeros"<<endl;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "\nRESULTADOS\n";
    sumar(num1, num2);
    restar(num1, num2);
    multiplicar(num1, num2);
    dividir(num1, num2);gi
    return 0;
}