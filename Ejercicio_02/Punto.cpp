#include "Punto.h"
#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

Punto::Punto(){};
Punto::Punto(float PosX,float PosY)
{
    x=PosX;
    cout<<"El Valor de X es: "<<x<<endl;
    y=PosY;
    cout<<"El valor de Y es: "<<y<<endl;
}
void Punto::AsignarX(float PosX)
{
    x=PosX;
}
void Punto::AsignarY(float PosY)
{
    y=PosY;
}
float Punto::ObtenerX()
{
    return x;
}
float Punto::ObtenerY()
{
    return y;
}
float Punto::Norma()
{
    float d=sqrt(x*x+y*y);
    return d;
}
