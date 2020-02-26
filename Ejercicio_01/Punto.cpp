#include "Punto.h"
#include <math.h>
#include <iostream>
using namespace std;

Punto::Punto(){};
Punto::Punto(float PosX,float PosY)
{
    x=PosX;
    cout<<"El Valor de X es: "<<PosX<<endl;
    y=PosY;
    cout<<"El valor de Y es: "<<PosY<<endl;
}
void Punto::AsignarX(float PosX)
{
    x=PosX*-1;
}
void Punto::AsignarY(float PosY)
{
    y=PosY*-1;
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
    float d=sqrt(abs(x*x+y*y));
    return d;
}
void Punto::PrintData()
{
    cout<<"El Punto Negativo es: ("<<-x<<","<<-y<<")"<<endl;
    cout<<"El valor de la norma es: "<<Norma()<<endl;
}
