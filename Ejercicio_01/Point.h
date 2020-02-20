#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        Point ();
        Point(float cx,float cy);
        float GetX() const;
        float GetY() const;
        float norma();
        void SetX(float cx);
        void SetY(float cy);
        void Negate();
        void print();
    private:
        float x;
        float y;
};

#endif
