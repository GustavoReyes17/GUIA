#include "Point.h"
#include<iostream>
#include<math.h>
using namespace std;
Point::Point()
Point::Point(float cx,float cy)
{
    x=cx;
    y=cy;
}
float Point::SetX();
{
    x=cx;
}
float Point::SetX();
{
    y=cy;
}
void Point::Negate();
{
    cx=cx*(-1);
    cy=cy*(-1);
}
float Point::norma()
{
    float d=sqrt(abs(cx*cx+cy*cy));
    return d*1;
}
void Point::print()
{
    cout<<"Los puntos son ("<<x<<","<<y<<")"<<endl;
    cout<<"La norma es "<<norma()<<" unidades"<<endl;
}
float Point::GetX() const;
{
    return cx;
}
float Point::GetY() const;
{
    return cy;
}
