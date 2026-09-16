#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Ingrese el numero de ganancias:";
    cin>>a;
    cout<<"Ingrese el numero de perdidas:";
    cin>>b;

    if(a>b)
    {    
        cout<<"Tus ganancias van bien mano, sigue asi"<<endl;
    }
    else
    {
        cout<<"Tus perdidas estan muy fuertes, checa eso"<<endl;     
    }
    return 0;
}