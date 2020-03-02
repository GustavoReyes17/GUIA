#ifndef TIEMPOTRANS_H
#define TIEMPOTRANS_H
#include "Tiempo.h"
#include <iostream>
using namespace std;
class TiempoTrans
{
    private:
        Tiempo miTiempo;
    public:
        void asignarhor(int Horas)
        {
            miTiempo.AsignarHor(Horas);
        }
        void asignarmin(int Minutos)
        {
            miTiempo.AsignarMin(Minutos);
        }
        void asignarseg(int Segundos)
        {
            miTiempo.AsignarSeg(Segundos);
        }
};

#endif // TIEMPOTRANS_H
