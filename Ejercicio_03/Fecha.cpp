#include "Fecha.h"
#include <iostream>
using namespace std;
Fecha::Fecha(int day,int month, int year)
{
    dia=day;
    mes=month;
    anio=year;
    cout<<"Se ha creado una fecha con el dia "<<dia<<", en el mes "<<mes<<" en el anio "<<anio<<endl;
}
void Fecha::AsignarDia(int day)
{
    dia=day;
}
void Fecha::AsignarMes(int month)
{
    mes=month;
}
void Fecha::AsignarAnio(int year)
{
    anio=year;
}
int Fecha::ObtenerDia() const
{
    return dia;
}
int Fecha::ObtenerMes() const
{
    return mes;
}
int Fecha::ObtenerAnio() const
{
    return anio;
}
