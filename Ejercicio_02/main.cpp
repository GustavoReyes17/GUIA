#include <iostream>
#include "Punto.h"
#include "Linea.h"
using namespace std;

int main()
{
    Point P1(1,2);
    Point P2(6,7);

    Linea L1(P1,P2);
    Linea L2(1,2,8,9);


    return 0;
}
