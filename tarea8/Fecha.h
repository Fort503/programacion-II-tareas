#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
class Fecha{
    private:
        int dia;
        int mes;
        int anio;

    public:
        Fecha() {
            this->dia = 0;
            this->mes = 0;
            this->anio = 0;
        }

        Fecha(int dia, int mes, int anio) {
            this->dia = dia;
            this->mes = mes;
            this->anio = anio;
        }

        void mostrarFecha() {
            cout << this->dia << "/" << this->mes << "/" << this->anio << endl;
        }

};


#endif // FECHA_H_INCLUDED
