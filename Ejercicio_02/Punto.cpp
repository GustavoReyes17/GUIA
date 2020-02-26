#include "Punto.h"
#include <iostream>
using namespace std;
Punto::Punto(float x_coord,float y_coord)
{
    x=x_coord;
    y=y_coord;
}
void Punto::AsignarX(float x_coord)
{
    x=x_coord;
}
void Punto::AsignarY(float y_coord)
{
    y=y_coord;
}
float Punto::RegresarX() const
{
    return x;
}
float Punto::RegresarY() const
{
    return y;
}
