#ifndef LINEA_H
#define LINEA_H
#include "Punto.h"
#include <math.h>
#include <iostream>
using namespace std;
class Linea
{
    private:
        Punto X1;
        Punto Y1;
        Punto X2;
        Punto Y2;

    public:
        Linea(x_coord,y_coord,x_coord,y_coord)
        {
            X1.AsignarX(x_coord);
            Y1.AsignarY(y_coord);
            X2.AsignarX(x_coord);
            Y2.AsignarY(y_coord);
        }
        float norm()
        {
            float d=sqrt(abs((X1.AsignarX(x_coord)-X2.AsignarX(x_coord))*(X1.AsignarX(x_coord)-X2.AsignarX(x_coord))-(Y1.AsignarY(y_coord)-Y2.AsignarY(y_coord))*(Y1.AsignarY(y_coord)-Y2.AsignarY(y_coord))));
            return d;
        }
        float slope()
        {
            float m=(Y2.AsignarY()-Y1.AsignarY())/(X2.AsignarX()-X1.AsignarX());
            return m;
        }


};

#endif // LINEA_H
