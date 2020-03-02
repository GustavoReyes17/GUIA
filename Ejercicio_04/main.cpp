#include "Tiempo.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int a,b,c;
    int d,e,f;
    cout<<"Este programa calcula los minutos y segundos entre horas"<<endl;
    cout<<"Las horas se deben introducir en un formato de 24 horas"<<endl;
    cout<<"========================================================="<<endl;
    cout<<"Introduzca los valores de la primera hora"<<endl;
    cout<<"Introduzca la hora"<<endl;
    cin>>a;
    cout<<"Introduzca los minutos"<<endl;
    cin>>b;
    cout<<"Introduzca los segundos"<<endl;
    cin>>c;
    cout<<"========================================================="<<endl;
    cout<<"Introduzca los valores de la Segunda hora"<<endl;
    cout<<"Introduzca la hora"<<endl;
    cin>>d;
    cout<<"Introduzca los minutos"<<endl;
    cin>>e;
    cout<<"Introduzca los segundos"<<endl;
    cin>>f;
    Tiempo OldTiempo(a,d,c);
    Tiempo NewTiempo(d,e,f);
    int MinOld=OldTiempo.ObtenerHor()*60+OldTiempo.ObtenerMin();
    int MinNew=NewTiempo.ObtenerHor()*60+NewTiempo.ObtenerMin();
    int SegTot=NewTiempo.ObtenerSeg()-OldTiempo.ObtenerSeg();
    int MinTot=MinNew-MinOld;
    if((OldTiempo.ObtenerHor()<=NewTiempo.ObtenerHor())||(OldTiempo.ObtenerMin()<=NewTiempo.ObtenerMin())||(OldTiempo.ObtenerSeg()-NewTiempo.ObtenerSeg()))
    {
        cout<<"Los Minutos de diferencia son: "<<abs(MinTot)<<endl;
        cout<<"Los Segundos de diferencia son: "<<abs(SegTot)<<endl;
    }
    return 0;
}
