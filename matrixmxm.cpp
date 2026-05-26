#include <iostream>
/* HOla soy olmedo*/
using namespace std;
int m,n;
int main()
{  cout<<"Ingrese la dimension de la matriz mxn :"<<endl;
    cin>>m;
    cin>>n;
     int matriz[m][n];
     for(int i=0;i<m;i++)//Control de Fila 
    {
        for(int j=0;j<n;j++)//Control de Columna
        {   cout<<"Ingresa el elemento: "<<"["<<i+1<<" , "<<j+1<<"]"<<endl;
            cin>>matriz[i][j];
        }
    }
    cout << "Imprimir matriz de"<<"["<<m<<" , "<<n<<"]"<<endl;
        for(int i=0;i<m;i++) //Control de Fila 
    {
        for(int j=0;j<n;j++)//Control de Columna
        {   
            cout<<matriz[i][j]<<"\t"; //"\t" deja una tabulación para que los espacios se ajusten solos
        }
        cout<<endl;
    }
    return 0;
}