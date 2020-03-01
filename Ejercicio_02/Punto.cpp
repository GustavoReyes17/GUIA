#include "Punto.h"
#include <iostream>
Punto::Punto(float x_coord, float y_coord)
{
    x=x_coord;
    y=y_coord;
}
Punto::Punto(){}
void Punto::AsignarX(float x_coord)
{
    x=x_coord;
}
void Punto::AsignarY(float y_coord)
{
    y=y_coord;
}
float Punto::ObtenerX() const
{
    return x;
}
float Punto::ObtenerY() const
{
    return y;
}
