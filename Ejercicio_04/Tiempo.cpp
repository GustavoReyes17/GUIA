#include "Tiempo.h"
#include <iostream>
Tiempo::Tiempo(int Hor,int Min,int Seg)
{
    Horas=Hor;
    Minutos=Min;
    Segundos=Seg;
}
void Tiempo::AsignarHor(int Hor)
{
    Horas=Hor;
}
void Tiempo::AsignarMin(int Min)
{
    Minutos=Min;
}
void Tiempo::AsignarSeg(int Seg)
{
    Segundos=Seg;
}
int Tiempo::ObtenerHor() const
{
    return Segundos;
}
int Tiempo::ObtenerSeg() const
{
    return Minutos;
}
int Tiempo::ObtenerMin() const
{
    return Minutos;
}
