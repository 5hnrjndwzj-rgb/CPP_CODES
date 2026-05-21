#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "EJEMPLO CON WHILE" << endl;
    cout<<"El programa solicita un número y únicamente ejecuta el ciclo si el valor ingresado es mayor que 10."<<endl;
    cout << "Ingresa un numero mayor que 10: ";
    cin >> numero;
    while (numero > 10) {
        cout << "El bloque WHILE se ejecuto" << endl;
        cout << "El numero es mayor que 10" << endl;
        numero--;
    }
    cout << "Fin del programa" << endl;
    return 0;
}