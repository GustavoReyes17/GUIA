#ifndef PUNTO_H
#define PUNTO_H
class Punto
{
    private:
        float x;
        float y;
    public:
        Punto(float x_coord, float y_coord);
        Punto();
        void AsignarX(float x_coord);
        void AsignarY(float y_coord);
        float ObtenerX() const;
        float ObtenerY() const;
};

#endif // PUNTO_H
