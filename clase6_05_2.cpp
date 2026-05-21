#include <iostream>
using namespace std;
int main() {
    int numero;
    cout<<"El programa ejecuta el bloque al menos una vez y posteriormente verifica si el número ingresado es mayor que 10 para repetir el ciclo."<<endl;
    cout << "EJEMPLO CON DO WHILE" << endl;
    do {

        cout << "El bloque DO WHILE se ejecuto" << endl;

        cout << "Ingresa un numero mayor que 10: ";
        cin >> numero;
    } while (numero > 10);
    cout << "Fin del programa" << endl;
    return 0;
}