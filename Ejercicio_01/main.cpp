#include <iostream>
#include "punto.h"
using namespace std;

int main()
{
    Punto miPunto(5,5);
    miPunto.Negate();
    miPunto.PrintData();
    return 0;
}
