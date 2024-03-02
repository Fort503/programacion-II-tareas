#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED
#include <iostream>
#include <string.h>

using namespace std;

class Trabajador {
    private:
        int codigo;
        string nombre;
        string apellido;
        float sueldoMensual;
        float descuentoIsss;
        float descuentoAfp;
        float descuentoIsr;
        float totalPagar;
        void calcular();

    public:
        Trabajador();
        Trabajador(int, string, string, float);
        int getCodigo();
        float getSueldoMensual();
        string getNombre();
        string getApellido();
        float getDescuentoIsss();
        float getDescuentoAfp();
        float getDescuentoIsr();
        float getTotalPagar();

};

#endif // TRABAJADOR_H_INCLUDED
