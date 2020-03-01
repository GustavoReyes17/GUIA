#ifndef LINEA_H
#define LINEA_H
#include "Punto.h"
#include <math.h>
#include <iostream>
using namespace std;
class Linea
{
    private:
        Punto P1;
        Punto P2;
    public:
        Linea()
        {
            cout<<"Se ha creado una Linea"<<endl;
        }
        void AsignarP1(float x,float y)
        {
            P1.AsignarX(x);
            P1.AsignarY(y);
        }
        void AsignarP2(float x,float y)
        {
            P2.AsignarX(x);
            P2.AsignarY(y);
        }
        float Slope()
        {
            float m=(P2.ObtenerY()-P1.ObtenerY())/(P2.ObtenerX()-P1.ObtenerX());
            return m;
        }
        float Norma()
        {
            float d1=P2.ObtenerX()-P1.ObtenerX();
            float d2=P2.ObtenerY()-P1.ObtenerY();
            return sqrt(d1*d1+d2*d2);
        }
        void Condicion()
        {
            if(P2.ObtenerY()==P1.ObtenerY())
            {
                cout<<"Los puntos no tienen una pendiente establecida por lo tanto es una recta vertical"<<endl;
            }
            else
            {
                cout<<"La recta tiene una distancia de: "<<Norma()<<endl;
                cout<<"La pendiente de la recta es: "<<Slope()<<endl;
                Ecuacion();
            }
        }
        void Ecuacion()
        {
            cout<<"La recta tiene una ecuacion Y="<<Slope()<<"(x-("<<P1.ObtenerX()<<"))+"<<P1.ObtenerY()<<endl;
        }
};

#endif // LINEA_H
