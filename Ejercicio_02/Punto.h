#ifndef PUNTO_H
#define PUNTO_H

class Punto
{
    public:
        Punto(float x_coord,float y_coord);
        void AsignarX(float x_coord);
        void AsignarY(float y_coord);
        float RegresarX() const;
        float RegresarY() const;
    private:
        float x;
        float y;
};

#endif // PUNTO_H
