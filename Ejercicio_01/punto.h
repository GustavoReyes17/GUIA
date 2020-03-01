#ifndef PUNTO_H
#define PUNTO_H
using namespace std;
class Punto
{
    public:
        Punto(float PosX,float PosY);
        Punto();
        void AsignarX(float PosX);
        void AsignarY(float PosY);
        void Negate();
        void PrintData();
        float ObtenerX();
        float ObtenerY();
        float Norma();
    private:
        float x;
        float y;
};

#endif
