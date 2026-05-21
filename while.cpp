#include <iostream>
using namespace std;
int contador,x;
int main() 
{
cout<<"Ingresa un numero"<<endl;
cin>>x;
while (contador <= x) {
cout << contador << endl;
contador = contador + 1;
}
return 0;
}