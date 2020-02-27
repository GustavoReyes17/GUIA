#ifndef LINEA_H
#define LINEA_H
#include "Punto.h"
#include "iostream"
class Linea
{
    private:
        Punto A;
        Punto B;
    public:
        Linea() {};
        Linea(Punto P1,Punto P2);
        {
            A=P1;
            B=P2;
        }
        Linea(float x1,float y1,float x2,float y2);
        {
            A.AsignarX(x1);
            A.AsignarY(y1);
            B.AsignarX(x2);
            B.AsignarY(y2);
        }
        float Norma();
        {
            float d1=A.AsignarX()-B.AsignarX();
            float d2=A.AsignarY()-B.AsignarY();
            return (d1*d1+d2*d2)
        }
        float Pendiente();
        {
            float m=(A.AsignarY()-B.AsignarY())/(A.AsignarX()-B.AsignarX());
            return m;
        }
        void Ecuacion();
        {

        }
        void Print();
        {

        }
};

#endif // LINEA_H
