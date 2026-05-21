#include <iostream>

using namespace std;

int main()
{
    int selector;

    cout << "Ingrese una opcion: ";
    cin >> selector;

    switch(selector)
    {
        case 1:
            cout << "Caso 1" << endl;
            break;

        case 2:
            cout << "Caso 2" << endl;
            break;

        case 3:
            cout << "Caso 3" << endl;
            break;

        case 4:
            cout << "Caso 4" << endl;
            break;

        default:
            cout << "Caso n" << endl;
    }

    return 0;
}