#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    private:
        int dia;
        int mes;
        int anio;
    public:
        Fecha(int day,int month, int year);
        void AsignarDia(int day);
        void AsignarMes(int month);
        void AsignarAnio(int year);
        void Condicion();
        int ObtenerDia() const;
        int ObtenerMes() const;
        int ObtenerAnio() const;
};

#endif // FECHA_H
