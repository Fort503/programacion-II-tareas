#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED
#include "Persona.h"

class Trabajador : public Persona {
    private:
        float sueldoMensual;
        float descuentoIsss;
        float descuentoAfp;
        float descuentoIsr;
        void calcular() {
            (this->sueldoMensual >= 1000) ? this->descuentoIsss = 30 : this->descuentoIsss = this->sueldoMensual * 0.03;
            (this->sueldoMensual >= 7500) ? this->descuentoAfp = 543.75 : this->descuentoAfp = this->sueldoMensual * 0.0725;

            float rentaImponible = this->sueldoMensual - this->descuentoAfp - this->descuentoIsss;

            if (rentaImponible < 0) {
                rentaImponible = 0;
            }

            if(rentaImponible >= 0 && rentaImponible <= 472) {
                this->descuentoIsr = 0;
            } else if(rentaImponible > 472 && rentaImponible <= 895.24) {
                this->descuentoIsr = (rentaImponible - 472) * 0.1 + 17.67;
            } else if(rentaImponible > 895.24 && rentaImponible <= 2038.1) {
                this->descuentoIsr = (rentaImponible - 895.24) * 0.2 + 60;
            } else {
                this->descuentoIsr = (rentaImponible - 2038.1) * 0.3 + 288.57;
            }
        }

    public:
        Trabajador() {
            this->codigo = 0;
            this->sueldoMensual = 0;
            this->descuentoAfp = 0;
            this->descuentoIsr = 0;
            this->descuentoIsss = 0;
        }

        Trabajador(int codigo, string nombre, string apellido, float sueldoMensual)  {
            this->codigo = codigo;
            this->nombre = nombre;
            this->apellido = apellido;
            this->sueldoMensual = sueldoMensual;
            calcular();
        }

        int getCodigo() {
            return this->codigo;
        }

        float getSueldoMensual() {
            return this->sueldoMensual;
        }

        string getNombre() {
            return this->nombre;
        }

        string getApellido() {
            return this->apellido;
        }

        float getDescuentoIsss() {
            return this->descuentoIsss;
        }

        float getDescuentoAfp() {
            return this->descuentoAfp;
        }

        float getDescuentoIsr() {
            return this->descuentoIsr;
        }
};

#endif // TRABAJADOR_H_INCLUDED
