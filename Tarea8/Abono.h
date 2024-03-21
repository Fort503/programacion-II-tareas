#ifndef ABONO_H_INCLUDED
#define ABONO_H_INCLUDED
#include "Fecha.h"
class Abono {
    private:
        Fecha* fechaAbono;
        float montoAbono;

    public:
        Abono(Fecha* fecha, float montoAbono) {
            this->fechaAbono = fecha;
            this->montoAbono = montoAbono;
        }

        Fecha* getFechaAbono() {
            return this->fechaAbono;
        }

        float getMontoAbono() {
            return this->montoAbono;
        }
};


#endif // ABONO_H_INCLUDED
