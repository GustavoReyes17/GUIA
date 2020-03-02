#ifndef TIEMPO_H
#define TIEMPO_H

class Tiempo
{
    private:
        int Horas;
        int Minutos;
        int Segundos;
    public:
        Tiempo(int Hor,int Min,int Seg);
        void AsignarHor(int Hor);
        void AsignarMin(int Min);
        void AsignarSeg(int Seg);
        int ObtenerHor() const;
        int ObtenerMin() const;
        int ObtenerSeg() const;
};

#endif // TIEMPO_H
