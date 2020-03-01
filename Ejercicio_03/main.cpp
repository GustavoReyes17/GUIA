#include <iostream>
#include <string>
#include "Fecha.h"
using namespace std;
int main(void)
{
    int d1,m1,a1;
    int d2,m2,a2;
    cout<<"Este es un programa que calcula los dias entre 2 fechas"<<endl;
    cout<<"Se toma en cuenta que los 12 meses tienen 30 dias"<<endl;
    cout<<"================================================="<<endl;
    cout<<"Introduzca el dia, mes y anio de la Fecha 1 (INICIAL)"<<endl;
    cout<<"Dia de la Fecha 1: "<<endl;
    cin>>d1;
    cout<<"Mes de la Fecha 1: "<<endl;
    cin>>m1;
    cout<<"Anio de la Fecha 1: "<<endl;
    cin>>a1;
    Fecha miFecha1(d1,m1,a1);
    cout<<"================================================="<<endl;
    cout<<"Introduzca el dia, mes y anio de la Fecha 2"<<endl;
    cout<<"Dia de la Fecha 2: "<<endl;
    cin>>d2;
    cout<<"Mes de la Fecha 2: "<<endl;
    cin>>m2;
    cout<<"Anio de la Fecha 2: "<<endl;
    cin>>a2;
    Fecha miFecha2(d2,m2,a2);
    if((a1<=a2)||(m1<=m2))
    {
        switch(m1)
        {
            case 1:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Enero/ "<<a1<<endl;
            break;
            case 2:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Febreo/ "<<a1<<endl;
            break;
            case 3:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Marzo/ "<<a1<<endl;
            break;
            case 4:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Abril/ "<<a1<<endl;
            break;
            case 5:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Mayo/ "<<a1<<endl;
            break;
            case 6:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Junio/ "<<a1<<endl;
            break;
            case 7:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Julio/ "<<a1<<endl;
            break;
            case 8:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Agosto/ "<<a1<<endl;
            break;
            case 9:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Septiembre/ "<<a1<<endl;
            break;
            case 10:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Octubre/ "<<a1<<endl;
            break;
            case 11:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Noviembre/ "<<a1<<endl;
            break;
            case 12:
            cout<<"Usted introdujo la fecha: "<<d1<<" /Diciembre/ "<<a1<<endl;
            break;
            default: cout<<"No existe ese mes"<<endl;
            cout<<"================================================="<<endl;
        }
        switch(m2)
        {
            case 1:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Enero/ "<<a2<<endl;
            break;
            case 2:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Febreo/ "<<a2<<endl;
            break;
            case 3:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Marzo/ "<<a2<<endl;
            break;
            case 4:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Abril/ "<<a2<<endl;
            break;
            case 5:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Mayo/ "<<a2<<endl;
            break;
            case 6:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Junio/ "<<a2<<endl;
            break;
            case 7:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Julio/ "<<a2<<endl;
            break;
            case 8:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Agosto/ "<<a2<<endl;
            break;
            case 9:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Septiembre/ "<<a2<<endl;
            break;
            case 10:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Octubre/ "<<a2<<endl;
            break;
            case 11:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Noviembre/ "<<a2<<endl;
            break;
            case 12:
            cout<<"Usted introdujo la fecha: "<<d2<<" /Diciembre/ "<<a2<<endl;
            break;
            default: cout<<"No existe ese mes"<<endl;
        }
        int r1,r2,rd;
        r1=a1*365+m1*30+d1;
        r2=a2*365+m2*30*d2;
        rd=r2-r1;
        cout<<"Han pasado "<<rd<<" dias"<<endl;
    }
    else
        {
            cout<<"Este programa solo calcula fechas posterioes a la inicial"<<endl;
        }

    return 0;
}
