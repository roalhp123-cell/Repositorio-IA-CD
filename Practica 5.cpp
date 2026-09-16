#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string tipo1,tipo2,tipo3;
    cout<<"Ingresa las 3 caracteristicas:"<<endl;
    cin >> tipo1 >> tipo2 >> tipo3;
    if (tipo1 == "vertebrado") {
        
        if (tipo2 == "ave") {
            if (tipo3 == "carnivoro") {
                cout << "aguia" << endl;
            } else if (tipo3 == "onivoro") {
                cout << "pomba" << endl;
            }
        } 
        else if (tipo2 == "mamifero") {
            if (tipo3 == "onivoro") {
                cout << "homem" << endl;
            } else if (tipo3 == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
        
    } else if (tipo1 == "invertebrado") {
        
        if (tipo2 == "inseto") {
            if (tipo3 == "hematofago") {
                cout << "pulga" << endl;
            } else if (tipo3 == "herbivoro") {
                cout << "lagarta" << endl;
            }
        } 
        else if (tipo2 == "anelideo") {
            if (tipo3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else if (tipo3 == "onivoro") {
                cout << "minhoca" << endl;
            }
        }
    } else {
        cout << "Caracteristicas no reconocidas en el diagrama." << endl;
    }

    return 0;
}