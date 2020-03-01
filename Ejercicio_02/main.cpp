#include <iostream>
#include "Punto.h"
#include "Linea.h"
using namespace std;

int main()
{
    float a,b,c,d;
    cout<<"Introduzca las coordenadas del primer punto: "<<endl;
    cout<<"Introduzca para X: "<<endl;
    cin>>a;
    cout<<"Introduzca para Y: "<<endl;
    cin>>b;
    cout<<"Introduzca las coordenadas del segundo punto: "<<endl;
    cout<<"Introduzca para X: "<<endl;
    cin>>c;
    cout<<"Introduzca para Y: "<<endl;
    cin>>d;
    Linea miLinea;
    miLinea.AsignarP1(a,b);
    miLinea.AsignarP2(c,d);
    miLinea.Condicion();
    return 0;
}
